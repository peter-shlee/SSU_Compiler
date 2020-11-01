%{
#include "y.tab.h"
#include <stdio.h>
extern int line_no;
extern int yylex (void);
void yyerror(char *s);
%}
%start program
%token AUTO_SYM BREAK_SYM CASE_SYM CONTINUE_SYM DEFAULT_SYM DO_SYM ELSE_SYM ENUM_SYM FOR_SYM IF_SYM RETURN_SYM SIZEOF_SYM STATIC_SYM STRUCT_SYM SWITCH_SYM TYPEDEF_SYM UNION_SYM WHILE_SYM PLUSPLUS MINUSMINUS ARROW LSS GTR LEQ GEQ EQL NEQ AMPAMP BARBAR DOTDOTDOT LP RP LB RB LR RR COLON PERIOD COMMA EXCL STAR SLASH PERCENT AMP SEMICOLON PLUS MINUS ASSIGN INTEGER_CONSTANT FLOAT_CONSTANT STRING_LITERAL CHARACTER_CONSTANT IDENTIFIER TYPE_IDENTIFIER
%%
program
	: translation_unit
translation_unit
	: external_declaration
	| translation_unit external_declaration
external_declaration
	: function_definition
	| declaration

function_definition
	: declaration_specifiers declarator compound_statement
	| declarator compound_statement

declaration
	: declaration_specifiers SEMICOLON
	| declaration_specifiers init_declarator_list SEMICOLON
declaration_specifiers
	: type_specifier
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| storage_class_specifier declaration_specifiers
storage_class_specifier
	: AUTO_SYM
	| STATIC_SYM
	| TYPEDEF_SYM
init_declarator_list
	: init_declarator
	| init_declarator_list COMMA init_declarator
init_declarator
	: declarator
	| declarator ASSIGN initializer

type_specifier
	: struct_specifier
	| enum_specifier
	| TYPE_IDENTIFIER

struct_specifier
	: struct_or_union IDENTIFIER LR struct_declaration_list RR
	| struct_or_union LR struct_declaration_list RR
	| struct_or_union IDENTIFIER
struct_or_union
	: STRUCT_SYM
	| UNION_SYM
struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
struct_declaration
	: type_specifier struct_declarator_list SEMICOLON
struct_declarator_list
	: struct_declarator
	| struct_declarator_list COMMA struct_declarator
struct_declarator
	: declarator

enum_specifier
	: ENUM_SYM IDENTIFIER LR enumerator_list RR
	| ENUM_SYM LR enumerator_list RR
	| ENUM_SYM IDENTIFIER
enumerator_list
	: enumerator
	| enumerator_list COMMA enumerator
enumerator
	: IDENTIFIER
	| IDENTIFIER ASSIGN constant_expression

declarator
	: pointer direct_declarator
	| direct_declarator
pointer
	: STAR
	| STAR pointer

direct_declarator
	: IDENTIFIER
	| LP declarator RP
	| direct_declarator LB constant_expression_opt RB
	| direct_declarator LP parameter_type_list_opt RP
constant_expression_opt
	:
	| constant_expression
parameter_type_list_opt
	:
	| parameter_type_list

parameter_type_list
	: parameter_list
	| parameter_list DOTDOTDOT
parameter_list
	: parameter_declaration
	| parameter_list COMMA parameter_declaration
parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
direct_abstract_declarator
	: LP abstract_declarator RP
	| LB constant_expression_opt RB
	| LP parameter_type_list_opt RP
	| direct_abstract_declarator LB constant_expression_opt RB
	| direct_abstract_declarator LP parameter_type_list_opt RP

initializer
	: constant_expression
	| LR initializer_list RR
initializer_list
	: initializer
	| initializer_list COMMA initializer

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
labeled_statement
	: CASE_SYM constant_expression COLON statement
	| DEFAULT_SYM COLON statement

compound_statement
	: LR declaration_list statement_list RR
declaration_list
	: 
	| declaration_list declaration
statement_list
	:
	| statement_list statement

expression_statement
	: SEMICOLON
	| expression SEMICOLON

selection_statement
	: IF_SYM LP expression RP statement
	| IF_SYM LP expression RP statement ELSE_SYM statement
	| SWITCH_SYM LP expression RP statement

iteration_statement
	: WHILE_SYM LP expression RP statement
	| DO_SYM statement WHILE_SYM LP expression RP SEMICOLON
	| FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement
expression_opt
	:
	| expression

jump_statement
	: RETURN_SYM expression_opt SEMICOLON
	| CONTINUE_SYM SEMICOLON
	| BREAK_SYM SEMICOLON

primary_expression
	: IDENTIFIER
	| INTEGER_CONSTANT
	| FLOAT_CONSTANT
	| CHARACTER_CONSTANT
	| STRING_LITERAL
	| LP expression RP

