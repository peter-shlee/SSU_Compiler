/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "my_c.y"
#include "y.tab.h"
#include <stdio.h>
extern int line_no;
extern int yylex (void);
void yyerror(char *s);
#line 27 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define AUTO_SYM 257
#define BREAK_SYM 258
#define CASE_SYM 259
#define CONTINUE_SYM 260
#define DEFAULT_SYM 261
#define DO_SYM 262
#define ELSE_SYM 263
#define ENUM_SYM 264
#define FOR_SYM 265
#define IF_SYM 266
#define RETURN_SYM 267
#define SIZEOF_SYM 268
#define STATIC_SYM 269
#define STRUCT_SYM 270
#define SWITCH_SYM 271
#define TYPEDEF_SYM 272
#define UNION_SYM 273
#define WHILE_SYM 274
#define PLUSPLUS 275
#define MINUSMINUS 276
#define ARROW 277
#define LSS 278
#define GTR 279
#define LEQ 280
#define GEQ 281
#define EQL 282
#define NEQ 283
#define AMPAMP 284
#define BARBAR 285
#define DOTDOTDOT 286
#define LP 287
#define RP 288
#define LB 289
#define RB 290
#define LR 291
#define RR 292
#define COLON 293
#define PERIOD 294
#define COMMA 295
#define EXCL 296
#define STAR 297
#define SLASH 298
#define PERCENT 299
#define AMP 300
#define SEMICOLON 301
#define PLUS 302
#define MINUS 303
#define ASSIGN 304
#define INTEGER_CONSTANT 305
#define FLOAT_CONSTANT 306
#define STRING_LITERAL 307
#define CHARACTER_CONSTANT 308
#define IDENTIFIER 309
#define TYPE_IDENTIFIER 310
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    3,    3,    4,    4,    5,
    5,    5,    5,   10,   10,   10,    8,    8,   11,   11,
    9,    9,    9,   13,   13,   13,   15,   15,   16,   16,
   17,   18,   18,   19,   14,   14,   14,   20,   20,   21,
   21,    6,    6,   23,   23,   24,   24,   24,   24,   25,
   25,   26,   26,   27,   27,   28,   28,   29,   29,   29,
   30,   30,   30,   31,   31,   31,   31,   31,   12,   12,
   32,   32,   33,   33,   33,   33,   33,   33,   34,   34,
    7,   39,   39,   40,   40,   35,   35,   36,   36,   36,
   37,   37,   37,   42,   42,   38,   38,   38,   43,   43,
   43,   43,   43,   43,   44,   44,   44,   44,   44,   44,
   44,   45,   45,   46,   46,   48,   48,   48,   48,   48,
   48,   48,   48,   48,   48,   49,   49,   50,   50,   51,
   51,   51,   51,   52,   52,   52,   53,   53,   53,   53,
   53,   54,   54,   54,   55,   55,   56,   56,   22,   41,
   47,   47,
};
static const YYINT yylen[] = {                            2,
    1,    1,    2,    1,    1,    3,    2,    2,    3,    1,
    1,    2,    2,    1,    1,    1,    1,    3,    1,    3,
    1,    1,    1,    5,    4,    2,    1,    1,    1,    2,
    3,    1,    3,    1,    5,    4,    2,    1,    3,    1,
    3,    2,    1,    1,    2,    1,    3,    4,    4,    0,
    1,    0,    1,    1,    2,    1,    3,    2,    2,    1,
    1,    1,    2,    3,    3,    3,    4,    4,    1,    3,
    1,    3,    1,    1,    1,    1,    1,    1,    4,    3,
    4,    0,    2,    0,    2,    1,    2,    5,    7,    5,
    5,    7,    9,    0,    1,    3,    2,    2,    1,    1,
    1,    1,    1,    3,    1,    4,    4,    3,    3,    2,
    2,    0,    1,    1,    3,    1,    2,    2,    2,    2,
    2,    2,    2,    2,    4,    1,    4,    1,    2,    1,
    3,    3,    3,    1,    3,    3,    1,    3,    3,    3,
    3,    1,    3,    3,    1,    3,    1,    3,    1,    1,
    1,    3,
};
static const YYINT yydefred[] = {                         0,
   14,    0,   15,   27,   16,   28,    0,    0,   46,   23,
    0,    0,    2,    4,    5,    0,    0,    0,    0,   21,
   22,    0,    0,    0,    0,    0,    0,   45,    3,    8,
    0,    0,   17,   82,    7,   12,   13,    0,    0,    0,
    0,    0,    0,    0,   38,    0,   47,    0,    6,    0,
    9,    0,    0,    0,   29,    0,    0,    0,   53,    0,
   56,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  100,  101,  103,  102,   99,   51,    0,  149,  105,    0,
  150,    0,  130,    0,    0,    0,    0,    0,    0,    0,
   36,    0,    0,    0,   20,   69,    0,   18,   83,    0,
    0,   34,    0,   32,   25,   30,    0,    0,    0,   58,
    0,   59,    0,   49,   55,    0,    0,  124,    0,  117,
  118,    0,    0,    0,  126,  121,  120,  119,  123,  122,
   48,  110,  111,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   41,   39,   35,   71,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   81,   86,   74,   85,
   73,   75,   76,   77,   78,    0,    0,   31,   24,    0,
    0,    0,    0,    0,    0,   57,    0,    0,    0,  129,
  104,    0,  109,    0,    0,  114,    0,  108,  152,  131,
  132,  133,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   70,    0,   98,    0,   97,    0,    0,    0,
    0,   95,    0,    0,    0,   87,   33,   66,   64,   65,
    0,    0,  125,  127,  107,    0,  106,   72,    0,   80,
    0,    0,    0,   96,    0,    0,   68,   67,  115,   79,
    0,    0,    0,    0,    0,    0,    0,    0,   90,   91,
    0,    0,    0,   92,    0,   89,    0,   93,
};
static const YYINT yydgoto[] = {                         11,
   12,   13,   14,   15,   57,   17,  169,   32,   18,   19,
   33,   95,   20,   21,   22,   54,   55,  103,  104,   44,
   45,   76,   23,   24,   77,  180,   59,   60,   61,  181,
  113,  156,  170,  171,  172,  173,  174,  175,   52,  101,
  176,  223,   79,   80,  194,  195,   81,   82,   83,  124,
   84,   85,   86,   87,   88,   89,
};
static const YYINT yysindex[] = {                        63,
    0, -271,    0,    0,    0,    0, -246, -268,    0,    0,
    0,   63,    0,    0,    0, -254, -259, -137, -137,    0,
    0, -237, -263,  -61, -269, -225, -218,    0,    0,    0,
 -223, -147,    0,    0,    0,    0,    0, -239, -199,  -61,
 -137,  328, -205, -233,    0, -269,    0,  314,    0, -246,
    0, -137, -246, -234,    0, -239, -168, -176,    0, -148,
    0,  364,  378,  378,  -73,  328,  328,  328,  328,  328,
    0,    0,    0,    0,    0,    0, -173,    0,    0, -101,
    0, -165,    0,  -31,  -91,  -28,   18, -134, -133,  328,
    0, -269, -146,  314,    0,    0, -110,    0,    0, -254,
  122,    0,  -94,    0,    0,    0, -139,   42,  328,    0,
 -252,    0,  -13,    0,    0, -137,  -73,    0,  328,    0,
    0, -187,  -83,  -66,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -68,  328,  328,  -30,  328,  328,  328,
  328,  328,  328,  328,  328,  328,  328,  328,  328,  328,
  328,    0,    0,    0,    0,  -38,  -53,  328,  -37,  -23,
  278,  -14,    4,  328,    6,   15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   12, -246,    0,    0,   22,
   28,   14,  -13, -137,  328,    0,   34,   89,   -1,    0,
    0,  328,    0,   35,   43,    0,   40,    0,    0,    0,
    0,    0,  -31,  -31,  -91,  -91,  -91,  -91,  -28,  -28,
   18, -134,    0,  314,    0,   51,    0,  278,   71,  328,
  328,    0,   46,  328,  328,    0,    0,    0,    0,    0,
   60,   59,    0,    0,    0,  328,    0,    0,  278,    0,
   77,   65,   79,    0,   80,   82,    0,    0,    0,    0,
  328,  328,  278,  278,  278,   83,   73,  112,    0,    0,
   78,  328,  278,    0,   97,    0,  278,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  -70,    0,    0,
    0,  391,    0,    0,    0,    0,    0,   68,  647,    0,
    0,    0,    0,  -46,    0,  -26,    0,    0,    0,    0,
  -80,    0,    0,    0,    0,    0,    0,    0,    8,   33,
  104,  105,  -36,    0,    0,    0,    0,    0,    0,    0,
    0,  174,    0,    0,    0,    0, -158,    0,    0,  106,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  410,
    0,  437,    0,  463,  541,  667,  167,   -3, -103,    0,
    0,    0,    0,    0,    0,    0,  -80,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  104,  105,    0,
 -144,    0, -118,    0,    0,    0,    0,    0,    0,    0,
    0,  113,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  114,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  103,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -82,  104,  105,    0,    0,  104,  118,    0,
    0,    0,    0,    0,  123,    0,    0,    0,    0,    0,
    0,    0,  489,  515,  565,  589,  613,  637,  681,  695,
  219,  115,    0,    0,    0,    0,    0,    0,    0,  103,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  103,    0,    0,    0,    0,    0,  226,    0,    0,
    0,  124,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  403,    0,  365,    9,    3,   92,    0,  -12,    0,
  370,  -90,    0,    0,    0,  381,  -43,    0,  244,  380,
  346,  -45,   -7,  -18,  -87,  -39,    0,    0,  327,  -49,
  -98,    0, -149,    0,    0,    0,    0,    0,    0,    0,
  -42, -155,    0,    0,    0,    0, -128,   16,  -52,  329,
  165,  196,  177,  294,  296,    0,
};
#define YYTABLESIZE 996
static const YYINT yytable[] = {                         78,
   28,   58,   96,  155,   40,   78,  196,  112,   16,   27,
  106,  219,  183,  126,  127,  128,  129,  130,   31,   25,
   16,  182,  123,    7,    2,   53,   36,   37,    8,    2,
    4,   34,    7,    6,  108,    4,  109,   26,    6,   43,
    7,   53,    8,   53,  152,    9,   30,   78,   96,  111,
    8,   78,   97,   38,    9,  102,    9,  105,   91,  110,
  100,   92,    9,  106,  242,   46,   78,   34,  240,   47,
   10,   39,  190,  122,  123,   10,  123,  118,  120,  121,
   48,  125,  125,  125,  125,  125,  200,  201,  202,  250,
  183,   56,   40,  197,   53,  199,  257,  232,   90,  188,
  111,  109,   97,  258,  259,  260,  265,  249,   35,    8,
   27,  114,  216,  266,  189,   78,  131,  268,  108,    1,
  109,  222,   49,  238,    2,  122,    2,   60,    8,   60,
    4,    3,    4,    6,    5,    6,   60,  115,  138,  234,
    9,   61,   78,   61,  231,  154,  116,   50,   92,  150,
   61,  151,  179,   51,  125,  125,  125,  125,  125,  125,
  125,  125,  125,  125,  125,  125,  125,   62,   96,   62,
   10,   78,   10,  132,  133,  134,   62,  222,  243,  102,
  189,  245,  246,    1,  151,  135,  151,  136,  151,  151,
    2,  151,  137,   48,   62,    3,    4,  151,    5,    6,
  177,   63,   64,   63,  191,   63,  178,  125,  256,  222,
  142,  143,   63,   65,   19,   44,   44,   44,   44,  222,
   19,  192,   66,   67,   44,   41,   68,   42,   69,   70,
   37,   71,   72,   73,   74,   75,   10,   37,   44,   43,
  193,   43,   37,   37,   43,   37,   37,  215,   43,  144,
  145,  146,  147,  213,   43,   40,  214,   43,   40,   37,
   37,   37,   37,  217,   26,  139,  140,  141,   37,  218,
   37,   26,  220,  184,   37,  185,   26,   26,  198,   26,
   26,  147,   37,   37,  147,  188,  147,  109,  147,  147,
  221,  147,  224,   26,   26,   26,   26,  147,    1,  148,
  149,  225,   26,  230,   26,    2,  203,  204,   26,  228,
    3,    4,  226,    5,    6,  229,   26,   26,   42,    1,
   42,  233,  235,   42,  209,  210,    2,   42,  108,  237,
  109,    3,    4,   42,    5,    6,   42,  236,    8,  205,
  206,  207,  208,  239,  241,    1,  244,  247,  248,    7,
    9,   10,    2,   10,   10,   10,   10,    3,    4,    8,
    5,    6,   10,  251,   10,  252,  253,  254,   10,  255,
  261,    9,   10,  262,  263,  188,   10,  109,  264,  157,
  158,  159,  160,  161,  267,    8,  162,  163,  164,   62,
    1,   52,  165,   54,   50,  166,   63,   64,   10,  148,
  128,  112,  148,   94,  148,   61,  148,  148,   65,  148,
  113,   94,   34,  167,   29,  148,   99,   66,   67,   98,
  227,   68,  168,   69,   70,   93,   71,   72,   73,   74,
   75,   84,   84,   84,   84,   84,  107,  153,   84,   84,
   84,   84,  186,  211,   84,  187,  212,   84,   84,   84,
  145,  145,    0,    0,  145,    0,  145,    0,  145,  145,
   84,  145,    0,    0,   84,   84,    0,  145,    0,   84,
   84,    0,    0,   84,   84,   84,   84,    0,   84,   84,
   84,   84,   84,   88,   88,   88,   88,   88,    0,    0,
   88,   88,   88,   88,    0,    0,   88,    0,    0,   88,
   88,   88,  146,  146,    0,    0,  146,    0,  146,    0,
  146,  146,   88,  146,    0,    0,   88,   88,    0,  146,
    0,   88,   88,    0,    0,   88,   88,   88,   88,    0,
   88,   88,   88,   88,   88,  157,  158,  159,  160,  161,
    0,    0,  162,  163,  164,   62,    0,    0,  165,    0,
    0,  166,   63,   64,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   65,    0,    0,    0,   34,    0,
    0,    0,    0,   66,   67,    0,    0,   68,  168,   69,
   70,   62,   71,   72,   73,   74,   75,    0,   63,   64,
    0,    0,    0,    0,    0,   62,    0,    0,    0,    0,
   65,    0,   63,   64,   94,    0,    0,    0,    0,   66,
   67,    0,    0,   68,   65,   69,   70,    0,   71,   72,
   73,   74,   75,   66,   67,    0,    0,   68,    0,   69,
   70,   62,   71,   72,   73,   74,   75,    0,   63,   64,
    0,    0,    0,    0,    0,   62,    0,    0,    0,    0,
  117,    0,   63,   64,    0,    0,    0,    0,    0,   66,
   67,    0,    0,   68,  119,   69,   70,    0,   71,   72,
   73,   74,   75,   66,   67,    0,    0,   68,    0,   69,
   70,    0,   71,   72,   73,   74,   75,  116,  116,  116,
  116,  116,  116,  116,  116,    0,    0,  116,    0,  116,
    0,  116,  116,    0,  116,    0,  116,  116,  116,    0,
  116,  116,  116,  116,  126,  126,  126,  126,  126,  126,
  126,  126,    0,    0,  126,    0,  126,    0,  126,  126,
    0,  126,    0,  126,  126,  126,    0,  126,  126,  126,
  134,  134,  134,  134,  134,  134,  134,  134,    0,    0,
  134,    0,  134,    0,  134,  134,    0,  134,    0,    0,
    0,    0,    0,  134,  134,  134,  135,  135,  135,  135,
  135,  135,  135,  135,    0,    0,  135,    0,  135,    0,
  135,  135,    0,  135,    0,    0,    0,    0,    0,  135,
  135,  135,  136,  136,  136,  136,  136,  136,  136,  136,
    0,    0,  136,    0,  136,    0,  136,  136,    0,  136,
    0,    0,    0,    0,    0,  136,  136,  136,  137,  137,
  137,  137,  137,  137,  137,  137,    0,    0,  137,    0,
  137,    0,  137,  137,    0,  137,    0,    0,    0,    0,
    0,  137,  138,  138,  138,  138,  138,  138,  138,  138,
    0,    0,  138,    0,  138,    0,  138,  138,    0,  138,
    0,    0,    0,    0,    0,  138,  139,  139,  139,  139,
  139,  139,  139,  139,    0,    0,  139,    0,  139,    0,
  139,  139,    0,  139,    0,    0,    0,    0,    0,  139,
  140,  140,  140,  140,  140,  140,  140,  140,    0,    0,
  140,    0,  140,    0,  140,  140,    0,  140,    0,    0,
    0,    0,    0,  140,  141,  141,  141,  141,  141,  141,
  141,  141,    0,    0,  141,    0,  141,    0,  141,  141,
    0,  141,   11,   11,   11,   11,    0,  141,    0,    0,
    0,   11,    0,   11,    0,    0,    0,   11,  142,  142,
  142,  142,    0,    0,  142,   11,  142,    0,  142,  142,
    0,  142,  143,  143,  143,  143,    0,  142,  143,    0,
  143,    0,  143,  143,    0,  143,  144,  144,  144,  144,
    0,  143,  144,    0,  144,    0,  144,  144,    0,  144,
    0,    0,    0,    0,    0,  144,
};
static const YYINT yycheck[] = {                         42,
    8,   41,   48,   94,   23,   48,  135,   57,    0,    7,
   54,  161,  111,   66,   67,   68,   69,   70,   16,  291,
   12,  109,   65,  287,  264,   38,   18,   19,  297,  264,
  270,  291,  287,  273,  287,  270,  289,  309,  273,  309,
  287,   54,  297,   56,   90,  309,  301,   90,   94,   57,
  297,   94,   50,  291,  309,   53,  309,  292,  292,   57,
   52,  295,  309,  107,  220,  291,  109,  291,  218,  288,
  310,  309,  122,   65,  117,  310,  119,   62,   63,   64,
  304,   66,   67,   68,   69,   70,  139,  140,  141,  239,
  189,  291,  111,  136,  107,  138,  252,  185,  304,  287,
  108,  289,  100,  253,  254,  255,  262,  236,   17,  297,
  108,  288,  158,  263,  122,  158,  290,  267,  287,  257,
  289,  164,   31,  214,  264,  117,  264,  286,  297,  288,
  270,  269,  270,  273,  272,  273,  295,  286,  304,  192,
  309,  286,  185,  288,  184,  292,  295,  295,  295,  284,
  295,  285,  292,  301,  139,  140,  141,  142,  143,  144,
  145,  146,  147,  148,  149,  150,  151,  286,  214,  288,
  310,  214,  310,  275,  276,  277,  295,  220,  221,  177,
  188,  224,  225,  257,  288,  287,  290,  289,  292,  293,
  264,  295,  294,  304,  268,  269,  270,  301,  272,  273,
  295,  275,  276,  286,  288,  288,  301,  192,  251,  252,
  302,  303,  295,  287,  295,  286,  287,  288,  289,  262,
  301,  288,  296,  297,  295,  287,  300,  289,  302,  303,
  257,  305,  306,  307,  308,  309,  310,  264,  309,  286,
  309,  288,  269,  270,  291,  272,  273,  301,  295,  278,
  279,  280,  281,  292,  301,  292,  295,  304,  295,  286,
  287,  288,  289,  301,  257,  297,  298,  299,  295,  293,
  297,  264,  287,  287,  301,  289,  269,  270,  309,  272,
  273,  285,  309,  310,  288,  287,  290,  289,  292,  293,
  287,  295,  287,  286,  287,  288,  289,  301,  257,  282,
  283,  287,  295,  290,  297,  264,  142,  143,  301,  288,
  269,  270,  301,  272,  273,  288,  309,  310,  286,  257,
  288,  288,  288,  291,  148,  149,  264,  295,  287,  290,
  289,  269,  270,  301,  272,  273,  304,  295,  297,  144,
  145,  146,  147,  293,  274,  257,  301,  288,  290,  287,
  309,  310,  264,  286,  287,  288,  289,  269,  270,  297,
  272,  273,  295,  287,  297,  301,  288,  288,  301,  288,
  288,  309,  310,  301,  263,  287,  309,  289,  301,  258,
  259,  260,  261,  262,  288,  297,  265,  266,  267,  268,
    0,  288,  271,  288,  290,  274,  275,  276,  310,  285,
  288,  288,  288,  301,  290,  288,  292,  293,  287,  295,
  288,  288,  291,  292,   12,  301,   52,  296,  297,   50,
  177,  300,  301,  302,  303,   46,  305,  306,  307,  308,
  309,  258,  259,  260,  261,  262,   56,   92,  265,  266,
  267,  268,  116,  150,  271,  117,  151,  274,  275,  276,
  284,  285,   -1,   -1,  288,   -1,  290,   -1,  292,  293,
  287,  295,   -1,   -1,  291,  292,   -1,  301,   -1,  296,
  297,   -1,   -1,  300,  301,  302,  303,   -1,  305,  306,
  307,  308,  309,  258,  259,  260,  261,  262,   -1,   -1,
  265,  266,  267,  268,   -1,   -1,  271,   -1,   -1,  274,
  275,  276,  284,  285,   -1,   -1,  288,   -1,  290,   -1,
  292,  293,  287,  295,   -1,   -1,  291,  292,   -1,  301,
   -1,  296,  297,   -1,   -1,  300,  301,  302,  303,   -1,
  305,  306,  307,  308,  309,  258,  259,  260,  261,  262,
   -1,   -1,  265,  266,  267,  268,   -1,   -1,  271,   -1,
   -1,  274,  275,  276,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  287,   -1,   -1,   -1,  291,   -1,
   -1,   -1,   -1,  296,  297,   -1,   -1,  300,  301,  302,
  303,  268,  305,  306,  307,  308,  309,   -1,  275,  276,
   -1,   -1,   -1,   -1,   -1,  268,   -1,   -1,   -1,   -1,
  287,   -1,  275,  276,  291,   -1,   -1,   -1,   -1,  296,
  297,   -1,   -1,  300,  287,  302,  303,   -1,  305,  306,
  307,  308,  309,  296,  297,   -1,   -1,  300,   -1,  302,
  303,  268,  305,  306,  307,  308,  309,   -1,  275,  276,
   -1,   -1,   -1,   -1,   -1,  268,   -1,   -1,   -1,   -1,
  287,   -1,  275,  276,   -1,   -1,   -1,   -1,   -1,  296,
  297,   -1,   -1,  300,  287,  302,  303,   -1,  305,  306,
  307,  308,  309,  296,  297,   -1,   -1,  300,   -1,  302,
  303,   -1,  305,  306,  307,  308,  309,  278,  279,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,  290,
   -1,  292,  293,   -1,  295,   -1,  297,  298,  299,   -1,
  301,  302,  303,  304,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,   -1,  290,   -1,  292,  293,
   -1,  295,   -1,  297,  298,  299,   -1,  301,  302,  303,
  278,  279,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,   -1,  290,   -1,  292,  293,   -1,  295,   -1,   -1,
   -1,   -1,   -1,  301,  302,  303,  278,  279,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,   -1,  290,   -1,
  292,  293,   -1,  295,   -1,   -1,   -1,   -1,   -1,  301,
  302,  303,  278,  279,  280,  281,  282,  283,  284,  285,
   -1,   -1,  288,   -1,  290,   -1,  292,  293,   -1,  295,
   -1,   -1,   -1,   -1,   -1,  301,  302,  303,  278,  279,
  280,  281,  282,  283,  284,  285,   -1,   -1,  288,   -1,
  290,   -1,  292,  293,   -1,  295,   -1,   -1,   -1,   -1,
   -1,  301,  278,  279,  280,  281,  282,  283,  284,  285,
   -1,   -1,  288,   -1,  290,   -1,  292,  293,   -1,  295,
   -1,   -1,   -1,   -1,   -1,  301,  278,  279,  280,  281,
  282,  283,  284,  285,   -1,   -1,  288,   -1,  290,   -1,
  292,  293,   -1,  295,   -1,   -1,   -1,   -1,   -1,  301,
  278,  279,  280,  281,  282,  283,  284,  285,   -1,   -1,
  288,   -1,  290,   -1,  292,  293,   -1,  295,   -1,   -1,
   -1,   -1,   -1,  301,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,   -1,  288,   -1,  290,   -1,  292,  293,
   -1,  295,  286,  287,  288,  289,   -1,  301,   -1,   -1,
   -1,  295,   -1,  297,   -1,   -1,   -1,  301,  282,  283,
  284,  285,   -1,   -1,  288,  309,  290,   -1,  292,  293,
   -1,  295,  282,  283,  284,  285,   -1,  301,  288,   -1,
  290,   -1,  292,  293,   -1,  295,  282,  283,  284,  285,
   -1,  301,  288,   -1,  290,   -1,  292,  293,   -1,  295,
   -1,   -1,   -1,   -1,   -1,  301,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 310
#define YYUNDFTOKEN 369
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AUTO_SYM","BREAK_SYM","CASE_SYM",
"CONTINUE_SYM","DEFAULT_SYM","DO_SYM","ELSE_SYM","ENUM_SYM","FOR_SYM","IF_SYM",
"RETURN_SYM","SIZEOF_SYM","STATIC_SYM","STRUCT_SYM","SWITCH_SYM","TYPEDEF_SYM",
"UNION_SYM","WHILE_SYM","PLUSPLUS","MINUSMINUS","ARROW","LSS","GTR","LEQ","GEQ",
"EQL","NEQ","AMPAMP","BARBAR","DOTDOTDOT","LP","RP","LB","RB","LR","RR","COLON",
"PERIOD","COMMA","EXCL","STAR","SLASH","PERCENT","AMP","SEMICOLON","PLUS",
"MINUS","ASSIGN","INTEGER_CONSTANT","FLOAT_CONSTANT","STRING_LITERAL",
"CHARACTER_CONSTANT","IDENTIFIER","TYPE_IDENTIFIER",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : translation_unit",
"translation_unit : external_declaration",
"translation_unit : translation_unit external_declaration",
"external_declaration : function_definition",
"external_declaration : declaration",
"function_definition : declaration_specifiers declarator compound_statement",
"function_definition : declarator compound_statement",
"declaration : declaration_specifiers SEMICOLON",
"declaration : declaration_specifiers init_declarator_list SEMICOLON",
"declaration_specifiers : type_specifier",
"declaration_specifiers : storage_class_specifier",
"declaration_specifiers : type_specifier declaration_specifiers",
"declaration_specifiers : storage_class_specifier declaration_specifiers",
"storage_class_specifier : AUTO_SYM",
"storage_class_specifier : STATIC_SYM",
"storage_class_specifier : TYPEDEF_SYM",
"init_declarator_list : init_declarator",
"init_declarator_list : init_declarator_list COMMA init_declarator",
"init_declarator : declarator",
"init_declarator : declarator ASSIGN initializer",
"type_specifier : struct_specifier",
"type_specifier : enum_specifier",
"type_specifier : TYPE_IDENTIFIER",
"struct_specifier : struct_or_union IDENTIFIER LR struct_declaration_list RR",
"struct_specifier : struct_or_union LR struct_declaration_list RR",
"struct_specifier : struct_or_union IDENTIFIER",
"struct_or_union : STRUCT_SYM",
"struct_or_union : UNION_SYM",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : type_specifier struct_declarator_list SEMICOLON",
"struct_declarator_list : struct_declarator",
"struct_declarator_list : struct_declarator_list COMMA struct_declarator",
"struct_declarator : declarator",
"enum_specifier : ENUM_SYM IDENTIFIER LR enumerator_list RR",
"enum_specifier : ENUM_SYM LR enumerator_list RR",
"enum_specifier : ENUM_SYM IDENTIFIER",
"enumerator_list : enumerator",
"enumerator_list : enumerator_list COMMA enumerator",
"enumerator : IDENTIFIER",
"enumerator : IDENTIFIER ASSIGN constant_expression",
"declarator : pointer direct_declarator",
"declarator : direct_declarator",
"pointer : STAR",
"pointer : STAR pointer",
"direct_declarator : IDENTIFIER",
"direct_declarator : LP declarator RP",
"direct_declarator : direct_declarator LB constant_expression_opt RB",
"direct_declarator : direct_declarator LP parameter_type_list_opt RP",
"constant_expression_opt :",
"constant_expression_opt : constant_expression",
"parameter_type_list_opt :",
"parameter_type_list_opt : parameter_type_list",
"parameter_type_list : parameter_list",
"parameter_type_list : parameter_list DOTDOTDOT",
"parameter_list : parameter_declaration",
"parameter_list : parameter_list COMMA parameter_declaration",
"parameter_declaration : declaration_specifiers declarator",
"parameter_declaration : declaration_specifiers abstract_declarator",
"parameter_declaration : declaration_specifiers",
"abstract_declarator : pointer",
"abstract_declarator : direct_abstract_declarator",
"abstract_declarator : pointer direct_abstract_declarator",
"direct_abstract_declarator : LP abstract_declarator RP",
"direct_abstract_declarator : LB constant_expression_opt RB",
"direct_abstract_declarator : LP parameter_type_list_opt RP",
"direct_abstract_declarator : direct_abstract_declarator LB constant_expression_opt RB",
"direct_abstract_declarator : direct_abstract_declarator LP parameter_type_list_opt RP",
"initializer : constant_expression",
"initializer : LR initializer_list RR",
"initializer_list : initializer",
"initializer_list : initializer_list COMMA initializer",
"statement : labeled_statement",
"statement : compound_statement",
"statement : expression_statement",
"statement : selection_statement",
"statement : iteration_statement",
"statement : jump_statement",
"labeled_statement : CASE_SYM constant_expression COLON statement",
"labeled_statement : DEFAULT_SYM COLON statement",
"compound_statement : LR declaration_list statement_list RR",
"declaration_list :",
"declaration_list : declaration_list declaration",
"statement_list :",
"statement_list : statement_list statement",
"expression_statement : SEMICOLON",
"expression_statement : expression SEMICOLON",
"selection_statement : IF_SYM LP expression RP statement",
"selection_statement : IF_SYM LP expression RP statement ELSE_SYM statement",
"selection_statement : SWITCH_SYM LP expression RP statement",
"iteration_statement : WHILE_SYM LP expression RP statement",
"iteration_statement : DO_SYM statement WHILE_SYM LP expression RP SEMICOLON",
"iteration_statement : FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement",
"expression_opt :",
"expression_opt : expression",
"jump_statement : RETURN_SYM expression_opt SEMICOLON",
"jump_statement : CONTINUE_SYM SEMICOLON",
"jump_statement : BREAK_SYM SEMICOLON",
"primary_expression : IDENTIFIER",
"primary_expression : INTEGER_CONSTANT",
"primary_expression : FLOAT_CONSTANT",
"primary_expression : CHARACTER_CONSTANT",
"primary_expression : STRING_LITERAL",
"primary_expression : LP expression RP",
"postfix_expression : primary_expression",
"postfix_expression : postfix_expression LB expression RB",
"postfix_expression : postfix_expression LP arg_expression_list_opt RP",
"postfix_expression : postfix_expression PERIOD IDENTIFIER",
"postfix_expression : postfix_expression ARROW IDENTIFIER",
"postfix_expression : postfix_expression PLUSPLUS",
"postfix_expression : postfix_expression MINUSMINUS",
"arg_expression_list_opt :",
"arg_expression_list_opt : arg_expression_list",
"arg_expression_list : assignment_expression",
"arg_expression_list : arg_expression_list COMMA assignment_expression",
"unary_expression : postfix_expression",
"unary_expression : PLUSPLUS unary_expression",
"unary_expression : MINUSMINUS unary_expression",
"unary_expression : AMP cast_expression",
"unary_expression : STAR cast_expression",
"unary_expression : EXCL cast_expression",
"unary_expression : MINUS cast_expression",
"unary_expression : PLUS cast_expression",
"unary_expression : SIZEOF_SYM unary_expression",
"unary_expression : SIZEOF_SYM LP type_name RP",
"cast_expression : unary_expression",
"cast_expression : LP type_name RP cast_expression",
"type_name : declaration_specifiers",
"type_name : declaration_specifiers abstract_declarator",
"multiplicative_expression : cast_expression",
"multiplicative_expression : multiplicative_expression STAR cast_expression",
"multiplicative_expression : multiplicative_expression SLASH cast_expression",
"multiplicative_expression : multiplicative_expression PERCENT cast_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression PLUS multiplicative_expression",
"additive_expression : additive_expression MINUS multiplicative_expression",
"relational_expression : additive_expression",
"relational_expression : relational_expression LSS additive_expression",
"relational_expression : relational_expression GTR additive_expression",
"relational_expression : relational_expression LEQ additive_expression",
"relational_expression : relational_expression GEQ additive_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQL relational_expression",
"equality_expression : equality_expression NEQ relational_expression",
"logical_and_expression : equality_expression",
"logical_and_expression : logical_and_expression AMPAMP equality_expression",
"logical_or_expression : logical_and_expression",
"logical_or_expression : logical_or_expression BARBAR logical_and_expression",
"constant_expression : expression",
"expression : assignment_expression",
"assignment_expression : logical_or_expression",
"assignment_expression : unary_expression ASSIGN expression",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 244 "my_c.y"
extern char *yytext;
void yyerror(char *s) { printf("line %d %s near %s \n", line_no, s, yytext); }
int main() {
 yyparse();
}
#line 690 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
