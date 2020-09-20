#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER_STRING_LENGTH 100
int is_float = 0;
int character_index = 0;
float num;
enum {null, NUMBER, PLUS, STAR, LPAREN, RPAREN, END} token;

void get_token();
float expression();
float term();
float factor();
void error(int i);

int main() {
	float result;
	get_token();
	result = expression();
	if (token != END)
		error(3);
	else
		if (is_float) // 실수형이나 혼합형인 경우
			printf("%f\n", result); // 실수로 결과 출력
		else // 정수형인 경우
			printf("%d\n", (int)result); // 정수로 결과 출력
}

void get_token(){
	// next token --> token
	// number value --> num
	char next_character = getchar();
	++character_index;
	while (next_character == ' ' || next_character == '\t') {
		next_character = getchar();
		++character_index;
	}
	if (next_character == '+') {
		token = PLUS;
	} else if (next_character == '*') {
		token = STAR;
	} else if (next_character == '(') {
		token = LPAREN;
	} else if (next_character == ')') {
		token = RPAREN;
	} else if (next_character == '\n') {
		token = END;
	} else if (isdigit(next_character)){ // 숫자인 경우
		char number_string[NUMBER_STRING_LENGTH]; // float 데이터 형으로 바꾸기 전에 문자열 형태로 숫자를 저장해 둘 배열
		int i = 0;
		int dot_count = 0;
		token = NUMBER;
		number_string[i++] = next_character;
		while (1) { // 여러 자리로 된 숫자를 읽는다
			next_character = getchar(); // 다시 한 문자를 읽는다
			++character_index;
			if (isdigit(next_character) || next_character == '.') {
				number_string[i++] = next_character;
				if (next_character == '.') {
					if (++dot_count > 1) error(4); // 한 숫자 내에서 '.'이 2개 이상 나오면 에러
					is_float = 1;
				}
			} else { // 읽은 문자가 실수를 이루는 문자가 아니라면
				ungetc(next_character, stdin); // 읽었던 문자를 다시 입력 버퍼에 돌려놓는다
				--character_index;
				break; // 숫자 모두 읽은 것 이므로 반복 종료
			}
		}
		number_string[i] = '\0';
		num = atof(number_string); // 문자열로 된 숫자를 float형으로 변환함
	} else {
		token = null;
	}
	return;
}

float expression() {
	float result;
	result = term();
	while (token == PLUS) {
		get_token();
		result += term();
	}
	return result;
}

float term() {
	float result;
	result = factor();
	while (token == STAR) {
		get_token();
		result *= factor();
	}
	return result;
}

float factor() {
	float result;
	if (token == NUMBER) {
		result = num;
		get_token();
	} else if (token == LPAREN) {
		get_token();
		result = expression();
		if (token == RPAREN)
			get_token();
		else
			error(2);
	} else {
		error(1);
	}
	return result;
}

void error(int i) {
	while(character_index-- > 1) printf(" ");
	printf("^\n");
	switch(i) {
		case 1:
			printf("There must be a number or a left parenthesis.\n");
			break;
		case 2:
			printf("Missing right parenthesis.\n");
			break;
		case 3:
			printf("It must be empty at '^'\n");
			break;
		case 4:
			printf("Invalid number format.\n");
			break;
	}
	exit(1);
}

