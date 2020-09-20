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

int command_index = 0;
int ew_stack[100];
int ew_top = -1;
int conversion_warning_flag = 0;
void push_to_ew_stack(int);
void print_ew_points();
int compare_int(const void *_a, const void *_b);

int stack[1000];
TT values[1000];
int top = -1;
int sym;
char yytext[32];
TT yylval;

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
			if (values[old_top + 1].T != values[old_top + 3].T) {
				// warning
				//printf("warning");
				push_to_ew_stack(values[old_top + 3].token_start_index);
				conversion_warning_flag = 1;
			}

			if (values[old_top + 1].T == INT && values[old_top + 3].T == INT) {
				values[top].V.dValue = values[old_top + 1].V.dValue + values[old_top + 3].V.dValue;
				values[top].T = INT;
			} else {
				float value1, value2;
				if (values[old_top + 1].T == FLOAT) {
					value1 = values[old_top + 1].V.fValue;
				} else {
					value1 = values[old_top + 1].V.dValue;
				}

				if (values[old_top + 3].T == FLOAT) {
					value2 = values[old_top + 3].V.fValue;
				} else {
					value2 = values[old_top + 3].V.dValue;
				}

				values[top].V.fValue = value1 + value2;
				values[top].T = FLOAT;
			}
			break;
		case 2: 
			values[top] = values[old_top + 1];
			break;
		case 3: 
			if (values[old_top + 1].T != values[old_top + 3].T) {
				// warning
				//printf("warning");
				push_to_ew_stack(values[old_top + 3].token_start_index);
				conversion_warning_flag = 1;
			}

			if (values[old_top + 1].T == INT && values[old_top + 3].T == INT) {
				values[top].V.dValue = values[old_top + 1].V.dValue * values[old_top + 3].V.dValue;
				values[top].T = INT;
			} else {
				float value1, value2;
				if (values[old_top + 1].T == FLOAT) {
					value1 = values[old_top + 1].V.fValue;
				} else {
					value1 = values[old_top + 1].V.dValue;
				}

				if (values[old_top + 3].T == FLOAT) {
					value2 = values[old_top + 3].V.fValue;
				} else {
					value2 = values[old_top + 3].V.dValue;
				}

				values[top].V.fValue = value1 * value2;
				values[top].T = FLOAT;
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
	push_to_ew_stack(command_index);
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
				if (is_dot_included) {
					lex_error();
				} else {
					is_dot_included = 1;
				}
			}
			yytext[i++] = ch;
			ch = getchar();
			++command_index;
		} while (isdigit(ch) || ch == '.');
		yytext[i] = '\0';

		TT new_value;
		if (is_dot_included) { // 실수
			new_value.V.fValue = atof(yytext);
			new_value.T = FLOAT;
		} else { // 정수
			new_value.V.dValue = atoi(yytext);
			new_value.T = INT;
		}
		new_value.token_start_index = token_start_index;
		yylval = new_value;//////////

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
	push_to_ew_stack(command_index);
	print_ew_points();
	printf("illegal token\n");
	exit(1);
}

void push_to_ew_stack(int i){
	ew_stack[++ew_top] = i;
}

void print_ew_points(){
	int stack_i;
	int command_i = 0;
	qsort((void*)ew_stack, ew_top + 1, sizeof(int), compare_int);
	for (stack_i = 0; stack_i <= ew_top; ++stack_i) {
		while (command_i++ < ew_stack[stack_i]) {
			printf(" ");
		}
		printf("^");
	}
	printf("\n");
	if (conversion_warning_flag == 1) {
		printf("WARNING: conversion from 'int' to 'float', possible loss of data\n");
	}
}

int compare_int(const void *_a, const void *_b) {
	int *a = (int *)_a;
	int *b = (int *)_b;

	return *a - *b;
}
