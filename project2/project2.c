#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

int action[12][6] = {
	{5, 0, 0, 4, 0, 0}, {0, 6, 0, 0, 0, ACC}, {0, -2, 7, 0, -2, -2},
	{0, -4, -4, 0, -4, -4}, {5, 0, 0, 4, 0, 0}, {0, -6, -6, 0, -6, -6},
	{5, 0, 0, 4, 0, 0}, {5, 0, 0, 4, 0, 0}, {0, 6, 0, 0, 11, 0},
	{0, -1, 7, 0, -1, -1}, {0, -3, -3, 0, -3, -3}, {0, -5, -5, 0, -5, -5} };

int go_to[12][3] = {
	{1, 2, 3}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {8, 2, 3}, {0, 0, 0}, 
	{0, 9, 3}, {0, 0, 10}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

int prod_left[7] = {0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_length[7] = {0, 3, 1, 3, 1, 3, 1};

typedef enum{INT, FLOAT}type;
typedef union {
	int dValue;
	float fValue;
} value;
typedef struct {
	type T;
	value V;
	int token_start_index;
} TT;

// 에러 처리 관련
int command_index = 0; // 입력된 수식의 인덱스
int ew_list[1000]; // 에러, 경고 표시할 부분의 인덱스를 저장할 배열
int ew_last = -1; // ew_list의 마지막 원소의 인덱스
int conversion_warning_flag = 0; // 정수형 실수형이 혼합된 식일 경우 경고해주기 위한 플래그
void push_to_ew_list(int); // ew_list에 원소 추가하는 함수
void print_ew_points(); // 에러, 경고 위치 표시하는 함수
int compare_int(const void *_a, const void *_b); // qsort에 사용하는 정수 크기 비교 함수

// 원래 있던 변수들
int stack[1000];
TT values[1000];
int top = -1;
int sym;
char yytext[32];
TT yylval;

// 원래 있던 함수들
void push(int);
void shift(int);
void reduce(int);
void yyerror();
TT yyparse();
int yylex();
void lex_error();

int main() {
	TT result;
	result = yyparse();
	print_ew_points();
	if (result.T == INT) {
		printf("%d\n", result.V.dValue);
	} else {
		printf("%f\n", (float)result.V.fValue);
	}

	return 0;
}

TT yyparse() {
	int i;
	stack[++top] = 0; // initial state
	sym = yylex();
	do {
		i = action[stack[top]][sym - 256]; // get relation
		if (i == ACC) {
			//printf("success!\n");
		} else if (i > 0) {
			shift(i);
		} else if (i < 0) {
			reduce(-i);
		} else {
			yyerror();
		}
	} while (i != ACC);

	return values[top];
}

void push(int i) {
	top++;
	stack[top] = i;
}

void shift(int i) {
	push(i);
	values[top] = yylval;
	sym = yylex();
}

void reduce(int i) {
	int old_top;
	top -= prod_length[i];
	old_top = top;
	push(go_to[stack[old_top]][prod_left[i]]);

	// value
	switch(i) {
		case 1: 
			if (values[old_top + 1].T != values[old_top + 3].T) { // 두 숫자의 형식이 다른 경우
				// warning
				push_to_ew_list(values[old_top + 3].token_start_index); // 경고 표시할 위치 저장
				conversion_warning_flag = 1; // 플래그 1로 바꿔 정수형->실수형 변환이 일어났음을 표시함
			}

			if (values[old_top + 1].T == INT && values[old_top + 3].T == INT) { // 두 숫자 모두 정수 일때 - 연산 결과가 정수인 경우
				values[top].V.dValue = values[old_top + 1].V.dValue + values[old_top + 3].V.dValue; // 두 수를 더해서 저장
				values[top].T = INT; // 연산 결과가 정수형임을 저장
			} else { // 연산 결과가 실수인 경우
				float value1, value2;
				// 첫번째 피연산자를 꺼내서 value1에 넣는다
				if (values[old_top + 1].T == FLOAT) {
					value1 = values[old_top + 1].V.fValue;
				} else {
					value1 = values[old_top + 1].V.dValue;
				}

				// 두번째 피연산자를 꺼내서 value2에 넣는다
				if (values[old_top + 3].T == FLOAT) {
					value2 = values[old_top + 3].V.fValue;
				} else {
					value2 = values[old_top + 3].V.dValue;
				}

				values[top].V.fValue = value1 + value2; // 연산 결과를 저장
				values[top].T = FLOAT; // 연산 결과가 실수형임을 저장
			}
			break;
		case 2: 
			values[top] = values[old_top + 1];
			break;
		case 3: 
			if (values[old_top + 1].T != values[old_top + 3].T) {
				// warning
				push_to_ew_list(values[old_top + 3].token_start_index); // 경고 표시할 위치 저장
				conversion_warning_flag = 1; // 플래그 1로 바꿔 정수형->실수형 변환이 일어났음을 표시함
			}

			if (values[old_top + 1].T == INT && values[old_top + 3].T == INT) { // 두 숫자 모두 정수 일때 - 연산 결과가 정수인 경우
				values[top].V.dValue = values[old_top + 1].V.dValue * values[old_top + 3].V.dValue; // 두 수를 곱해서 저장
				values[top].T = INT; // 연산 결과가 정수형임을 저장
			} else { // 연산 결과가 실수인 경우
				float value1, value2;
				// 첫번째 피연산자를 꺼내서 value1에 넣는다
				if (values[old_top + 1].T == FLOAT) {
					value1 = values[old_top + 1].V.fValue;
				} else {
					value1 = values[old_top + 1].V.dValue;
				}

				// 두번째 피연산자를 꺼내서 value1에 넣는다
				if (values[old_top + 3].T == FLOAT) {
					value2 = values[old_top + 3].V.fValue;
				} else {
					value2 = values[old_top + 3].V.dValue;
				}

				values[top].V.fValue = value1 * value2; // 연산 결과를 저장
				values[top].T = FLOAT; // 연산 결과가 실수형임을 저장
			}
			break;
		case 4: 
			values[top] = values[old_top + 1];
			break;
		case 5: 
			values[top] = values[old_top + 2];
			break;
		case 6: 
			values[top] = values[old_top + 1];
			break;
		default: 
			yyerror(/*"parsing table error"*/);
			break;
	}
}

void yyerror() {
	push_to_ew_list(command_index);
	print_ew_points();
	printf("syntax error\n");
	exit(1);
}

int yylex() {
	static char ch = ' ';
	int i = 0;
	int is_dot_included = 0;
	while (ch == ' ' || ch == '\t') {
		ch = getchar();
		++command_index;
	}
	if (isdigit(ch)) {
		int token_start_index = command_index - 1;
		do {
			if (ch == '.') {
				if (is_dot_included) { // 앞에 이미 '.'이 입력되었다면
					lex_error(); // 한 숫자 내에 '.'이 두개 이상 있는 것은 잘못된 숫자 형식이므로 에러
				} else { // '.'이 처음 입력됐을 때
					is_dot_included = 1; // '.'이 입력되었음을 표시 -> 실수형임을 표시
				}
			}
			yytext[i++] = ch;
			ch = getchar();
			++command_index;
		} while (isdigit(ch) || ch == '.');
		yytext[i] = '\0';

		TT new_value;
		if (is_dot_included) { // 실수
			new_value.V.fValue = atof(yytext); // 문자열을 float형으로 변환
			new_value.T = FLOAT; // float 자료형임을 저장
		} else { // 정수
			new_value.V.dValue = atoi(yytext); // 문자열을 int형으로 변환
			new_value.T = INT; // int 자료형임을 저장
		}
		new_value.token_start_index = token_start_index; // 수식 내에서 이 숫자의 시작 위치를 저장 - 에러, 경고 위치 표시에 사용
		yylval = new_value;

		return(NUMBER);
	} else if (ch == '\n') {
		return(END);
	}else if (ch == '+') {
		ch = getchar();
		++command_index;
		return(PLUS);
	} else if (ch == '*') {
		ch = getchar();
		++command_index;
		return(STAR);
	} else if (ch == '(') {
		ch = getchar();
		++command_index;
		return(LPAREN);
	} else if (ch == ')') {
		ch = getchar();
		++command_index;
		return(RPAREN);
	} else {
		lex_error(END);
		return 0;
	}
}

void lex_error() {
	push_to_ew_list(command_index);
	print_ew_points();
	printf("illegal token\n");
	exit(1);
}

// ew_list에 원소 추가하는 함수
void push_to_ew_list(int i){
	if (ew_last + 1 < 1000) { // 배열이 꽉찼으면 저장하지 않음
		ew_list[++ew_last] = i;
	}
}

// 에러, 경고 위치 표시하는 함수
void print_ew_points(){
	int list_i;
	int command_i = 0;
	qsort((void*)ew_list, ew_last + 1, sizeof(int), compare_int); // 앞쪽부터 순차적으로 출력하기 위해 정렬함
	for (list_i = 0; list_i <= ew_last; ++list_i) {
		while (command_i++ < ew_list[list_i]) { // 에러, 경고 출력할 위치까지 이동
			printf(" ");
		}
		printf("^"); // 에러, 경고해야할 위치에 '^'문자 출력
	}
	printf("\n");
	if (conversion_warning_flag == 1) {
		printf("WARNING: conversion from 'int' to 'float', possible loss of data\n"); // 경고 메시지 출력
	}
}

// qsort에 사용하는 정수 크기 비교 함수
int compare_int(const void *_a, const void *_b) {
	int *a = (int *)_a;
	int *b = (int *)_b;

	return *a - *b;
}

