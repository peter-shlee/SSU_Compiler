/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "my_c.y" /* yacc.c:339  */


#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include "y.tab.h"
#include "type.h"
#include "my_c_func.h"
#include <stdio.h>

FILE *fout;
extern int line_no, syntax_err, current_level;
extern A_NODE *root;
extern A_ID *current_id;
extern A_TYPE *int_type;

extern int yylex (void);

void yyerror(char *s);

extern void print_sem_ast(A_NODE *);
extern void semantic_analysis(A_NODE *);

#line 90 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO_SYM = 258,
    BREAK_SYM = 259,
    CASE_SYM = 260,
    CONTINUE_SYM = 261,
    DEFAULT_SYM = 262,
    DO_SYM = 263,
    ELSE_SYM = 264,
    ENUM_SYM = 265,
    FOR_SYM = 266,
    IF_SYM = 267,
    RETURN_SYM = 268,
    SIZEOF_SYM = 269,
    STATIC_SYM = 270,
    STRUCT_SYM = 271,
    SWITCH_SYM = 272,
    TYPEDEF_SYM = 273,
    UNION_SYM = 274,
    WHILE_SYM = 275,
    PLUSPLUS = 276,
    MINUSMINUS = 277,
    ARROW = 278,
    LSS = 279,
    GTR = 280,
    LEQ = 281,
    GEQ = 282,
    EQL = 283,
    NEQ = 284,
    AMPAMP = 285,
    BARBAR = 286,
    DOTDOTDOT = 287,
    LP = 288,
    RP = 289,
    LB = 290,
    RB = 291,
    LR = 292,
    RR = 293,
    COLON = 294,
    PERIOD = 295,
    COMMA = 296,
    EXCL = 297,
    STAR = 298,
    SLASH = 299,
    PERCENT = 300,
    AMP = 301,
    SEMICOLON = 302,
    PLUS = 303,
    MINUS = 304,
    ASSIGN = 305,
    INTEGER_CONSTANT = 306,
    FLOAT_CONSTANT = 307,
    STRING_LITERAL = 308,
    CHARACTER_CONSTANT = 309,
    IDENTIFIER = 310,
    TYPE_IDENTIFIER = 311
  };
