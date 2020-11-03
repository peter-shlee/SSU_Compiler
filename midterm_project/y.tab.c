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

#include "y.tab.h"
#include "type.h"
#include <stdio.h>

extern int line_no;
extern int yylex (void);

int current_level = 0;

void yyerror(char *s);

#line 79 "y.tab.c" /* yacc.c:339  */

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



/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   524

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  281

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
static const yytype_uint8 yyrline[] =
{
       0,    17,    17,    19,    20,    22,    23,    26,    26,    27,
      27,    30,    32,    33,    34,    35,    37,    38,    39,    41,
      42,    45,    46,    48,    49,    52,    53,    54,    57,    57,
      57,    58,    58,    58,    59,    61,    62,    64,    65,    67,
      69,    70,    72,    75,    75,    76,    76,    77,    79,    80,
      82,    83,    83,    87,    88,    90,    91,    94,    95,    96,
      97,    97,    98,   100,   101,   103,   106,   107,   109,   110,
     112,   113,   114,   116,   117,   118,   120,   121,   122,   123,
     124,   127,   128,   130,   131,   134,   135,   136,   137,   138,
     139,   141,   142,   145,   145,   146,   148,   149,   151,   154,
     155,   158,   159,   160,   163,   164,   165,   166,   168,   171,
     172,   173,   176,   177,   178,   179,   180,   181,   184,   185,
     186,   187,   188,   189,   190,   191,   193,   195,   196,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   210,
     211,   213,   214,   217,   218,   219,   220,   222,   223,   224,
     227,   228,   229,   230,   231,   233,   234,   235,   238,   239,
     241,   242,   245,   247,   249,   250
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
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
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

#define YYPACT_NINF -231

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-231)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     253,  -231,   -37,  -231,  -231,  -231,  -231,    42,   -21,  -231,
    -231,   107,   253,  -231,  -231,  -231,    42,   145,   145,  -231,
      57,  -231,  -231,   -12,    51,    78,   102,   111,  -231,  -231,
    -231,   105,   121,  -231,    37,  -231,  -231,   128,   133,   151,
      51,  -231,   419,   155,   118,  -231,  -231,    42,   405,   151,
     156,  -231,  -231,  -231,   145,   455,   469,   469,   195,   419,
     419,   419,   419,   419,  -231,  -231,  -231,  -231,  -231,   158,
    -231,    48,   147,  -231,   132,   136,   109,   129,   152,   165,
    -231,  -231,  -231,   118,   149,     0,  -231,  -231,   150,   405,
    -231,  -231,  -231,  -231,    17,  -231,     2,   161,  -231,    36,
    -231,   195,  -231,   419,  -231,  -231,    65,   178,   181,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,   163,   419,
     419,   168,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,    61,   169,  -231,   118,
    -231,    73,    17,    42,    94,  -231,   145,   242,   419,  -231,
     -16,  -231,   116,  -231,  -231,   145,   190,   284,   146,  -231,
     419,  -231,  -231,   191,   185,  -231,   193,  -231,  -231,  -231,
    -231,  -231,   132,   132,   136,   136,   136,   136,   109,   109,
     129,   152,  -231,   419,  -231,  -231,   405,   164,    90,  -231,
    -231,  -231,  -231,  -231,    42,   317,   196,   197,   198,   116,
     145,   419,  -231,  -231,  -231,  -231,   419,  -231,  -231,  -231,
    -231,    42,  -231,   180,   419,   186,   200,   369,   202,   203,
     419,   207,   209,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,   206,  -231,  -231,  -231,   220,   219,  -231,  -231,
    -231,   223,  -231,   369,   239,   419,   419,   217,  -231,   419,
     419,  -231,  -231,  -231,   369,  -231,   232,   226,   233,  -231,
     236,   240,  -231,   419,   419,   369,   369,   369,   244,   229,
     257,  -231,  -231,   234,   419,   369,  -231,   245,  -231,   369,
    -231
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
       0,    32,    93,    10,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,   116,   115,   112,     0,
     118,   129,   139,   143,   147,   150,   155,   158,   160,   164,
      63,   162,   163,     0,    50,     0,    48,    22,    23,     0,
      24,    81,     8,    29,     0,    95,    72,     0,    65,    66,
      68,     0,   137,     0,   130,   131,   141,     0,     0,   139,
     134,   133,   132,   136,   135,    59,   123,   124,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      83,     0,     0,     0,     0,    37,    97,    64,    62,    70,
      73,    71,    74,    61,    67,     0,     0,    64,    73,   142,
       0,   117,   122,     0,   126,   127,     0,   121,   165,   144,
     145,   146,   148,   149,   151,   152,   153,   154,   156,   157,
     159,   161,    44,     0,    49,    82,     0,     0,     0,    40,
      42,    33,    38,    96,    19,     0,     0,     0,     0,    75,
      64,    62,    69,   138,   140,   120,     0,   119,    52,    84,
      30,     0,    39,     0,     0,     0,     0,     0,     0,     0,
     107,     0,     0,    94,    99,    98,    85,    86,    87,    88,
      89,    90,     0,    78,    76,    77,     0,     0,   128,    41,
     111,     0,   110,     0,     0,   107,     0,     0,   108,     0,
       0,   100,    80,    79,     0,    92,     0,     0,     0,   109,
       0,     0,    91,     0,   107,     0,     0,     0,     0,     0,
     101,   103,   104,     0,   107,     0,   105,     0,   102,     0,
     106
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,   268,  -231,  -231,  -231,   137,     8,  -231,
    -231,  -231,   235,   -84,  -231,  -231,  -231,  -231,  -231,  -231,
     142,  -120,  -231,    77,  -231,  -231,  -231,   208,   153,  -231,
      -5,    -1,   -20,  -231,  -136,   -53,  -231,  -231,   134,   -83,
     -68,   -85,  -231,  -203,  -231,    40,  -231,  -231,  -231,  -231,
    -231,  -231,  -230,  -231,  -231,  -231,  -231,  -231,    -7,   -31,
     189,    60,    38,    58,   159,   160,  -231,   -43,   -42,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,    15,    96,    17,
      31,    32,    33,    18,    19,    50,   142,    38,    94,    20,
     144,   145,   188,   189,    21,    43,    26,    85,    86,   137,
      22,    23,    24,    54,    69,   196,    98,    99,   100,   197,
     152,    90,   141,   225,   226,   227,    95,   146,   195,   228,
     229,   230,   247,   231,    70,    71,   163,   164,    72,    73,
     107,    74,    75,    76,    77,    78,    79,    80,   232,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    97,    27,    40,   140,    91,    81,    28,    16,   165,
     143,    34,   198,   151,   244,   257,   108,   147,    25,   148,
      16,     7,     8,   159,   192,    35,    36,     2,   110,   111,
     112,   113,   114,     4,   269,   147,     6,   148,   138,     9,
     255,   139,    88,     9,   277,     8,    91,    81,   102,   104,
     105,   262,   109,   109,   109,   109,   109,     9,   143,   108,
     143,   108,   270,   271,   272,   237,   106,   192,   154,   116,
     117,   118,   278,    10,    -7,     7,   280,   155,   166,    53,
     168,   119,   199,   120,    41,     8,    42,    48,   121,    92,
     199,   149,   169,   170,   171,   150,   238,     9,   157,   182,
     148,   209,   139,   143,     2,   158,    81,    29,     8,   106,
       4,   185,    37,     6,   186,   -43,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   204,
      40,   211,   191,   128,   129,   130,   131,   212,   190,    44,
     208,    81,    27,    91,    81,    45,   150,   236,     1,   200,
      10,   201,    46,   109,   194,     2,   158,   132,   133,    81,
       3,     4,    47,     5,     6,   -28,   174,   175,   176,   177,
      51,   241,    81,    84,     2,   123,   124,   125,   248,   157,
       4,   148,   134,     6,   126,   127,   172,   173,    52,    88,
     178,   179,    83,    93,   115,   153,   135,   122,     1,   -51,
      48,    10,   210,   248,   258,     2,   190,   260,   261,    55,
       3,     4,   160,     5,     6,   161,    56,    57,   162,   183,
      10,   268,   248,   167,   203,   205,   206,   240,    58,   207,
     233,   234,   248,   242,   235,   245,   246,    59,    60,   243,
     249,    61,   250,    62,    63,     1,    64,    65,    66,    67,
      68,    10,     2,   251,   252,   253,     1,     3,     4,   256,
       5,     6,   254,     2,   259,   263,   275,   265,     3,     4,
     266,     5,     6,   264,   267,   147,   274,   148,   273,   279,
      30,   276,    87,   193,   187,     8,     7,     1,   239,   202,
     156,   136,   184,   180,     2,   181,     8,     9,    10,     3,
       4,     0,     5,     6,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,   157,     0,   148,
       0,   213,   214,   215,   216,   217,     0,     8,   218,   219,
     220,    55,     0,     0,   221,     0,     0,   222,    56,    57,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,    52,   223,     0,     0,     0,    59,
      60,     0,     0,    61,   224,    62,    63,     0,    64,    65,
      66,    67,    68,   213,   214,   215,   216,   217,     0,     0,
     218,   219,   220,    55,     0,     0,   221,     0,     0,   222,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,    52,     0,     0,     0,
       0,    59,    60,     0,     0,    61,   224,    62,    63,    55,
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
      42,    54,     7,    23,    89,    48,    48,     8,     0,   119,
      94,    16,   148,    96,   217,   245,    58,    33,    55,    35,
      12,    33,    43,   106,   144,    17,    18,    10,    59,    60,
      61,    62,    63,    16,   264,    33,    19,    35,    38,    55,
     243,    41,    47,    55,   274,    43,    89,    89,    55,    56,
      57,   254,    59,    60,    61,    62,    63,    55,   142,   101,
     144,   103,   265,   266,   267,   201,    58,   187,    32,    21,
      22,    23,   275,    56,    37,    33,   279,    41,   120,    39,
     122,    33,   150,    35,    33,    43,    35,    50,    40,    49,
     158,    96,   123,   124,   125,    96,   206,    55,    33,    38,
      35,   186,    41,   187,    10,   106,   148,     0,    43,   101,
      16,    38,    55,    19,    41,    37,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   160,
     150,    41,    38,    24,    25,    26,    27,    47,   143,    37,
     183,   183,   147,   186,   186,    34,   147,   200,     3,    33,
      56,    35,    47,   160,   146,    10,   157,    28,    29,   201,
      15,    16,    41,    18,    19,    37,   128,   129,   130,   131,
      37,   214,   214,    55,    10,    43,    44,    45,   220,    33,
      16,    35,    30,    19,    48,    49,   126,   127,    37,   194,
     132,   133,    37,    37,    36,    34,    31,    50,     3,    50,
      50,    56,    38,   245,   246,    10,   211,   249,   250,    14,
      15,    16,    34,    18,    19,    34,    21,    22,    55,    50,
      56,   263,   264,    55,    34,    34,    41,    47,    33,    36,
      34,    34,   274,    47,    36,    33,    33,    42,    43,    39,
      33,    46,    33,    48,    49,     3,    51,    52,    53,    54,
      55,    56,    10,    47,    34,    36,     3,    15,    16,    20,
      18,    19,    39,    10,    47,    33,     9,    34,    15,    16,
      34,    18,    19,    47,    34,    33,    47,    35,    34,    34,
      12,    47,    47,   146,   142,    43,    33,     3,   211,   155,
     101,    83,   139,   134,    10,   135,    43,    55,    56,    15,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,     4,     5,     6,     7,     8,    -1,    43,    11,    12,
      13,    14,    -1,    -1,    17,    -1,    -1,    20,    21,    22,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,     4,     5,     6,     7,     8,    -1,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      72,    37,    37,   102,    90,    14,    21,    22,    33,    42,
      43,    46,    48,    49,    51,    52,    53,    54,    55,    91,
     111,   112,   115,   116,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    37,    55,    84,    85,    69,    87,    37,
      98,   124,   102,    37,    75,   103,    65,    92,    93,    94,
      95,    33,   115,    33,   115,   115,    65,   117,   125,   115,
     116,   116,   116,   116,   116,    36,    21,    22,    23,    33,
      35,    40,    50,    43,    44,    45,    48,    49,    24,    25,
      26,    27,    28,    29,    30,    31,    84,    86,    38,    41,
      98,    99,    73,    70,    77,    78,   104,    33,    35,    87,
      88,    96,    97,    34,    32,    41,   117,    33,    88,    96,
      34,    34,    55,   113,   114,   126,   125,    55,   125,   116,
     116,   116,   118,   118,   119,   119,   119,   119,   120,   120,
     121,   122,    38,    50,    85,    38,    41,    77,    79,    80,
      87,    38,    78,    64,    65,   105,    92,    96,    91,    97,
      33,    35,    95,    34,   116,    34,    41,    36,   124,    98,
      38,    41,    47,     4,     5,     6,     7,     8,    11,    12,
      13,    17,    20,    38,    47,   100,   101,   102,   106,   107,
     108,   110,   125,    34,    34,    36,    92,    91,   126,    80,
      47,   124,    47,    39,   100,    33,    33,   109,   125,    33,
      33,    47,    34,    36,    39,   100,    20,   109,   125,    47,
     125,   125,   100,    33,    47,    34,    34,    34,   125,   109,
     100,   100,   100,    34,    47,     9,    47,   109,   100,    34,
     100
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
      95,    95,    95,    96,    96,    96,    97,    97,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   103,   102,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   108,   108,   108,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   118,   119,   119,   119,
     120,   120,   120,   120,   120,   121,   121,   121,   122,   122,
     123,   123,   124,   125,   126,   126
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
       0,     5,     0,     1,     0,     1,     1,     2,     1,     3,
       2,     2,     1,     1,     1,     2,     3,     3,     3,     4,
       4,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     0,     5,     0,     2,     0,     2,     1,
       2,     5,     7,     5,     5,     7,     9,     0,     1,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     0,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     1,
       4,     1,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     1,     3
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
#line 17 "my_c.y" /* yacc.c:1646  */
    {root = makeNode(N_PROGRAM, NIL, (yyvsp[0]), NIL); checkForwardReference();}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 19 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 20 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 22 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 23 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 26 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 26 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorBody((yyvsp[-1]), (yyvsp[0]));}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 27 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[0]), makeSpecifier(int_type, 0));}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 27 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorBody((yyvsp[-1]), (yyvsp[0]));}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 30 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorListSpecifier((yyvsp[-1]), (yyvsp[-2]));}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 32 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeSpecifier((yyvsp[0]), 0);}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 33 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeSpecifier(0, (yyvsp[0]));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 34 "my_c.y" /* yacc.c:1646  */
    {(yyval) = updateSpecifier((yyvsp[0]), (yyvsp[-1]), 0);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 35 "my_c.y" /* yacc.c:1646  */
    {(yyval) = updateSpecifier((yyvsp[0]), 0, (yyvsp[-1]));}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 37 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_AUTO;}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 38 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_STATIC;}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 39 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_TYPEDEF;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 41 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 42 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 45 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 46 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 48 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 49 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorInit((yyvsp[-2]), (yyvsp[0]));}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 52 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 53 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 54 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 57 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier((yyvsp[-1]), (yyvsp[0]), ID_STRUCT);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 57 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 57 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = setTypeField((yyvsp[-4]), (yyvsp[-1])); --current_level; current_id = (yyvsp[-2]);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 58 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType((yyvsp[0]));}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 58 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 58 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = setTypeField((yyvsp[-4]), (yyvsp[-1])); --current_level; current_id = (yyvsp[-2]);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 59 "my_c.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]), (yyvsp[0]), ID_STRUCT);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 61 "my_c.y" /* yacc.c:1646  */
    {(yyval) = T_STRUCT;}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 62 "my_c.y" /* yacc.c:1646  */
    {(yyval) = T_UNION;}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 64 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 65 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 67 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setStructDeclaratorListSpecifier((yyvsp[-1]), (yyvsp[-2]));}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 69 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 70 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 72 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 75 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier(T_ENUM, (yyvsp[0]), ID_ENUM);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 75 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeField((yyvsp[-3]), (yyvsp[-1]));}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 76 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_ENUM);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 76 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeField((yyvsp[-3]), (yyvsp[-1]));}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 77 "my_c.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier(T_ENUM, (yyvsp[0]), ID_ENUM);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 79 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 80 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 82 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorKind(makeIdentifier((yyvsp[0])), ID_ENUM_LITERAL);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 83 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorKind(makeIdentifier((yyvsp[0])), ID_ENUM_LITERAL);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 83 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorInit((yyvsp[-2]), (yyvsp[0]));}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 94 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeIdentifier((yyvsp[0]));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 97 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 97 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); --current_level; current_id = (yyvsp[-2]);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 127 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_INIT_LIST_ONE, 0, (yyvsp[0]), 0);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 128 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 130 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_INIT_LIST, (yyvsp[0]), 0, makeNode(N_INIT_LIST_NIL, 0, 0, 0));}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 131 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_INIT_LIST, (yyvsp[-2]), (yyvsp[0]));}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 145 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 145 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); --current_level; current_id = (yyvsp[-3]);}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1949 "y.tab.c" /* yacc.c:1646  */
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
#line 252 "my_c.y" /* yacc.c:1906  */

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
