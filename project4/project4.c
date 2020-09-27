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

///////
typedef enum {INT_VAL, ADD, MUL} NODE_NAME;
typedef struct node {
	NODE_NAME name;
	int val;
	struct node *llink;
	struct node *rlink;
} NODE;

NODE *values[1000];
NODE *makenode(NODE_NAME name, int v, NODE *p, NODE *q) {
	NODE *n;
	n = (NODE *)malloc(sizeof(NODE));
	n->name = name;
	n->val = v;
	n->llink = p;
	n->rlink = q;

	return n;
}

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

// 원래 있던 변수들
int stack[1000];
int top = -1;
int sym;
char yytext[32];
int yyval;

// 원래 있던 함수들
void push(int);
void shift(int);
void reduce(int);
void yyerror();
int yyparse();
int yylex();
void lex_error();

void print_values(NODE *node);
void print_node(NODE *node);

int main() {
	yyparse();

	print_values(values[1]);

	return 0;
}

int yyparse() {
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
}

void push(int i) {
	top++;
	stack[top] = i;
}

void shift(int i) {
	push(i);
	if (sym == NUMBER) {
		values[top] = makenode(INT_VAL, yyval, NULL, NULL);
	}	
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
			values[top] = makenode(ADD, 0, values[old_top + 1], values[old_top + 3]);
			break;
		case 2: 
			values[top] = values[old_top + 1];
			break;
		case 3: 
			values[top] = makenode(MUL, 0, values[old_top + 1], values[old_top + 3]);
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
	printf("syntax error\n");
	exit(1);
}

int yylex() {
	static char ch = ' ';
	int i = 0;
	int is_dot_included = 0;
	while (ch == ' ' || ch == '\t') {
		ch = getchar();
	}
	if (isdigit(ch)) {
		do {
			yytext[i++] = ch;
			ch = getchar();
		} while (isdigit(ch));
		yytext[i] = '\0';
		yyval = atoi(yytext); // 문자열을 int형으로 변환
		return(NUMBER);
	} else if (ch == '\n') {
		return(END);
	} else if (ch == '+') {
		ch = getchar();
		return(PLUS);
	} else if (ch == '*') {
		ch = getchar();
		return(STAR);
	} else if (ch == '(') {
		ch = getchar();
		return(LPAREN);
	} else if (ch == ')') {
		ch = getchar();
		return(RPAREN);
	} else {
		lex_error(END);
		return 0;
	}
}

void lex_error() {
	printf("illegal token\n");
	exit(1);
}

void print_node(NODE *node) {
	switch(node->name) {
		case INT_VAL:
			printf("INT_VAL, value: %d\n", node->val);
			break;
		case ADD:
			printf("ADD\n");
			break;
		case MUL:
			printf("MUL\n");
			break;
	}
}

void print_values(NODE *node) {
	if (node == NULL) yyerror();
	if (node->llink != NULL) {
		print_values(node->llink);
	}
	print_node(node);
	if (node->rlink != NULL) {
		print_values(node->rlink);
	}

	return;
}