postfix_expression
	: primary_expression
	| postfix_expression LB expression RB
	| postfix_expression LP arg_expression_list_opt RP
	| postfix_expression PERIOD IDENTIFIER
	| postfix_expression ARROW IDENTIFIER
	| postfix_expression PLUSPLUS
	| postfix_expression MINUSMINUS
arg_expression_list_opt
	:
	| arg_expression_list
arg_expression_list
	: assignment_expression
	| arg_expression_list COMMA assignment_expression

unary_expression
	: postfix_expression
	| PLUSPLUS unary_expression
	| MINUSMINUS unary_expression
	| AMP cast_expression
	| STAR cast_expression
	| EXCL cast_expression
	| MINUS cast_expression
	| PLUS cast_expression
	| SIZEOF_SYM unary_expression
	| SIZEOF_SYM LP type_name RP
cast_expression
	: unary_expression
	| LP type_name RP cast_expression
type_name
	: declaration_specifiers
	| declaration_specifiers abstract_declarator

multiplicative_expression
	: cast_expression
	| multiplicative_expression STAR cast_expression
	| multiplicative_expression SLASH cast_expression
	| multiplicative_expression PERCENT cast_expression
additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression

relational_expression
	: additive_expression
	| relational_expression LSS additive_expression
	| relational_expression GTR additive_expression
	| relational_expression LEQ additive_expression
	| relational_expression GEQ additive_expression
equality_expression
	: relational_expression
	| equality_expression EQL relational_expression
	| equality_expression NEQ relational_expression

logical_and_expression
	: equality_expression
	| logical_and_expression AMPAMP equality_expression
logical_or_expression
	: logical_and_expression
	| logical_or_expression BARBAR logical_and_expression

constant_expression
	: expression
expression
	: assignment_expression
assignment_expression
	: logical_or_expression
	| unary_expression ASSIGN expression

%%
extern char *yytext;
void yyerror(char *s) { printf("line %d %s near %s \n", line_no, s, yytext); }

void initialize() {
	// primitive data types
	int_type=setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("int"));
	float_type=setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("float"));
	char_type= setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("char"));
	void_type=setTypeAndKindOfDeclarator(
	makeType(T_VOID),ID_TYPE,makeIdentifier("void"));
	string_type=setTypeElementType(makeType(T_POINTER),char_type);
	int_type->size=4; int_type->check=TRUE;
	float_type->size=4; float_type->check=TRUE;
	char_type->size=1; char_type->check=TRUE;
	void_type->size=0; void_type->check=TRUE;
	string_type->size=4; string_type->check=TRUE;
	// printf(char *, ...) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("printf"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),void_type),
	linkDeclaratorList(
	setDeclaratorTypeAndKind(makeDummyIdentifier(),string_type,ID_PARM),
	setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
	ID_FUNC);
	// scanf(char *, ...) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("scanf"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),void_type),
	linkDeclaratorList(
	setDeclaratorTypeAndKind(makeDummyIdentifier(),string_type,ID_PARM),
	setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
	ID_FUNC);
	// malloc(int) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("malloc"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),string_type),
	setDeclaratorTypeAndKind(makeDummyIdentifier(),int_type,ID_PARM)),
	ID_FUNC);
}

void syntax_error(int i,char *s) {
	syntax_err++;
	printf("line %d: syntax error: ", line_no);
	switch (i) {
		case 11: printf("illegal referencing struct or union identifier %s",s);
		break;
		case 12: printf("redeclaration of identifier %s",s); break;
		case 13: printf("undefined identifier %s",s); break;
		case 14: printf("illegal type specifier in formal parameter"); break;
		case 20: printf("illegal storage class in type specifiers"); break;
		case 21: printf("illegal function declarator"); break;
		case 22: printf("conflicting parm type in prototype function %s",s);
		break;
		case 23: printf("empty parameter name"); break;
		case 24: printf("illegal declaration specifiers"); break;
		case 25: printf("illegal function specifiers"); break;
		case 26: printf("illegal or conflicting return type in function %s",s);
		break;
		case 31: printf("undefined type for identifier %s",s); break;
		case 32: printf("incomplete forward reference for identifier %s",s);
		break;
		default: printf("unknown"); break;
	}
	if (strlen(yytext)==0)
		printf(" at end\n");
	else
		printf(" near %s\n", yytext);
}

void main(int argc, char *argv[]) { //적당히 고쳐서 사용하세요
	if ((yyin=fopen(argv[argc-1],"r"))==NULL){
		printf("can not open input file: %s\n",argv[argc-1]);
		exit(1);
	}
	initialize();
	yyparse();
	if (!syntax_err)
		print_ast(root);
}
