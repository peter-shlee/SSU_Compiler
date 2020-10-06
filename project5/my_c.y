%%
program
	: translation_unit
translation_init
	: external_declaration
	| translation_unit external_declaration
external_declaration
	: function_definition
	| declaration

function_definition
	: declaration_specifiers declarator compound_statement
	| declarator compound_statement

declaration
	: declaration_specifiers ;
	| declaration_specifiers init_declarator_list ;
declaration_specifiers
	: type_specifier
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| storage_class_specifier declaration_specifiers
storage_class_specifier
	: auto
	| static
	| typedef
init_declarator_list
	: init_declarator
	| init_declarator_list , init_declarator
init_declarator
	: declarator
	| declarator = initializer

type_specifier
	: struct_specifier
	| enum_specifier
	| TYPE_IDENTIFIER

struct_specifier
	: struct_or_union IDENTIFIER { struct_declaration_list }
	| struct_or_union { struct_declaration_list }
	| struct_or_union IDENTIFIER
struct_or_union
	: struct
	| union
struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
struct_declaration
	: type_specifier struct_declarator_list ;
struct_declarator_list
	: struct_declarator
	| struct_declarator_list , struct_declarator
struct_declarator
	: declarator

enum_specifier
	: enum IDENTIFIER { enumerator_list }
	| enum { enumerator_list }
	| enum IDENTIFIER
enumerator_list
	: enumerator
	| enumerator_list , enumerator
enumerator
	: IDENTIFIER
	| IDENTIFIER = constant_expression

declarator
	: pointer direct_declarator
	| direct_declarator
pointer
	: *
	| * pointer

direct_declarator
	: IDENTIFIER
	| ( declarator )
	| direct_declarator [ constant_expression_opt ]
	| direct_declarator ( parameter_type_list_opt )
constant_expression_opt
	:
	| constant_expression
parameter_type_list_opt
	:
	| parameter_type_list

parameter_type_list
	: parameter_list
	| parameter_list ...
parameter_list
	: parameter_declaration
	| parameter_list , parameter_declaration
parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
direct_abstract_declarator
	: ( abstract_declarator )
	| [ constant_expression_opt ]
	| ( parameter_type_list_opt )
	| direct_abstract_declarator [ constant_expression_opt ]
	| direct_abstract_declarator ( parameter_type_list_opt )

initializer
	: constant_expression
	| { initializer }
initializer_list
	: initializer
	| initializer_list , initializer

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
labeled_statement
	: case constant_expression : statement
	| default : statement

compound_statement
	: { declaration_list statement_list }
declaration_list
	: 
	| declaration_list declaration
statement_list
	:
	| statement_list statement

expression_statement
	: ;
	| expression ;

selection_statement
	: if ( expression ) statement
	| if ( expression ) statement else statement
	| switch ( expression ) statement

iteration_statement
	: while ( expression ) statement
	| do statement while ( expression ) ;
	| for ( expression_opt ; expression_opt ; expression_opt ) statement
expression_opt
	:
	| expression

jump_statement
	: return expression_opt ;
	| continue ;
	| break ;

primary_expression
	: IDENTIFIER
	| INTEGER_CONSTANT
	| FLOAT_CONSTANT
	| CHARACTER_CONSTANT
	| STRING_LITERAL
	| ( expression )

postfix_expression
	: primary_expression
	| postfix_expression [ expression ]
	| postfix_expression ( arg_expression_list_opt )
	| postfix_expression . IDENTIFIER
	| postfix_expression -> IDENTIFIER
	| postfix_expression ++
	| postfix_expression --
arg_expression_list_opt
	:
	| arg_expression_list
arg_expression_list
	: assignment_expression
	| arg_expression_list , assignment_expression

unary_expression
	: postfix_expression
	| ++ unary_expression
	| -- unary_expression
	| & cast_expression
	| * cast_expression
	| ! cast_expression
	| - cast_expression
	| + cast_expression
	| sizeof unary_expression
	| sizeof ( type_name )
cast_expression
	: unary_expression
	| ( type_name ) cast_expression
type_name
	: declaration_specifiers
	| declaration_specifiers abstract_declarator

multiplicative_expression
	: cast_expression
	| multiplicative_expression * cast_expression
	| multiplicative_expression / cast_expression
	| multiplicative_expression % cast_expression
additive_expression
	: multiplicative_expression
	| additive_expression + multiplicative_expression
	| additive_expression - multiplicative_expression

relational_expression
	: additive_expression
	| relational_expression < additive_expression
	| relational_expression > additive_expression
	| relational_expression <= additive_expression
	| relational_expression >= additive_expression
equality_expression
	: relational_expression
	| equality_expression == relational_expression
	| equality_expression != relational_expression

logical_and_expression
	: equality_expression
	| logical_and_expression && equality_expression
logical_or_expression
	: logical_and_expression
	| logical_or_expression || logical_and_expression

constant_expression
	: expression
expression
	: assignment_expression
assignment_expression
	: logical_or_expression
	| unary_expression = expression

%%

