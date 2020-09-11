#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER_STRING_LENGTH 100
int is_float = 0;
float num;
enum {null, NUMBER, PLUS, STAR, LPAREN, RPAREN, END} token;

void get_token();
float expression();
float term();
float factor();
void error(int i);

void main() {
	float result;
	get_token();
	result = expression();
	if (token != END)
		error(3);
	else
		if (is_float)
			printf("%f\n", result);
		else
			printf("%d\n", (int)result);
}

void get_token(){
	// next token --> token
	// number value --> num
	char next_character = getchar();
	while (next_character == ' ' || next_character == '\t')
		next_character = getchar();
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
	} else if (isdigit(next_character) || next_character == '.'){
		float new_number = 0.0; // move declaration
		char number_string[NUMBER_STRING_LENGTH];
		int i = 0;
		token = NUMBER;
		number_string[i++] = next_character;
		while (1) {
			next_character = getchar();
			if (isdigit(next_character) || next_character == '.') {
				number_string[i++] = next_character;
				if (next_character == '.')
					is_float = 1;
			} else {
				ungetc(next_character, stdin);
				break;
			}
		}
		number_string[i] = '\0';
		num = atof(number_string);
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
	switch(i) {
		case 1:
			printf("error 1\n");
			break;
		case 2:
			printf("error 2\n");
			break;
		case 3:
			printf("error 3\n");
			break;
	}
	exit(1);
}

	