#endif
/* Tokens.  */
#define AUTO_SYM 258
#define BREAK_SYM 259
#define CASE_SYM 260
#define CONTINUE_SYM 261
#define DEFAULT_SYM 262
#define DO_SYM 263
#define ELSE_SYM 264
#define ENUM_SYM 265
#define FOR_SYM 266
#define IF_SYM 267
#define RETURN_SYM 268
#define SIZEOF_SYM 269
#define STATIC_SYM 270
#define STRUCT_SYM 271
#define SWITCH_SYM 272
#define TYPEDEF_SYM 273
#define UNION_SYM 274
#define WHILE_SYM 275
#define PLUSPLUS 276
#define MINUSMINUS 277
#define ARROW 278
#define LSS 279
#define GTR 280
#define LEQ 281
#define GEQ 282
#define EQL 283
#define NEQ 284
#define AMPAMP 285
#define BARBAR 286
#define DOTDOTDOT 287
#define LP 288
#define RP 289
#define LB 290
#define RB 291
#define LR 292
#define RR 293
#define COLON 294
#define PERIOD 295
#define COMMA 296
#define EXCL 297
#define STAR 298
#define SLASH 299
#define PERCENT 300
#define AMP 301
#define SEMICOLON 302
#define PLUS 303
#define MINUS 304
#define ASSIGN 305
#define INTEGER_CONSTANT 306
#define FLOAT_CONSTANT 307
#define STRING_LITERAL 308
#define CHARACTER_CONSTANT 309
#define IDENTIFIER 310
#define TYPE_IDENTIFIER 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 253 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   464

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    30,    31,    33,    34,    37,    37,    38,
      38,    41,    43,    44,    45,    46,    48,    49,    50,    52,
      53,    56,    57,    59,    60,    63,    64,    65,    68,    68,
      68,    69,    69,    69,    70,    72,    73,    75,    76,    78,
      80,    81,    83,    86,    86,    87,    87,    88,    90,    91,
      93,    94,    94,    97,    98,   100,   101,   104,   105,   106,
     107,   107,   108,   110,   112,   113,   116,   117,   119,   120,
     122,   123,   125,   126,   128,   129,   130,   132,   133,   134,
     135,   136,   140,   141,   143,   144,   146,   147,   149,   150,
     152,   153,   154,   155,   156,   157,   159,   160,   163,   163,
     165,   166,   168,   169,   172,   173,   176,   177,   178,   181,
     182,   183,   185,   187,   188,   191,   192,   193,   196,   197,
     198,   199,   200,   201,   204,   205,   206,   207,   208,   209,
     210,   212,   213,   215,   216,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   230,   231,   233,   236,   237,
     238,   239,   241,   242,   243,   246,   247,   248,   249,   250,
     252,   253,   254,   257,   258,   260,   261,   264,   266,   268,
     269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_SYM", "BREAK_SYM", "CASE_SYM",
  "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM", "ENUM_SYM",
  "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM", "STATIC_SYM",
  "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM", "WHILE_SYM",
  "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL",
  "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR",
  "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "STRING_LITERAL", "CHARACTER_CONSTANT", "IDENTIFIER",
  "TYPE_IDENTIFIER", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_specifier", "@3", "@4", "@5", "@6",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "@7",
  "@8", "enumerator_list", "enumerator", "@9", "declarator", "pointer",
  "direct_declarator", "@10", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement_list_opt", "statement_list", "statement",
  "labeled_statement", "compound_statement", "@11", "declaration_list_opt",
  "declaration_list", "expression_statement", "selection_statement",
  "iteration_statement", "for_expression", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression", "constant_expression",
  "expression", "assignment_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -208

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-208)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     253,  -208,   -28,  -208,  -208,  -208,  -208,   -15,    12,  -208,
    -208,    83,   253,  -208,  -208,  -208,   -15,    34,    34,  -208,
      33,  -208,  -208,   -20,   119,    70,    99,    95,  -208,  -208,
    -208,   110,   134,  -208,    26,  -208,  -208,   103,   145,   159,
     119,  -208,   359,   160,   157,  -208,  -208,   -15,   345,   159,
     164,  -208,  -208,  -208,    34,   395,   409,   409,   195,   359,
     359,   359,   359,   359,  -208,  -208,  -208,  -208,  -208,   179,
    -208,   185,   169,  -208,   123,    52,     5,   135,   191,   193,
    -208,  -208,  -208,   157,   172,    10,  -208,  -208,   176,   345,
    -208,  -208,  -208,  -208,   146,    34,   115,   197,  -208,   192,
    -208,   195,  -208,   359,  -208,  -208,    56,   198,   200,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,   180,   359,
     359,   181,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,    92,   189,  -208,   157,
    -208,    93,   146,   -15,    58,  -208,  -208,   -15,   309,    34,
     242,   359,  -208,    49,  -208,  -208,   138,  -208,   263,   208,
      23,   139,  -208,   359,  -208,  -208,   219,   213,  -208,   223,
    -208,  -208,  -208,  -208,  -208,   123,   123,    52,    52,    52,
      52,     5,     5,   135,   191,  -208,   359,  -208,  -208,   345,
     122,    65,  -208,  -208,  -208,  -208,   215,   359,   217,   216,
     309,   232,   234,   359,   237,   241,  -208,   238,   309,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,   233,  -208,   249,   250,
     251,   138,    34,   359,  -208,  -208,  -208,  -208,  -208,   359,
    -208,  -208,  -208,  -208,   -15,  -208,  -208,   252,  -208,   309,
     268,   359,   359,   243,  -208,   359,   359,  -208,  -208,  -208,
    -208,  -208,  -208,   255,   256,  -208,  -208,   309,  -208,   260,
     265,   247,   266,  -208,   267,   269,  -208,  -208,  -208,   359,
     309,   359,   309,   309,   309,   270,  -208,   258,   293,  -208,
    -208,   259,   359,   309,  -208,  -208,  -208
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    45,    17,    35,    18,    36,     0,    55,    57,
      27,     0,     2,     3,     5,     6,    19,    13,    12,    25,
      31,    26,     9,     0,    54,    47,     0,     0,    56,     1,
       4,     0,    20,    21,    23,    15,    14,    34,     0,     0,
      53,    60,    62,     0,     0,    58,    11,     0,     0,     0,
       0,    32,    98,    10,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   122,   121,   118,     0,
     124,   135,   145,   148,   152,   155,   160,   163,   165,   169,
      63,   167,   168,     0,    50,     0,    48,    22,    23,     0,
      24,    82,     8,    29,     0,   100,    72,     0,    65,    66,
      68,     0,   143,     0,   136,   137,    72,     0,     0,   145,
     140,   139,   138,   142,   141,    59,   129,   130,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      84,     0,     0,     0,     0,    37,   102,    19,    86,   101,
      64,    62,    70,    74,    71,    73,    75,    61,     0,     0,
      64,    74,   147,     0,   123,   128,     0,   132,   133,     0,
     127,   170,   149,   150,   151,   153,   154,   156,   157,   158,
     159,   161,   162,   164,   166,    44,     0,    49,    83,     0,
       0,     0,    40,    42,    33,    38,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,   104,     0,    87,    88,
      90,    91,    92,    93,    94,    95,     0,   103,     0,     0,
       0,    76,    64,    62,    67,    69,   144,   146,   126,     0,
     125,    52,    85,    30,     0,    39,   117,     0,   116,     0,
       0,   113,     0,     0,   114,     0,     0,    99,    89,   105,
      79,    77,    78,     0,     0,   134,    41,     0,    97,     0,
       0,     0,     0,   115,     0,     0,    81,    80,    96,     0,
       0,   113,     0,     0,     0,     0,   111,     0,   106,   108,
     109,     0,   113,     0,   110,   112,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,   295,  -208,  -208,  -208,   -80,     2,  -208,
    -208,  -208,   264,   -77,  -208,  -208,  -208,  -208,  -208,  -208,
     168,  -133,  -208,    78,  -208,  -208,  -208,   235,   186,  -208,
      -4,    -1,   -18,  -208,  -142,   -53,  -208,  -208,   166,   221,
    -114,   -59,   -79,  -208,  -208,  -208,  -146,  -208,    59,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -207,  -208,  -208,  -208,
    -208,  -208,    60,   -38,   227,    50,   -58,    47,   199,   201,
    -208,   -44,   -42,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,    15,    96,    17,
      31,    32,    33,    18,    19,    50,   142,    38,    94,    20,
     144,   145,   191,   192,    21,    43,    26,    85,    86,   137,
      22,    23,    24,    54,    69,   218,    98,    99,   100,   154,
     155,   156,    90,   141,   207,   208,   209,   210,   211,    95,
     148,   149,   212,   213,   214,   260,   243,   215,    70,    71,
     166,   167,    72,    73,   107,    74,    75,    76,    77,    78,
      79,    80,   216,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    97,    16,    27,    91,    40,    81,    28,   168,   220,
     140,   195,    34,     7,    16,   146,   108,   143,     7,    35,
      36,   110,   111,   112,   113,   114,     1,    25,     8,   128,
     129,   130,   131,     2,   261,     9,   219,     1,     3,     4,
       9,     5,     6,    88,     2,    91,   219,    81,   138,     3,
       4,   139,     5,     6,   240,     8,   160,   195,   151,   108,
     106,   108,   248,    -7,   277,   143,     8,   143,     2,   217,
     177,   178,   179,   180,     4,   285,    48,     6,   169,    10,
     171,   254,   150,    29,   151,   172,   173,   174,    37,   160,
      10,   151,   152,   258,   221,   153,   194,   147,    53,     8,
     126,   127,   221,   106,     9,   161,   234,   -43,    92,    81,
     232,   268,   235,   143,    10,   102,   104,   105,   255,   109,
     109,   109,   109,   109,   276,   227,   278,   279,   280,    45,
     185,   188,     2,   139,   189,    40,    44,   286,     4,   193,
     -28,     6,   231,    88,    81,    91,    27,    81,   150,   153,
     151,   147,    41,   237,    42,    81,     2,    46,     8,   161,
     233,   244,     4,   132,   133,     6,   123,   124,   125,   253,
       9,   222,   160,   223,   151,    47,   175,   176,    10,   181,
     182,    81,    51,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,    52,    83,     1,   244,
     262,    93,    10,   264,   265,     2,   116,   117,   118,    55,
       3,     4,    84,     5,     6,   115,    56,    57,   119,   122,
     120,   134,   -51,   109,   135,   121,    48,   275,    58,   244,
     193,   157,   163,   158,   164,   165,   170,    59,    60,   186,
     244,    61,   226,    62,    63,     1,    64,    65,    66,    67,
      68,    10,     2,   228,   229,   239,     1,     3,     4,   230,
       5,     6,   236,     2,   238,   241,     1,   242,     3,     4,
     245,     5,     6,     2,   246,   150,   247,   151,     3,     4,
     249,     5,     6,   250,   251,     8,     7,   252,   259,   266,
     263,   257,   267,   269,   271,   224,     8,     9,    10,   270,
     272,   273,   283,   274,   281,   282,   284,    30,     9,    10,
     190,    87,   256,   196,   197,   198,   199,   200,   136,    10,
     201,   202,   203,    55,   225,   187,   204,   162,   159,   205,
      56,    57,     0,   183,     0,     0,   184,     0,     0,     0,
       0,     0,    58,     0,     0,     0,    52,     0,     0,     0,
       0,    59,    60,     0,     0,    61,   206,    62,    63,    55,
      64,    65,    66,    67,    68,     0,    56,    57,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,    58,     0,
      56,    57,    89,     0,     0,     0,     0,    59,    60,     0,
       0,    61,    58,    62,    63,     0,    64,    65,    66,    67,
      68,    59,    60,     0,     0,    61,     0,    62,    63,    55,
      64,    65,    66,    67,    68,     0,    56,    57,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,   101,     0,
      56,    57,     0,     0,     0,     0,     0,    59,    60,     0,
       0,    61,   103,    62,    63,     0,    64,    65,    66,    67,
      68,    59,    60,     0,     0,    61,     0,    62,    63,     0,
      64,    65,    66,    67,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     0,     7,    48,    23,    48,     8,   119,   151,
      89,   144,    16,    33,    12,    95,    58,    94,    33,    17,
      18,    59,    60,    61,    62,    63,     3,    55,    43,    24,
      25,    26,    27,    10,   241,    55,   150,     3,    15,    16,
      55,    18,    19,    47,    10,    89,   160,    89,    38,    15,
      16,    41,    18,    19,   200,    43,    33,   190,    35,   101,
      58,   103,   208,    37,   271,   142,    43,   144,    10,   149,
     128,   129,   130,   131,    16,   282,    50,    19,   120,    56,
     122,   223,    33,     0,    35,   123,   124,   125,    55,    33,
      56,    35,    96,   239,   153,    96,    38,    95,    39,    43,
      48,    49,   161,   101,    55,   106,    41,    37,    49,   151,
     189,   257,    47,   190,    56,    55,    56,    57,   229,    59,
      60,    61,    62,    63,   270,   163,   272,   273,   274,    34,
      38,    38,    10,    41,    41,   153,    37,   283,    16,   143,
      37,    19,   186,   147,   186,   189,   150,   189,    33,   150,
      35,   149,    33,   197,    35,   197,    10,    47,    43,   160,
      38,   203,    16,    28,    29,    19,    43,    44,    45,   222,
      55,    33,    33,    35,    35,    41,   126,   127,    56,   132,
     133,   223,    37,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    37,    37,     3,   241,
     242,    37,    56,   245,   246,    10,    21,    22,    23,    14,
      15,    16,    55,    18,    19,    36,    21,    22,    33,    50,
      35,    30,    50,   163,    31,    40,    50,   269,    33,   271,
     234,    34,    34,    41,    34,    55,    55,    42,    43,    50,
     282,    46,    34,    48,    49,     3,    51,    52,    53,    54,
      55,    56,    10,    34,    41,    39,     3,    15,    16,    36,
      18,    19,    47,    10,    47,    33,     3,    33,    15,    16,
      33,    18,    19,    10,    33,    33,    38,    35,    15,    16,
      47,    18,    19,    34,    34,    43,    33,    36,    20,    34,
      47,    39,    36,    33,    47,    32,    43,    55,    56,    34,
      34,    34,     9,    34,    34,    47,    47,    12,    55,    56,
     142,    47,   234,     4,     5,     6,     7,     8,    83,    56,
      11,    12,    13,    14,   158,   139,    17,   106,   101,    20,
      21,    22,    -1,   134,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    47,    48,    49,    14,
      51,    52,    53,    54,    55,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    -1,
      21,    22,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    33,    48,    49,    -1,    51,    52,    53,    54,
      55,    42,    43,    -1,    -1,    46,    -1,    48,    49,    14,
      51,    52,    53,    54,    55,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    46,    33,    48,    49,    -1,    51,    52,    53,    54,
      55,    42,    43,    -1,    -1,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    33,    43,    55,
      56,    58,    59,    60,    61,    64,    65,    66,    70,    71,
      76,    81,    87,    88,    89,    55,    83,    87,    88,     0,
      60,    67,    68,    69,    87,    65,    65,    55,    74,    63,
      89,    33,    35,    82,    37,    34,    47,    41,    50,    62,
      72,    37,    37,   105,    90,    14,    21,    22,    33,    42,
      43,    46,    48,    49,    51,    52,    53,    54,    55,    91,
     115,   116,   119,   120,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    37,    55,    84,    85,    69,    87,    37,
      99,   128,   105,    37,    75,   106,    65,    92,    93,    94,
      95,    33,   119,    33,   119,   119,    65,   121,   129,   119,
     120,   120,   120,   120,   120,    36,    21,    22,    23,    33,
      35,    40,    50,    43,    44,    45,    48,    49,    24,    25,
      26,    27,    28,    29,    30,    31,    84,    86,    38,    41,
      99,   100,    73,    70,    77,    78,    64,    65,   107,   108,
      33,    35,    87,    88,    96,    97,    98,    34,    41,   121,
      33,    88,    96,    34,    34,    55,   117,   118,   130,   129,
      55,   129,   120,   120,   120,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   126,    38,    50,    85,    38,    41,
      77,    79,    80,    87,    38,    78,     4,     5,     6,     7,
       8,    11,    12,    13,    17,    20,    47,   101,   102,   103,
     104,   105,   109,   110,   111,   114,   129,    64,    92,    97,
      91,    98,    33,    35,    32,    95,    34,   120,    34,    41,
      36,   128,    99,    38,    41,    47,    47,   128,    47,    39,
     103,    33,    33,   113,   129,    33,    33,    38,   103,    47,
      34,    34,    36,    92,    91,   130,    80,    39,   103,    20,
     112,   113,   129,    47,   129,   129,    34,    36,   103,    33,
      34,    47,    34,    34,    34,   129,   103,   113,   103,   103,
     103,    34,    47,     9,    47,   113,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    72,    73,
      71,    74,    75,    71,    71,    76,    76,    77,    77,    78,
      79,    79,    80,    82,    81,    83,    81,    81,    84,    84,
      85,    86,    85,    87,    87,    88,    88,    89,    89,    89,
      90,    89,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   106,   105,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   122,   122,
     122,   122,   123,   123,   123,   124,   124,   124,   124,   124,
     125,   125,   125,   126,   126,   127,   127,   128,   129,   130,
     130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     1,     1,     1,     0,     0,
       7,     0,     0,     6,     2,     1,     1,     1,     2,     3,
       1,     3,     1,     0,     6,     0,     5,     2,     1,     3,
       1,     0,     4,     2,     1,     1,     2,     1,     3,     4,
       0,     5,     0,     1,     0,     1,     1,     3,     1,     3,
       2,     2,     0,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     1,     3,     1,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     5,
       0,     1,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     5,     5,     0,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     1,     4,     4,     3,     3,     2,
       2,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     4,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 28 "my_c.y" /* yacc.c:1646  */
    {root = makeNode(N_PROGRAM, NIL, (yyvsp[0]), NIL); checkForwardReference();}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 30 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 31 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 33 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 34 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 37 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorBody((yyvsp[-1]), (yyvsp[0]));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[0]), makeSpecifier(int_type, 0));}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorBody((yyvsp[-1]), (yyvsp[0]));}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 41 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorListSpecifier((yyvsp[-1]), (yyvsp[-2]));}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 43 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeSpecifier((yyvsp[0]), 0);}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 44 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeSpecifier(0, (yyvsp[0]));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 45 "my_c.y" /* yacc.c:1646  */
    {(yyval) = updateSpecifier((yyvsp[0]), (yyvsp[-1]), 0);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 46 "my_c.y" /* yacc.c:1646  */
    {(yyval) = updateSpecifier((yyvsp[0]), 0, (yyvsp[-1]));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 48 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_AUTO;}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 49 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_STATIC;}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 50 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_TYPEDEF;}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 52 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 53 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 56 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 57 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 59 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 60 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorInit((yyvsp[-2]), (yyvsp[0]));}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 63 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 64 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 65 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 68 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier((yyvsp[-1]), (yyvsp[0]), ID_STRUCT);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 68 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 68 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = setTypeField((yyvsp[-4]), (yyvsp[-1])); --current_level; current_id = (yyvsp[-2]);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 69 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType((yyvsp[0]));}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 69 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 69 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = setTypeField((yyvsp[-4]), (yyvsp[-1])); --current_level; current_id = (yyvsp[-2]);}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 70 "my_c.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]), (yyvsp[0]), ID_STRUCT);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 72 "my_c.y" /* yacc.c:1646  */
    {(yyval) = T_STRUCT;}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 73 "my_c.y" /* yacc.c:1646  */
    {(yyval) = T_UNION;}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 75 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 76 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 78 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setStructDeclaratorListSpecifier((yyvsp[-1]), (yyvsp[-2]));}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 80 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 81 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 83 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 86 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier(T_ENUM, (yyvsp[0]), ID_ENUM);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 86 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeField((yyvsp[-3]), (yyvsp[-1]));}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 87 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_ENUM);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 87 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeField((yyvsp[-3]), (yyvsp[-1]));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 88 "my_c.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier(T_ENUM, (yyvsp[0]), ID_ENUM);}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 90 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 91 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 93 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorKind(makeIdentifier((yyvsp[0])), ID_ENUM_LITERAL);}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 94 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorKind(makeIdentifier((yyvsp[0])), ID_ENUM_LITERAL);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 94 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorInit((yyvsp[-2]), (yyvsp[0]));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 97 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorElementType((yyvsp[0]), (yyvsp[-1]));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 98 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 100 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_POINTER);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 101 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[0]), makeType(T_POINTER));}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 104 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeIdentifier((yyvsp[0]));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 105 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 106 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorElementType((yyvsp[-3]), setTypeExpr(makeType(T_ARRAY), (yyvsp[-1])));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 107 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 107 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); --current_level; current_id = (yyvsp[-2]); (yyval) = setDeclaratorElementType((yyvsp[-4]), setTypeField(makeType(T_FUNC), (yyvsp[-1])));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 112 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 113 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 116 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 117 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 119 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 120 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 122 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setParameterDeclaratorSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 123 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), (yyvsp[0])), (yyvsp[-1]));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 125 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 126 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 128 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_POINTER);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 129 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 130 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[0]), makeType(T_POINTER));}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 132 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 133 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeExpr(makeType(T_ARRAY), (yyvsp[-1]));}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 134 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeExpr(makeType(T_FUNC), (yyvsp[-1]));}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 135 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[-3]), setTypeExpr(makeType(T_ARRAY), (yyvsp[-1])));}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 136 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[-3]), setTypeExpr(makeType(T_FUNC), (yyvsp[-1])));}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 140 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_INIT_LIST_ONE, 0, (yyvsp[0]), 0);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 141 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 143 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_INIT_LIST, (yyvsp[0]), 0, makeNode(N_INIT_LIST_NIL, 0, 0, 0));}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 144 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_INIT_LIST, (yyvsp[-2]), (yyvsp[0]));}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 146 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 147 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 149 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LIST, (yyvsp[0]), NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 150 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_STMT_LIST, (yyvsp[-1]), (yyvsp[0]));}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 152 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 153 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 154 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 155 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 156 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 157 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 159 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LABEL_CASE, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 160 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LABEL_DEFAULT, NIL, (yyvsp[0]), NIL);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 163 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 163 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = makeNode(N_STMT_COMPOUND, (yyvsp[-2]), NIL, (yyvsp[-1])); --current_level; current_id = (yyvsp[-3]);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 165 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 166 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 168 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 169 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 172 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 173 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_EXPRESSION, NIL, (yyvsp[-1]), NIL);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 176 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_IF, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 177 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_IF_ELSE, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 178 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_SWITCH, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 181 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_WHILE, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 182 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_DO, (yyvsp[-5]), NIL, (yyvsp[-2]));}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 183 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_FOR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 185 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_FOR_EXP, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 187 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 188 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 191 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_RETURN, NIL, (yyvsp[-1]), NIL);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 192 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 193 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 196 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared((yyvsp[0])), NIL);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 197 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_INT_CONST, NIL, (yyvsp[0]), NIL);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 198 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_FLOAT_CONST, NIL, (yyvsp[0]), NIL);}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 199 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_CHAR_CONST, NIL, (yyvsp[0]), NIL);}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 200 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_STRING_LITERAL, NIL, (yyvsp[0]), NIL);}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 201 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 204 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 205 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ARRAY, (yyvsp[-3]), NIL, (yyvsp[-1]));}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 206 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_FUNCTION_CALL, (yyvsp[-3]), NIL, (yyvsp[-1]));}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 207 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_STRUCT, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 208 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ARROW, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 209 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_POST_INC, NIL, (yyvsp[-1]), NIL);}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 210 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_POST_DEC, NIL, (yyvsp[-1]), NIL);}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 212 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 213 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 215 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_ARG_LIST, (yyvsp[0]), NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 216 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_ARG_LIST, (yyvsp[-2]), (yyvsp[0]));}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 219 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 220 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_PRE_INC, NIL, (yyvsp[0]), NIL);}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 221 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_PRE_DEC, NIL, (yyvsp[0]), NIL);}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 222 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_AMP, NIL, (yyvsp[0]), NIL);}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 223 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_STAR, NIL, (yyvsp[0]), NIL);}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 224 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_NOT, NIL, (yyvsp[0]), NIL);}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 225 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_MINUS, NIL, (yyvsp[0]), NIL);}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 226 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_PLUS, NIL, (yyvsp[0]), NIL);}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 227 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_SIZE_EXP, NIL, (yyvsp[0]), NIL);}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 228 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_SIZE_TYPE, NIL, (yyvsp[-1]), NIL);}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 230 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 231 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_CAST, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 233 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeNameSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 236 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 237 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_MUL, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 238 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_DIV, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 239 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_MOD, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 241 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 242 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ADD, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 243 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_SUB, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 246 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 247 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_LSS, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 248 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_GTR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 249 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_LEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 250 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_GEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 252 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 253 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_EQL, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 254 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_NEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 257 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 258 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_AND, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 260 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 261 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_OR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 264 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 266 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 268 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 269 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ASSIGN, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2599 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 271 "my_c.y" /* yacc.c:1906  */

extern char *yytext;
void yyerror(char *s) { printf("line %d %s near %s \n", line_no, s, yytext); }

void main() { //적당히 고쳐서 사용하세요
	if ((fout = fopen("a.asm", "w")) == NULL) {
		printf("can not open output file: a.asm\n");
		exit(1);
	}

	initialize();
	yyparse();

	if (!syntax_err && root) {
		print_ast(root);
	} else {
		exit(1);
	}
	
	semantic_analysis(root);
	print_sem_ast(root);
	code_generation(root);

	return;
}

