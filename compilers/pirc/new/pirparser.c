/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse yypirparse
#define yylex   yypirlex
#define yyerror yypirerror
#define yylval  yypirlval
#define yychar  yypirchar
#define yydebug yypirdebug
#define yynerrs yypirnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_NL = 258,
     TK_HLL = 259,
     TK_HLL_MAP = 260,
     TK_LOADLIB = 261,
     TK_SUB = 262,
     TK_END = 263,
     TK_PARAM = 264,
     TK_LEX = 265,
     TK_LINE = 266,
     TK_FILE = 267,
     TK_LOCAL = 268,
     TK_NAMESPACE = 269,
     TK_INVOCANT = 270,
     TK_METH_CALL = 271,
     TK_GLOBALCONST = 272,
     TK_CONST = 273,
     TK_RETURN = 274,
     TK_YIELD = 275,
     TK_SET_YIELD = 276,
     TK_SET_RETURN = 277,
     TK_BEGIN_YIELD = 278,
     TK_END_YIELD = 279,
     TK_BEGIN_RETURN = 280,
     TK_END_RETURN = 281,
     TK_BEGIN_CALL = 282,
     TK_END_CALL = 283,
     TK_GET_RESULTS = 284,
     TK_CALL = 285,
     TK_SET_ARG = 286,
     TK_GET_RESULT = 287,
     TK_NCI_CALL = 288,
     TK_TAILCALL = 289,
     TK_LABEL = 290,
     TK_IDENT = 291,
     TK_INT = 292,
     TK_NUM = 293,
     TK_PMC = 294,
     TK_STRING = 295,
     TK_IF = 296,
     TK_UNLESS = 297,
     TK_NULL = 298,
     TK_GOTO = 299,
     TK_STRINGC = 300,
     TK_INTC = 301,
     TK_NUMC = 302,
     TK_PREG = 303,
     TK_NREG = 304,
     TK_SREG = 305,
     TK_IREG = 306,
     TK_ARROW = 307,
     TK_NE = 308,
     TK_EQ = 309,
     TK_LT = 310,
     TK_LE = 311,
     TK_GT = 312,
     TK_GE = 313,
     TK_USHIFT = 314,
     TK_RSHIFT = 315,
     TK_LSHIFT = 316,
     TK_FDIV = 317,
     TK_OR = 318,
     TK_AND = 319,
     TK_XOR = 320,
     TK_CONC = 321,
     TK_ASSIGN_USHIFT = 322,
     TK_ASSIGN_RSHIFT = 323,
     TK_ASSIGN_LSHIFT = 324,
     TK_ASSIGN_INC = 325,
     TK_ASSIGN_DEC = 326,
     TK_ASSIGN_MUL = 327,
     TK_ASSIGN_MOD = 328,
     TK_ASSIGN_POW = 329,
     TK_ASSIGN_DIV = 330,
     TK_ASSIGN_BOR = 331,
     TK_ASSIGN_BAND = 332,
     TK_ASSIGN_FDIV = 333,
     TK_ASSIGN_BNOT = 334,
     TK_ASSIGN_CONC = 335,
     TK_FLAG_INIT = 336,
     TK_FLAG_LOAD = 337,
     TK_FLAG_MAIN = 338,
     TK_FLAG_ANON = 339,
     TK_FLAG_METHOD = 340,
     TK_FLAG_OUTER = 341,
     TK_FLAG_VTABLE = 342,
     TK_FLAG_LEX = 343,
     TK_FLAG_MULTI = 344,
     TK_FLAG_POSTCOMP = 345,
     TK_FLAG_IMMEDIATE = 346,
     TK_FLAG_LEXID = 347,
     TK_INSTANCEOF = 348,
     TK_FLAG_UNIQUE_REG = 349,
     TK_FLAG_NAMED = 350,
     TK_FLAG_SLURPY = 351,
     TK_FLAG_FLAT = 352,
     TK_FLAG_OPTIONAL = 353,
     TK_FLAG_OPT_FLAG = 354,
     TK_FLAG_INVOCANT = 355,
     TK_MACRO = 356,
     TK_ENDM = 357,
     TK_MACRO_LOCAL = 358,
     TK_MACRO_LABEL = 359,
     TK_MACRO_CONST = 360,
     TK_MACRO_LABEL_ID = 361,
     TK_MACRO_LOCAL_ID = 362,
     TK_MACRO_IDENT = 363,
     TK_MACRO_ARG_IDENT = 364,
     TK_MACRO_ARG_OTHER = 365,
     TK_MACRO_CONST_VAL = 366
   };
#endif
/* Tokens.  */
#define TK_NL 258
#define TK_HLL 259
#define TK_HLL_MAP 260
#define TK_LOADLIB 261
#define TK_SUB 262
#define TK_END 263
#define TK_PARAM 264
#define TK_LEX 265
#define TK_LINE 266
#define TK_FILE 267
#define TK_LOCAL 268
#define TK_NAMESPACE 269
#define TK_INVOCANT 270
#define TK_METH_CALL 271
#define TK_GLOBALCONST 272
#define TK_CONST 273
#define TK_RETURN 274
#define TK_YIELD 275
#define TK_SET_YIELD 276
#define TK_SET_RETURN 277
#define TK_BEGIN_YIELD 278
#define TK_END_YIELD 279
#define TK_BEGIN_RETURN 280
#define TK_END_RETURN 281
#define TK_BEGIN_CALL 282
#define TK_END_CALL 283
#define TK_GET_RESULTS 284
#define TK_CALL 285
#define TK_SET_ARG 286
#define TK_GET_RESULT 287
#define TK_NCI_CALL 288
#define TK_TAILCALL 289
#define TK_LABEL 290
#define TK_IDENT 291
#define TK_INT 292
#define TK_NUM 293
#define TK_PMC 294
#define TK_STRING 295
#define TK_IF 296
#define TK_UNLESS 297
#define TK_NULL 298
#define TK_GOTO 299
#define TK_STRINGC 300
#define TK_INTC 301
#define TK_NUMC 302
#define TK_PREG 303
#define TK_NREG 304
#define TK_SREG 305
#define TK_IREG 306
#define TK_ARROW 307
#define TK_NE 308
#define TK_EQ 309
#define TK_LT 310
#define TK_LE 311
#define TK_GT 312
#define TK_GE 313
#define TK_USHIFT 314
#define TK_RSHIFT 315
#define TK_LSHIFT 316
#define TK_FDIV 317
#define TK_OR 318
#define TK_AND 319
#define TK_XOR 320
#define TK_CONC 321
#define TK_ASSIGN_USHIFT 322
#define TK_ASSIGN_RSHIFT 323
#define TK_ASSIGN_LSHIFT 324
#define TK_ASSIGN_INC 325
#define TK_ASSIGN_DEC 326
#define TK_ASSIGN_MUL 327
#define TK_ASSIGN_MOD 328
#define TK_ASSIGN_POW 329
#define TK_ASSIGN_DIV 330
#define TK_ASSIGN_BOR 331
#define TK_ASSIGN_BAND 332
#define TK_ASSIGN_FDIV 333
#define TK_ASSIGN_BNOT 334
#define TK_ASSIGN_CONC 335
#define TK_FLAG_INIT 336
#define TK_FLAG_LOAD 337
#define TK_FLAG_MAIN 338
#define TK_FLAG_ANON 339
#define TK_FLAG_METHOD 340
#define TK_FLAG_OUTER 341
#define TK_FLAG_VTABLE 342
#define TK_FLAG_LEX 343
#define TK_FLAG_MULTI 344
#define TK_FLAG_POSTCOMP 345
#define TK_FLAG_IMMEDIATE 346
#define TK_FLAG_LEXID 347
#define TK_INSTANCEOF 348
#define TK_FLAG_UNIQUE_REG 349
#define TK_FLAG_NAMED 350
#define TK_FLAG_SLURPY 351
#define TK_FLAG_FLAT 352
#define TK_FLAG_OPTIONAL 353
#define TK_FLAG_OPT_FLAG 354
#define TK_FLAG_INVOCANT 355
#define TK_MACRO 356
#define TK_ENDM 357
#define TK_MACRO_LOCAL 358
#define TK_MACRO_LABEL 359
#define TK_MACRO_CONST 360
#define TK_MACRO_LABEL_ID 361
#define TK_MACRO_LOCAL_ID 362
#define TK_MACRO_IDENT 363
#define TK_MACRO_ARG_IDENT 364
#define TK_MACRO_ARG_OTHER 365
#define TK_MACRO_CONST_VAL 366




/* Copy the first part of user declarations.  */
#line 1 "pir.y"


/*
 * $Id$
 * Copyright (C) 2007-2008, The Perl Foundation.
 */

/*

=head1 NAME

pir.y - Bison specification for the PIR assembly language parser.

=head1 DESCRIPTION

This file implements the parser for the PIR assembly language. During the
parsing phase, data structures are created that represent the input. These
data structures are defined in C<pircompunit.h>.

The parser implements strength reduction and constant folding. Strength
reduction refers to the selection of instructions that have the same
effect as the instruction written by the PIR programmer, but are more
efficient. For instance:

 add $P0, $P0, $P1

can be reduced to:

 add $P0, $P1

as C<$P0> was an IN/OUT operand.

Constant folding refers to the compile-time evaluation of expressions,
if possible. For instance:

 add $I0, 10, 20

can be written as:

 set $I0, 30

as we can evaluate this result during compile time. Likewise, conditional
branch instructions may become unconditional branch instructions (if the
condition evaluates to I<true> during compile time) or it may become a C<noop>
(no op) instruction (if the condition evaluates to I<false> during compile time).

=cut

TODO:
1. test the parser.
2. generate PBC, using Parrot_PackFile (and related) data structures.
3. handle branch/invoke instructions to calculate offsets etc.
4. handle freezing of PMC constants (representing subs)

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "parrot/oplib/ops.h"
#include "pircompiler.h"
#include "pircompunit.h"
#include "pirsymbol.h"
#include "piryy.h"
#include "pirmacro.h"

/* #defines to prevent declarations of malloc() and free() in pirparser.h */
#define YYMALLOC
#define YYFREE
#include "pirparser.h"

/* #define to prevent declaration of yypirlex() in pirlexer.h */
#define YY_DECL
#include "pirlexer.h"

int yypirlex(YYSTYPE *yylval, yyscan_t yyscanner);

#ifdef _WIN32
/* prevent warnings about unreachable code. */
#  pragma warning (disable:4702)
/* prevent warnings about possible loss of data. */
#  pragma warning (disable:4244)
/* prevent warnings about uninitialized yylval object. */
#  pragma warning (disable:4701)

#else


#endif

void expand_macro(yyscan_t yyscanner, macro_def * const macro, macro_param * args);

/* Enumeration of mathematical operator types; these are used to index the opnames array. */
typedef enum pir_math_operators {
    OP_ADD = 0, /* make sure counting starts at 0 */
    OP_INC,     /* special case for OP_ADD; must be 1 position after OP_ADD */
    OP_SUB,
    OP_DEC,     /* special case for OP_DEC; must be 1 position after OP_SUB */
    OP_DIV,
    OP_MUL,
    OP_MOD,
    OP_BOR,
    OP_BAND,
    OP_BXOR,
    OP_POW,
    OP_CONCAT,
    OP_LSR,
    OP_SHR,
    OP_SHL,
    OP_OR,
    OP_AND,
    OP_FDIV,
    OP_XOR,
    OP_ISEQ,
    OP_ISLE,
    OP_ISLT,
    OP_ISGE,
    OP_ISGT,
    OP_ISNE

} pir_math_operator;

/* relational operator types */
typedef enum pir_rel_operators {
    OP_NE = OP_ISNE + 1,   /* continue after OP_ISNE in pir_math_operator. */
    OP_EQ,
    OP_GT,
    OP_LT,
    OP_GE,
    OP_LE

} pir_rel_operator;

/* names of the binary operators */
static char const * const opnames[] = {
    "add",
    "inc", /* use this when "add"ing 1 */
    "sub",
    "dec", /* use this when "sub"ing 1 */
    "div",
    "mul",
    "mod",
    "bor",
    "band",
    "bxor",
    "pow",
    "concat",
    "lsr",
    "shr",
    "shl",
    "or",
    "and",
    "fdiv",
    "xor",
    "iseq",
    "isle",
    "islt",
    "isge",
    "isgt",
    "isne",
    /* note that from here on it's rel. ops; see pir_rel_operator enumeration */
    "ne",
    "eq",
    "gt", /* 1 position before "lt" */
    "lt",
    "ge", /* 1 position before "le" */
    "le"
};

/* prototypes for constant folding and compile-time evaluation functions */
static constant *fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b);
static constant *fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b);
static constant *fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b);
static constant *fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b);
static constant *fold_s_s(yyscan_t yyscanner, char const *a, pir_math_operator op, char const *b);

static int evaluate_i_i(int a, pir_rel_operator op, int b);
static int evaluate_n_n(double a, pir_rel_operator op, double b);
static int evaluate_i_n(int a, pir_rel_operator op, double b);
static int evaluate_n_i(double a, pir_rel_operator op, int b);
static int evaluate_s_s(char const * const a, pir_rel_operator op, char const * const b);

static int evaluate_s(char * const s);
static int evaluate_c(lexer_state * const lexer, constant * const c);

static char *concat_strings(lexer_state * const lexer, char const * a, char const * b);

static void create_if_instr(yyscan_t yyscanner, lexer_state * const lexer, int invert,
                            int hasnull, char const * const name, char const * const label);

static void do_strength_reduction(yyscan_t yyscanner);
static int check_value(constant * const c, int val);

static void check_first_arg_direction(yyscan_t yyscanner, char const * const opname);

static int check_op_args_for_symbols(yyscan_t yyscanner);
static int get_opinfo(yyscan_t yyscanner);

/* names of the Parrot types */
static char const * const pir_type_names[] = { "int", "num", "string", "pmc" };


/* enable debugging of generated parser */
#define YYDEBUG         1

/* enable slightly more helpful error messages */
#define YYERROR_VERBOSE 1

#ifndef YYENABLE_NLS
#  define YYENABLE_NLS 0
#endif

#ifndef YYLTYPE_IS_TRIVIAL
#  define YYLTYPE_IS_TRIVIAL 0
#endif


/* the parser aborts if there are more than 10 errors */
#define MAX_NUM_ERRORS          10

#define COMPUTE_DURING_RUNTIME  -1

#define DONT_INVERT_OPNAME      0

#define NEED_INVERT_OPNAME      1



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 233 "pir.y"
{
    double              dval;
    int                 ival;
    char   const       *sval;
    struct constant    *cval;
    struct instruction *instr;
    struct expression  *expr;
    struct target      *targ;
    struct argument    *argm;
    struct invocation  *invo;
    struct key         *key;
    struct symbol      *symb;
    struct macro_def   *mval;
    struct macro_param *pval;
}
/* Line 187 of yacc.c.  */
#line 571 "pirparser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 584 "pirparser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   905

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  375
/* YYNRULES -- Number of states.  */
#define YYNSTATES  584

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   367

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   121,     2,     2,     2,   126,   128,     2,
     112,   113,   125,   123,   114,   120,   119,   124,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   118,
       2,   115,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   116,     2,   117,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   127,     2,   122,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   129
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    12,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    40,    48,
      51,    52,    54,    56,    60,    62,    63,    65,    67,    70,
      73,    75,    77,    80,    84,    87,    90,    93,    96,   101,
     106,   107,   109,   111,   115,   117,   124,   126,   129,   131,
     133,   134,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   160,   163,   166,   169,   171,   173,   175,   177,
     178,   181,   186,   189,   190,   193,   195,   197,   199,   204,
     206,   207,   210,   213,   215,   217,   219,   221,   223,   225,
     227,   229,   231,   233,   235,   237,   239,   241,   243,   245,
     249,   250,   254,   255,   257,   259,   263,   265,   267,   269,
     272,   275,   279,   283,   286,   289,   291,   293,   295,   297,
     298,   300,   302,   306,   310,   312,   314,   316,   318,   320,
     322,   325,   329,   331,   335,   342,   347,   354,   357,   361,
     365,   369,   373,   377,   382,   387,   392,   396,   400,   404,
     408,   412,   416,   420,   425,   431,   436,   441,   445,   449,
     453,   457,   461,   465,   469,   473,   476,   482,   488,   494,
     500,   506,   512,   518,   524,   530,   535,   541,   546,   551,
     556,   561,   566,   571,   576,   581,   586,   591,   596,   601,
     606,   610,   614,   618,   622,   626,   630,   634,   638,   642,
     644,   646,   648,   650,   654,   659,   661,   665,   668,   670,
     671,   673,   679,   681,   683,   685,   694,   695,   697,   699,
     702,   706,   710,   713,   719,   720,   723,   724,   726,   728,
     731,   735,   737,   740,   744,   748,   750,   752,   754,   759,
     762,   764,   766,   768,   770,   772,   774,   776,   778,   782,
     783,   785,   787,   791,   794,   795,   798,   800,   802,   804,
     807,   809,   811,   813,   815,   817,   821,   825,   829,   833,
     834,   836,   838,   842,   844,   846,   850,   853,   855,   861,
     867,   868,   870,   872,   875,   879,   880,   882,   884,   887,
     891,   892,   895,   897,   900,   901,   903,   907,   910,   912,
     914,   917,   920,   925,   930,   935,   940,   942,   944,   946,
     948,   950,   952,   954,   956,   958,   960,   962,   964,   966,
     968,   970,   972,   974,   976,   978,   980,   982,   984,   986,
     988,   990,   992,   994,   996,   998,  1000,  1002,  1004,  1006,
    1008,  1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,  1026,
    1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     131,     0,    -1,   132,   133,   132,    -1,    -1,     3,    -1,
     134,    -1,   133,     3,   134,    -1,   156,    -1,   262,    -1,
     152,    -1,   150,    -1,   151,    -1,   148,    -1,   149,    -1,
     135,    -1,   136,    -1,   137,    -1,   105,    36,   111,    -1,
     138,   112,   139,   113,     3,   142,   102,    -1,   101,   272,
      -1,    -1,   140,    -1,   141,    -1,   140,   114,   141,    -1,
     272,    -1,    -1,   143,    -1,   144,    -1,   143,   144,    -1,
     145,     3,    -1,   146,    -1,   147,    -1,   104,   106,    -1,
     103,   268,   107,    -1,     6,    45,    -1,    11,    46,    -1,
      12,    45,    -1,     4,    45,    -1,     5,    45,   115,    45,
      -1,    14,   116,   153,   117,    -1,    -1,   154,    -1,   155,
      -1,   154,   118,   155,    -1,    45,    -1,   158,   160,     3,
     163,   171,   157,    -1,     8,    -1,     7,   159,    -1,   272,
      -1,    45,    -1,    -1,   160,   161,    -1,    84,    -1,    81,
      -1,    82,    -1,    83,    -1,    85,    -1,    88,    -1,    90,
      -1,    91,    -1,    89,    -1,    86,   112,   159,   113,    -1,
      87,   258,    -1,    92,   259,    -1,    93,   259,    -1,   272,
      -1,    45,    -1,   194,    -1,   164,    -1,    -1,   164,   165,
      -1,     9,   166,   167,     3,    -1,   268,   272,    -1,    -1,
     167,   168,    -1,   236,    -1,   169,    -1,   170,    -1,   100,
     112,   162,   113,    -1,    94,    -1,    -1,   171,   172,    -1,
      35,   173,    -1,   173,    -1,   184,    -1,   200,    -1,   205,
      -1,   206,    -1,   211,    -1,   260,    -1,   237,    -1,   212,
      -1,   197,    -1,   183,    -1,   182,    -1,   179,    -1,   180,
      -1,   174,    -1,   181,    -1,   108,   175,     3,    -1,    -1,
     112,   176,   113,    -1,    -1,   177,    -1,   178,    -1,   177,
     114,   178,    -1,   109,    -1,   110,    -1,     3,    -1,   149,
       3,    -1,     1,     3,    -1,    43,   269,     3,    -1,    29,
     231,     3,    -1,   185,     3,    -1,   186,   187,    -1,   196,
      -1,    36,    -1,   188,    -1,   190,    -1,    -1,   189,    -1,
     191,    -1,   189,   114,   191,    -1,   194,   115,   265,    -1,
     192,    -1,   194,    -1,   266,    -1,   272,    -1,   271,    -1,
     193,    -1,   230,   194,    -1,   116,   195,   117,    -1,   265,
      -1,   195,   118,   265,    -1,   269,   115,   186,   192,   114,
     189,    -1,   269,   115,   186,   192,    -1,   269,   115,   186,
     194,   114,   189,    -1,   198,     3,    -1,   269,   115,    46,
      -1,   269,   115,    47,    -1,   269,   115,    45,    -1,   269,
     115,   199,    -1,   269,   115,   186,    -1,   269,   115,   186,
     194,    -1,   269,   115,   273,   194,    -1,   269,   115,    48,
     194,    -1,   269,   276,   265,    -1,   269,    70,    46,    -1,
     269,    70,    47,    -1,   269,    71,    46,    -1,   269,    71,
      47,    -1,   269,    70,   269,    -1,   269,    71,   269,    -1,
     269,   115,   274,   265,    -1,   269,   115,   269,   275,   269,
      -1,   273,   194,   115,   265,    -1,    48,   194,   115,   265,
      -1,    46,   275,   269,    -1,    47,   275,   269,    -1,    45,
     275,   269,    -1,    45,   275,    45,    -1,    46,   275,    46,
      -1,    47,   275,    47,    -1,    46,   275,    47,    -1,    47,
     275,    46,    -1,   201,     3,    -1,   203,    43,    36,    44,
     272,    -1,   203,    43,    37,    44,   272,    -1,   203,    43,
      38,    44,   272,    -1,   203,    43,    39,    44,   272,    -1,
     203,    43,    40,    44,   272,    -1,   203,    43,    41,    44,
     272,    -1,   203,    43,    42,    44,   272,    -1,   203,    43,
      44,    44,   272,    -1,   203,    43,    43,    44,   272,    -1,
     203,   266,   204,   272,    -1,   203,    43,    48,   204,   272,
      -1,   203,    36,   204,   272,    -1,   203,   271,   204,   272,
      -1,   203,    37,   204,   272,    -1,   203,    38,   204,   272,
      -1,   203,    39,   204,   272,    -1,   203,    40,   204,   272,
      -1,   203,    41,   204,   272,    -1,   203,    42,   204,   272,
      -1,   203,    44,    44,   272,    -1,   203,    44,   114,   272,
      -1,   203,    43,    44,   272,    -1,   203,    43,   114,   272,
      -1,   203,   202,    44,   272,    -1,   269,   267,   265,    -1,
      46,   267,   269,    -1,    47,   267,   269,    -1,    45,   267,
     269,    -1,    46,   267,    46,    -1,    46,   267,    47,    -1,
      47,   267,    46,    -1,    47,   267,    47,    -1,    45,   267,
      45,    -1,    41,    -1,    42,    -1,    44,    -1,   114,    -1,
      44,   272,     3,    -1,    13,   268,   207,     3,    -1,   208,
      -1,   207,   114,   208,    -1,   209,   210,    -1,   272,    -1,
      -1,    94,    -1,    10,    45,   114,   230,     3,    -1,   213,
      -1,   214,    -1,   223,    -1,    27,     3,   215,   218,     3,
     220,    28,     3,    -1,    -1,   216,    -1,   217,    -1,   216,
     217,    -1,    31,   246,     3,    -1,    30,   230,   219,    -1,
      33,   230,    -1,    15,   230,     3,    16,   229,    -1,    -1,
     114,   230,    -1,    -1,   221,    -1,   222,    -1,   221,   222,
      -1,    32,   234,     3,    -1,   206,    -1,   224,     3,    -1,
     231,   115,   225,    -1,   269,   115,   225,    -1,   225,    -1,
     227,    -1,   226,    -1,   230,   119,   229,   241,    -1,   228,
     241,    -1,   230,    -1,    45,    -1,   272,    -1,    48,    -1,
      50,    -1,    45,    -1,   272,    -1,    48,    -1,   112,   232,
     113,    -1,    -1,   233,    -1,   234,    -1,   233,   114,   234,
      -1,   269,   235,    -1,    -1,   235,   236,    -1,    98,    -1,
      99,    -1,    96,    -1,    95,   258,    -1,   238,    -1,   239,
      -1,   248,    -1,   240,    -1,   249,    -1,    19,   241,     3,
      -1,    19,   225,     3,    -1,    20,   241,     3,    -1,   112,
     242,   113,    -1,    -1,   243,    -1,   244,    -1,   243,   114,
     244,    -1,   246,    -1,   245,    -1,    45,    52,   247,    -1,
     247,   256,    -1,   265,    -1,    25,     3,   253,    26,     3,
      -1,    23,     3,   250,    24,     3,    -1,    -1,   251,    -1,
     252,    -1,   251,   252,    -1,    21,   246,     3,    -1,    -1,
     254,    -1,   255,    -1,   254,   255,    -1,    22,   246,     3,
      -1,    -1,   256,   257,    -1,    97,    -1,    95,   258,    -1,
      -1,   259,    -1,   112,    45,   113,    -1,   261,     3,    -1,
     262,    -1,   263,    -1,    18,   264,    -1,    17,   264,    -1,
      37,   272,   115,    46,    -1,    38,   272,   115,    47,    -1,
      40,   272,   115,    45,    -1,    39,   272,   115,    45,    -1,
     269,    -1,   266,    -1,    45,    -1,    46,    -1,    47,    -1,
      53,    -1,    54,    -1,    55,    -1,    56,    -1,    58,    -1,
      57,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
     270,    -1,   271,    -1,   272,    -1,    48,    -1,    49,    -1,
      51,    -1,    50,    -1,    36,    -1,   273,    -1,    41,    -1,
      42,    -1,    44,    -1,    37,    -1,    38,    -1,    40,    -1,
      39,    -1,    43,    -1,   120,    -1,   121,    -1,   122,    -1,
     123,    -1,   120,    -1,   124,    -1,   125,    -1,   126,    -1,
     127,    -1,   128,    -1,   122,    -1,   129,    -1,    66,    -1,
      59,    -1,    60,    -1,    61,    -1,    63,    -1,    64,    -1,
      62,    -1,    65,    -1,    54,    -1,    56,    -1,    55,    -1,
      58,    -1,    57,    -1,    53,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    78,    -1,    76,    -1,    77,    -1,
      79,    -1,    80,    -1,    68,    -1,    69,    -1,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   516,   516,   522,   523,   526,   527,   530,   531,   532,
     533,   534,   535,   536,   537,   544,   545,   548,   552,   558,
     562,   563,   566,   567,   570,   574,   575,   578,   579,   582,
     585,   586,   589,   593,   604,   608,   610,   616,   620,   624,
     629,   630,   634,   636,   640,   644,   650,   654,   658,   659,
     662,   663,   666,   668,   670,   672,   674,   676,   678,   680,
     682,   684,   686,   688,   690,   694,   695,   696,   699,   707,
     708,   711,   715,   720,   721,   725,   726,   727,   730,   737,
     743,   744,   747,   749,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   772,
     777,   778,   783,   784,   787,   789,   797,   805,   812,   816,
     820,   829,   836,   843,   846,   847,   850,   859,   866,   869,
     870,   873,   874,   877,   912,   914,   921,   923,   928,   930,
     934,   964,   968,   970,   979,   990,  1002,  1011,  1015,  1022,
    1029,  1031,  1033,  1052,  1089,  1106,  1112,  1114,  1123,  1132,
    1141,  1150,  1152,  1154,  1156,  1163,  1181,  1214,  1216,  1218,
    1220,  1222,  1224,  1226,  1228,  1233,  1242,  1244,  1246,  1248,
    1250,  1252,  1254,  1256,  1258,  1260,  1272,  1277,  1279,  1281,
    1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,  1299,  1301,
    1332,  1346,  1354,  1363,  1372,  1374,  1376,  1378,  1380,  1384,
    1385,  1388,  1389,  1392,  1400,  1404,  1406,  1410,  1414,  1423,
    1424,  1427,  1446,  1450,  1451,  1454,  1467,  1468,  1472,  1474,
    1478,  1482,  1484,  1486,  1492,  1493,  1498,  1499,  1503,  1505,
    1509,  1511,  1515,  1519,  1523,  1527,  1533,  1534,  1537,  1565,
    1572,  1574,  1578,  1594,  1596,  1598,  1602,  1604,  1609,  1614,
    1615,  1619,  1621,  1625,  1630,  1631,  1635,  1637,  1639,  1641,
    1651,  1655,  1656,  1657,  1658,  1661,  1667,  1678,  1685,  1690,
    1691,  1695,  1697,  1701,  1702,  1705,  1709,  1713,  1717,  1726,
    1736,  1737,  1742,  1744,  1749,  1754,  1755,  1759,  1761,  1765,
    1771,  1772,  1776,  1778,  1786,  1787,  1791,  1795,  1798,  1799,
    1802,  1806,  1810,  1812,  1814,  1816,  1838,  1839,  1843,  1844,
    1845,  1848,  1849,  1850,  1851,  1852,  1853,  1856,  1857,  1858,
    1859,  1867,  1870,  1871,  1884,  1885,  1886,  1887,  1891,  1892,
    1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1905,  1906,
    1907,  1910,  1911,  1912,  1913,  1914,  1915,  1916,  1917,  1918,
    1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,  1927,  1928,
    1929,  1930,  1931,  1932,  1938,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,  1946,  1947,  1948,  1949
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"\\n\"", "\".HLL\"", "\".HLL_map\"",
  "\".loadlib\"", "\".sub\"", "\".end\"", "\".param\"", "\".lex\"",
  "\".line\"", "\".file\"", "\".local\"", "\".namespace\"",
  "\".invocant\"", "\".meth_call\"", "\".globalconst\"", "\".const\"",
  "\".return\"", "\".yield\"", "\".set_yield\"", "\".set_return\"",
  "\".begin_yield\"", "\".end_yield\"", "\".begin_return\"",
  "\".end_return\"", "\".begin_call\"", "\".end_call\"",
  "\".get_results\"", "\".call\"", "\".set_arg\"", "\".get_result\"",
  "\".nci_call\"", "\".tailcall\"", "\"label\"", "\"identifier\"",
  "\"int\"", "\"num\"", "\"pmc\"", "\"string\"", "\"if\"", "\"unless\"",
  "\"null\"", "\"goto\"", "\"string constant\"", "\"integer constant\"",
  "\"number constant\"", "\"PMC register\"", "\"number register\"",
  "\"string register\"", "\"integer register\"", "\"=>\"", "\"!=\"",
  "\"==\"", "\"<\"", "\"<=\"", "\">\"", "\">=\"", "\">>>\"", "\">>\"",
  "\"<<\"", "\"//\"", "\"||\"", "\"&&\"", "\"~~\"", "\".\"", "\">>>=\"",
  "\">>=\"", "\"<<=\"", "\"+=\"", "\"-=\"", "\"*=\"", "\"%=\"", "\"**=\"",
  "\"/=\"", "\"|=\"", "\"&=\"", "\"//=\"", "\"~=\"", "\".=\"", "\":init\"",
  "\":load\"", "\":main\"", "\":anon\"", "\":method\"", "\":outer\"",
  "\":vtable\"", "\":lex\"", "\":multi\"", "\":postcomp\"",
  "\":immediate\"", "\":lexid\"", "\":instanceof\"", "\":unique_reg\"",
  "\":named\"", "\":slurpy\"", "\":flat\"", "\":optional\"",
  "\":opt_flag\"", "\":invocant\"", "\".macro\"", "\".endm\"",
  "\".macro_local\"", "\".macro_label\"", "\".macro_const\"",
  "\"macro-label\"", "\"macro-local\"", "\"macro-identifier\"",
  "\"macro-id-argument\"", "\"macro-argument\"", "\"macro-constant\"",
  "'('", "')'", "','", "'='", "'['", "']'", "';'", "'.'", "'-'", "'!'",
  "'~'", "'+'", "'/'", "'*'", "'%'", "'|'", "'&'", "\"**\"", "$accept",
  "TOP", "opt_nl", "pir_chunks", "pir_chunk", "macro_definition",
  "macro_const", "macro", "macro_header", "macro_parameters",
  "macro_params", "macro_param", "macro_body", "macro_statements",
  "macro_statement", "macro_instr", "macro_label_decl", "macro_local_decl",
  "loadlib", "location_directive", "hll_specifier", "hll_mapping",
  "namespace_decl", "opt_namespace", "namespace", "namespace_slice",
  "sub_def", "sub_end", "sub_head", "sub_id", "sub_flags", "sub_flag",
  "multi_type", "parameter_list", "parameters", "parameter", "param",
  "param_flags", "param_flag", "invocant_param", "unique_reg_flag",
  "instructions", "instruction", "statement", "macro_expansion",
  "opt_macro_args", "macro_args", "macro_arg_list", "macro_arg",
  "empty_stat", "location_stat", "error_stat", "null_stat",
  "getresults_stat", "parrot_stat", "parrot_instruction", "parrot_op",
  "opt_op_args", "op_args", "parrot_op_args", "keylist_assignment",
  "op_arg", "op_arg_expr", "keyaccess", "keylist", "keys",
  "parrot_op_assign", "assignment_stat", "assignment", "binary_expr",
  "conditional_stat", "conditional_instr", "condition", "if_unless",
  "then", "goto_stat", "local_decl", "local_id_list", "local_id",
  "local_var_name", "has_unique_reg", "lex_decl", "invocation_stat",
  "invocation", "long_invocation_stat", "opt_long_arguments",
  "long_arguments", "long_argument", "long_invocation", "opt_ret_cont",
  "opt_long_results", "long_results", "long_result",
  "short_invocation_stat", "short_invocation", "simple_invocation",
  "methodcall", "subcall", "sub", "method", "pmc_object",
  "opt_target_list", "opt_list", "target_list", "result_target",
  "target_flags", "target_flag", "return_stat", "return_instr",
  "short_return_stat", "short_yield_stat", "arguments",
  "opt_arguments_list", "arguments_list", "argument", "named_arg",
  "short_arg", "arg", "long_return_stat", "long_yield_stat",
  "opt_yield_expressions", "yield_expressions", "yield_expression",
  "opt_return_expressions", "return_expressions", "return_expression",
  "arg_flags", "arg_flag", "opt_paren_string", "paren_string",
  "const_decl_stat", "const_stat", "const_decl", "globalconst_decl",
  "const_tail", "expression", "constant", "rel_op", "type", "target",
  "symbol", "reg", "identifier", "keyword", "unop", "binop",
  "augmented_op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,    40,    41,    44,    61,    91,    93,    59,    46,
      45,    33,   126,    43,    47,    42,    37,   124,    38,   367
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   130,   131,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   137,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     145,   145,   146,   147,   148,   149,   149,   150,   151,   152,
     153,   153,   154,   154,   155,   156,   157,   158,   159,   159,
     160,   160,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   162,   163,   164,
     164,   165,   166,   167,   167,   168,   168,   168,   169,   170,
     171,   171,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   180,
     181,   182,   183,   184,   185,   185,   186,   187,   187,   188,
     188,   189,   189,   190,   191,   191,   192,   192,   192,   192,
     193,   194,   195,   195,   196,   196,   196,   197,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   200,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   203,
     203,   204,   204,   205,   206,   207,   207,   208,   209,   210,
     210,   211,   212,   213,   213,   214,   215,   215,   216,   216,
     217,   218,   218,   218,   219,   219,   220,   220,   221,   221,
     222,   222,   223,   224,   224,   224,   225,   225,   226,   227,
     228,   228,   229,   229,   229,   229,   230,   230,   231,   232,
     232,   233,   233,   234,   235,   235,   236,   236,   236,   236,
     237,   238,   238,   238,   238,   239,   239,   240,   241,   242,
     242,   243,   243,   244,   244,   245,   246,   247,   248,   249,
     250,   250,   251,   251,   252,   253,   253,   254,   254,   255,
     256,   256,   257,   257,   258,   258,   259,   260,   261,   261,
     262,   263,   264,   264,   264,   264,   265,   265,   266,   266,
     266,   267,   267,   267,   267,   267,   267,   268,   268,   268,
     268,   269,   270,   270,   271,   271,   271,   271,   272,   272,
     273,   273,   273,   273,   273,   273,   273,   273,   274,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     7,     2,
       0,     1,     1,     3,     1,     0,     1,     1,     2,     2,
       1,     1,     2,     3,     2,     2,     2,     2,     4,     4,
       0,     1,     1,     3,     1,     6,     1,     2,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     2,     2,     1,     1,     1,     1,     0,
       2,     4,     2,     0,     2,     1,     1,     1,     4,     1,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     3,     0,     1,     1,     3,     1,     1,     1,     2,
       2,     3,     3,     2,     2,     1,     1,     1,     1,     0,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     6,     4,     6,     2,     3,     3,
       3,     3,     3,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     4,     5,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     4,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     4,     1,     3,     2,     1,     0,
       1,     5,     1,     1,     1,     8,     0,     1,     1,     2,
       3,     3,     2,     5,     0,     2,     0,     1,     1,     2,
       3,     1,     2,     3,     3,     1,     1,     1,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       1,     1,     3,     2,     0,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     0,
       1,     1,     3,     1,     1,     3,     2,     1,     5,     5,
       0,     1,     1,     2,     3,     0,     1,     1,     2,     3,
       0,     2,     1,     2,     0,     1,     3,     2,     1,     1,
       2,     2,     4,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     4,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     5,    14,    15,    16,
       0,    12,    13,    10,    11,     9,     7,    50,     8,    37,
       0,    34,   328,   333,   334,   336,   335,   330,   331,   337,
     332,    49,    47,    48,   329,    35,    36,    40,     0,     0,
       0,     0,   300,    19,     0,     4,     2,    20,     0,     0,
      44,     0,    41,    42,     0,     0,     0,     0,    17,     6,
       0,    21,    22,    24,    69,    53,    54,    55,    52,    56,
       0,   294,    57,    60,    58,    59,     0,     0,    51,    38,
      39,     0,     0,     0,     0,     0,     0,     0,    80,    68,
       0,     0,    62,   295,    63,    64,    43,   302,   303,   305,
     304,    25,    23,     0,     0,    70,     0,     0,     0,     0,
       0,    26,    27,     0,    30,    31,     0,   108,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   328,
     330,   331,   337,   332,   241,   324,   325,   327,   326,   100,
     249,     0,    45,    81,    83,    97,    95,    96,    98,    94,
      93,    84,     0,   119,   115,    92,     0,    85,     0,     0,
      86,    87,    88,    91,   212,   213,   214,     0,   235,   237,
     236,     0,   240,     0,    90,   260,   261,   263,   262,   264,
      89,     0,   298,   299,     0,   321,   322,   323,   329,   317,
     318,   319,   320,    73,     0,    61,   296,     0,    32,    18,
      28,    29,   110,     0,     0,   301,   247,   269,     0,     0,
     246,     0,   280,   285,   216,     0,    82,   324,     0,   323,
       0,     0,     0,   102,     0,     0,   250,   251,   254,   109,
     113,   308,   309,   310,   324,   114,   117,   120,   118,   121,
     124,   129,   125,     0,   126,   128,   127,   137,   165,   328,
     333,   334,   336,   335,   330,   331,   337,   332,   308,   309,
     310,     0,     0,     0,   322,   232,   239,     0,     0,   297,
     375,   373,   374,     0,     0,   364,   365,   366,   367,   369,
     370,   368,   371,   372,     0,     0,     0,     0,    72,    33,
       0,     0,   205,   209,   208,   308,     0,   270,   271,   274,
     273,   290,   277,   307,   306,   266,   265,   267,     0,     0,
     281,   282,     0,     0,   286,   287,     0,     0,   217,   218,
     112,   111,   203,     0,   132,     0,   106,   107,     0,   103,
     104,    99,   248,     0,   253,     0,     0,   130,   201,   202,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     311,   312,   313,   314,   316,   315,     0,     0,     0,     0,
       0,     0,     0,   245,   243,   244,     0,   242,   233,   147,
     148,   151,   149,   150,   152,   140,   138,   139,   324,   338,
     339,   340,   142,   141,   234,     0,   329,     0,   146,     0,
      71,    79,   294,   258,   256,   257,     0,    74,    76,    77,
      75,     0,   204,     0,   210,   207,     0,   268,     0,   276,
       0,     0,   283,     0,     0,   288,     0,     0,     0,     0,
       0,   219,   131,     0,   156,   101,     0,   252,   255,   122,
     125,   123,   177,   179,   180,   181,   182,   183,   184,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   187,     0,
     188,   185,   186,   198,   193,   194,   195,   191,   196,   197,
     192,   189,   175,   190,   178,   238,   363,   358,   360,   359,
     362,   361,   351,   352,   353,   356,   354,   355,   357,   350,
     342,   348,   341,   343,   344,   345,   346,   347,   349,     0,
       0,     0,   145,   135,   143,     0,   144,   153,   155,   259,
       0,   211,   206,   275,   272,   294,   292,   291,   284,   279,
     289,   278,   220,     0,   224,   222,   226,   133,   105,   166,
     167,   168,   169,   170,   171,   172,   174,   173,   176,   160,
     159,   161,   163,   157,   164,   162,   158,     0,     0,   154,
      66,     0,    67,    65,   293,     0,     0,   221,     0,   231,
       0,   227,   228,   134,   136,    78,     0,   225,     0,     0,
     229,   223,   230,   215
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    15,    16,    17,    18,    19,    20,    70,
      71,    72,   120,   121,   122,   123,   124,   125,    21,    22,
      23,    24,    25,    61,    62,    63,    26,   152,    27,    42,
      58,    88,   561,    98,    99,   115,   203,   297,   417,   418,
     419,   113,   153,   154,   155,   234,   338,   339,   340,   156,
     157,   158,   159,   160,   161,   162,   163,   245,   246,   247,
     248,   249,   250,   251,   450,   333,   164,   165,   166,   403,
     167,   168,   271,   169,   350,   170,   171,   301,   302,   303,
     425,   172,   173,   174,   175,   327,   328,   329,   440,   567,
     570,   571,   572,   176,   177,   178,   179,   180,   181,   386,
     182,   183,   235,   236,   237,   344,   420,   184,   185,   186,
     187,   219,   306,   307,   308,   309,   310,   311,   188,   189,
     319,   320,   321,   323,   324,   325,   429,   527,   102,   103,
     190,   191,    28,   193,    52,   312,   313,   376,   204,   314,
     195,   196,   229,    44,   407,   509,   295
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -522
static const yytype_int16 yypact[] =
{
      14,  -522,    46,    55,  -522,     7,    20,    26,   860,    29,
      45,   -58,    94,   161,    57,   108,  -522,  -522,  -522,  -522,
       3,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
      10,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,   100,   161,   161,
     161,   161,  -522,  -522,    52,    55,  -522,   161,   220,   126,
    -522,    60,    62,  -522,    66,    67,    69,    70,  -522,  -522,
      74,    79,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
      82,    83,  -522,  -522,  -522,  -522,    83,    83,  -522,  -522,
    -522,   100,   178,   184,   180,   187,   230,   161,  -522,   226,
     860,   191,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,   -72,  -522,   459,   190,  -522,   124,   128,   190,   133,
     140,   -72,  -522,   241,  -522,  -522,   254,  -522,  -522,   213,
     190,    94,   380,   148,   258,   259,   261,   153,   562,   171,
     483,   606,   829,   161,  -522,   -42,  -522,  -522,  -522,   154,
     829,   264,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,   265,   281,  -522,  -522,   271,  -522,   272,   669,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,   273,  -522,  -522,
    -522,   148,   158,   166,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,   279,  -522,  -522,   311,  -522,  -522,   -56,   167,  -522,
    -522,  -522,  -522,  -522,   161,  -522,  -522,   177,  -522,  -522,
    -522,  -522,  -522,   174,   161,  -522,  -522,   685,   282,   286,
    -522,   287,   270,   274,   262,   291,  -522,  -522,   292,  -522,
     294,   701,   183,    27,   296,   201,   186,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,   199,  -522,  -522,   202,  -522,  -522,
    -522,  -522,   218,   167,  -522,  -522,   219,  -522,  -522,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,    58,    -6,   112,   112,
     112,   290,   -23,   112,   -23,  -522,  -522,   845,   623,  -522,
    -522,  -522,  -522,   717,   733,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,   396,   701,   221,    44,  -522,  -522,
     110,    13,  -522,   244,  -522,   288,   228,   225,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,   701,   325,
     270,  -522,   701,   324,   274,  -522,   701,    24,   262,  -522,
    -522,  -522,  -522,     4,  -522,   701,  -522,  -522,   238,   239,
    -522,  -522,  -522,   829,    18,   281,   701,  -522,  -522,  -522,
     161,   161,   161,   161,   161,   161,   161,   308,   310,   312,
     314,   318,   319,   320,   321,   210,   -23,   161,   161,   161,
    -522,  -522,  -522,  -522,  -522,  -522,   503,   749,   765,   161,
     161,   701,   161,  -522,  -522,  -522,   148,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,   561,   575,   575,   -42,  -522,
    -522,  -522,   281,  -522,  -522,   575,   167,   701,  -522,   701,
    -522,  -522,    83,  -522,  -522,  -522,   243,  -522,  -522,  -522,
    -522,   363,  -522,   161,  -522,  -522,   701,  -522,   685,    12,
     364,   365,  -522,   366,   367,  -522,   370,   110,   110,   110,
     372,  -522,  -522,   701,  -522,  -522,    27,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,   161,
     161,   161,   161,   161,   161,   161,   161,   161,  -522,   161,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,   813,
     781,   797,  -522,   278,   289,   829,  -522,  -522,  -522,  -522,
      43,  -522,  -522,  -522,  -522,    83,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,   373,   295,  -522,    16,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,   281,   281,  -522,
    -522,   280,  -522,  -522,  -522,   386,   110,  -522,   829,  -522,
     383,    16,  -522,   202,   202,  -522,   845,  -522,   405,   409,
    -522,  -522,  -522,  -522
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -522,  -522,   398,  -522,   359,  -522,  -522,  -522,  -522,  -522,
    -522,   330,  -522,  -522,   327,  -522,  -522,  -522,  -522,   -94,
    -522,  -522,  -522,  -522,  -522,   358,  -522,  -522,  -522,   350,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,   326,  -522,  -522,  -522,  -522,    19,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,   172,  -522,  -522,  -396,
    -522,   123,    71,  -522,  -143,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -238,  -522,  -521,  -522,    51,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,   147,  -522,  -522,
    -522,  -522,   -91,  -522,  -522,  -121,  -522,  -522,  -522,   -95,
    -159,   346,  -522,  -522,  -334,  -522,   141,  -522,  -522,  -522,
    -522,  -130,  -522,  -522,    59,  -522,  -250,    63,  -522,  -522,
    -522,  -522,   170,  -522,  -522,   169,  -522,  -522,  -399,    89,
    -522,  -522,   -85,  -522,   360,  -217,  -162,  -150,  -100,  -105,
    -522,  -157,    -8,  -103,  -522,  -293,  -522
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -248
static const yytype_int16 yytable[] =
{
      43,   254,   232,   221,   253,    53,   255,   272,   194,   447,
     198,   218,   274,   519,   334,   569,   422,     1,   207,   151,
     252,   348,   351,   352,   353,   354,   355,   356,   192,   130,
     214,   118,   119,   194,   380,   198,   382,   228,   368,   437,
      64,    65,    66,    67,   151,   238,     4,   410,   568,    73,
     569,   276,    29,   192,   438,   296,  -246,   439,    47,     5,
       6,     7,     8,  -246,   273,    30,     9,    10,   430,    11,
    -247,    31,   433,    12,   231,    45,   436,  -247,   408,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   560,    73,
      46,   349,    43,    54,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   510,   511,   197,   366,   525,   369,   526,
     347,    55,   515,   412,   413,    57,   414,   415,   444,   377,
     378,   442,   443,   381,   220,    59,   564,   423,   469,   451,
     197,    48,    49,    50,    51,   230,   336,   337,   411,   412,
     413,   421,   414,   415,   416,    60,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   256,    13,   388,   216,   231,
      14,   573,   574,    68,   483,   370,   371,   372,   373,   374,
     375,    89,   367,   404,  -116,   104,   105,    90,   391,   394,
      91,    92,    93,   254,    94,    95,   253,    96,   255,   405,
     517,   406,   518,    97,   100,   101,   298,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   304,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,    74,   107,   109,   537,   199,   200,   201,
     202,   108,   110,   111,   578,   114,   117,   205,   238,   208,
     254,   206,   209,   253,   211,   255,    32,    33,    34,    35,
      36,    37,    38,    39,   467,   512,   485,   212,   213,   514,
     217,   222,   223,   516,   224,   150,   233,   239,   240,   387,
     220,   474,   477,   480,   257,   258,   275,   277,   533,   534,
     535,   278,   279,   231,   299,   315,   197,  -116,   300,   316,
     317,   318,   220,   326,   330,   331,   322,   332,   335,   341,
     343,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,   342,  -247,   345,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   241,   242,   243,   244,
     146,   147,   148,   346,   379,  -246,   409,   256,   424,   428,
     426,   427,   452,   453,   454,   455,   456,   457,   458,   431,
     434,   445,   459,   446,   460,   520,   461,   468,   462,   470,
     471,   472,   463,   464,   465,   466,   521,   528,   529,   530,
     531,   481,   482,   532,   484,   536,   565,   562,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   557,   575,   256,   254,   254,   231,   253,   253,
     255,   255,   576,   558,   550,   553,   556,   577,   582,   566,
     559,   579,   583,    56,    69,   304,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   144,   294,   112,   216,   220,
     220,   220,   139,    33,    34,    35,    36,    37,    38,    39,
      40,   395,   396,   397,   398,   146,   147,   148,   210,   106,
     116,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     126,   548,   127,   238,   226,   538,   402,   128,   449,   129,
       9,    10,   130,   513,   522,   441,   131,    12,   132,   133,
     580,   581,   134,   225,   135,   448,   136,   524,   137,   523,
     432,   215,   217,   435,   138,   139,    33,    34,    35,    36,
     140,   141,   142,   143,   144,     0,     0,   145,   146,   147,
     148,     0,   563,     0,     0,     0,   399,   400,   401,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,     0,     0,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   473,   256,
     256,   227,   146,   147,   148,     0,     0,     0,   220,     0,
       0,     0,     0,   126,     0,   127,     0,   149,   387,     0,
       0,   150,   129,     9,    10,   130,     0,     0,     0,   131,
      12,   132,   133,     0,     0,   134,     0,   135,     0,   136,
       0,   137,     0,     0,     0,     0,     0,     0,   139,    33,
      34,    35,    36,   140,   141,   142,   143,   144,     0,     0,
     145,   146,   147,   148,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,     0,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   144,     0,
     149,   216,     0,  -241,   150,     0,     0,     0,     0,     0,
       0,   500,     0,   501,   502,   503,   504,   505,   506,   507,
     508,     0,     0,     0,     0,   500,     0,   501,   502,   503,
     504,   505,   506,   507,   508,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   227,   146,   147,
     148,    32,    33,    34,    35,    36,    37,    38,    39,    40,
     305,   242,   243,   227,   146,   147,   148,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   241,   242,   243,   227,
     146,   147,   148,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,   389,   390,   227,   146,   147,   148,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,   392,
     393,   227,   146,   147,   148,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,   475,   476,   227,   146,   147,
     148,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,   478,   479,   227,   146,   147,   148,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,   551,   552,   227,
     146,   147,   148,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,   554,   555,   227,   146,   147,   148,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   549,     0,
       0,   227,   146,   147,   148,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,     0,     0,   227,   146,   147,
     148,    32,    33,    34,    35,    36,    37,    38,    39,    40,
     383,     0,     0,   384,     0,   385,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
       8,   163,   145,   133,   163,    13,   163,   169,   113,   343,
     113,   132,   169,   412,   231,   536,     3,     3,   118,   113,
     163,    44,   260,   261,   262,   263,   264,   265,   113,    13,
     130,   103,   104,   138,   272,   138,   274,   142,    44,    15,
      48,    49,    50,    51,   138,   150,     0,     3,    32,    57,
     571,   181,    45,   138,    30,   198,   112,    33,   116,     4,
       5,     6,     7,   119,   169,    45,    11,    12,   318,    14,
     112,    45,   322,    18,   116,    46,   326,   119,   295,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    97,
      45,   114,   100,    36,    36,    37,    38,    39,    40,    41,
      42,    43,    44,   396,   397,   113,    48,    95,   114,    97,
     253,     3,   405,    95,    96,   112,    98,    99,   335,   269,
     270,   117,   118,   273,   132,   115,   525,   114,   366,   346,
     138,    37,    38,    39,    40,   143,   109,   110,    94,    95,
      96,   300,    98,    99,   100,    45,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   163,   101,   278,    48,   116,
     105,   557,   558,   111,   381,    53,    54,    55,    56,    57,
      58,    45,   114,   294,     3,    86,    87,   117,   283,   284,
     118,   115,   115,   345,   115,   115,   345,   113,   345,   294,
     407,   294,   409,   114,   112,   112,   204,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   214,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     3,    46,    45,   443,    37,    38,    39,
      40,    47,    45,     3,   568,     9,    45,   113,   343,   106,
     402,   113,   102,   402,     3,   402,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   398,   386,     3,    45,   402,
     112,     3,     3,   406,     3,   112,   112,     3,     3,   277,
     278,   376,   377,   378,     3,     3,     3,   119,   437,   438,
     439,   115,     3,   116,   107,     3,   294,   116,   114,     3,
       3,    21,   300,    31,     3,     3,    22,     3,   115,     3,
     114,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,   113,   116,   114,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   115,    44,   116,   115,   345,    94,   114,
      52,   113,   350,   351,   352,   353,   354,   355,   356,    24,
      26,   113,    44,   114,    44,   112,    44,   365,    44,   367,
     368,   369,    44,    44,    44,    44,     3,     3,     3,     3,
       3,   379,   380,     3,   382,     3,     3,   520,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   114,   113,   402,   557,   558,   116,   557,   558,
     557,   558,    16,   114,   509,   510,   511,   566,     3,   114,
     515,    28,     3,    15,    55,   423,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,   115,    97,    48,   437,
     438,   439,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   121,    91,
     100,   459,   460,   461,   462,   463,   464,   465,   466,   467,
       1,   469,     3,   568,   138,   446,   294,     8,   345,    10,
      11,    12,    13,   402,   423,   328,    17,    18,    19,    20,
     571,   576,    23,   137,    25,   344,    27,   428,    29,   426,
     320,   131,   112,   324,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    -1,   520,    -1,    -1,    -1,   120,   121,   122,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,   557,
     558,    48,    49,    50,    51,    -1,    -1,    -1,   566,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,   108,   576,    -1,
      -1,   112,    10,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
     108,    48,    -1,   112,   112,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,   120,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      51,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    50,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,   131,   132,     0,     4,     5,     6,     7,    11,
      12,    14,    18,   101,   105,   133,   134,   135,   136,   137,
     138,   148,   149,   150,   151,   152,   156,   158,   262,    45,
      45,    45,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   159,   272,   273,    46,    45,   116,    37,    38,
      39,    40,   264,   272,    36,     3,   132,   112,   160,   115,
      45,   153,   154,   155,   272,   272,   272,   272,   111,   134,
     139,   140,   141,   272,     3,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   161,    45,
     117,   118,   115,   115,   115,   115,   113,   114,   163,   164,
     112,   112,   258,   259,   259,   259,   155,    46,    47,    45,
      45,     3,   141,   171,     9,   165,   159,    45,   103,   104,
     142,   143,   144,   145,   146,   147,     1,     3,     8,    10,
      13,    17,    19,    20,    23,    25,    27,    29,    35,    36,
      41,    42,    43,    44,    45,    48,    49,    50,    51,   108,
     112,   149,   157,   172,   173,   174,   179,   180,   181,   182,
     183,   184,   185,   186,   196,   197,   198,   200,   201,   203,
     205,   206,   211,   212,   213,   214,   223,   224,   225,   226,
     227,   228,   230,   231,   237,   238,   239,   240,   248,   249,
     260,   261,   262,   263,   269,   270,   271,   272,   273,    37,
      38,    39,    40,   166,   268,   113,   113,   268,   106,   102,
     144,     3,     3,    45,   268,   264,    48,   112,   225,   241,
     272,   241,     3,     3,     3,   231,   173,    48,   269,   272,
     272,   116,   194,   112,   175,   232,   233,   234,   269,     3,
       3,    45,    46,    47,    48,   187,   188,   189,   190,   191,
     192,   193,   194,   230,   266,   271,   272,     3,     3,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   202,   266,   269,   271,     3,   241,   119,   115,     3,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   115,   276,   194,   167,   272,   107,
     114,   207,   208,   209,   272,    45,   242,   243,   244,   245,
     246,   247,   265,   266,   269,     3,     3,     3,    21,   250,
     251,   252,    22,   253,   254,   255,    31,   215,   216,   217,
       3,     3,     3,   195,   265,   115,   109,   110,   176,   177,
     178,     3,   113,   114,   235,   114,   115,   194,    44,   114,
     204,   204,   204,   204,   204,   204,   204,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    48,   114,    44,   114,
      53,    54,    55,    56,    57,    58,   267,   267,   267,    44,
     204,   267,   204,    45,    48,    50,   229,   272,   225,    46,
      47,   269,    46,    47,   269,    45,    46,    47,    48,   120,
     121,   122,   186,   199,   225,   269,   273,   274,   265,   115,
       3,    94,    95,    96,    98,    99,   100,   168,   169,   170,
     236,   230,     3,   114,    94,   210,    52,   113,   114,   256,
     246,    24,   252,   246,    26,   255,   246,    15,    30,    33,
     218,   217,   117,   118,   265,   113,   114,   234,   236,   191,
     194,   265,   272,   272,   272,   272,   272,   272,   272,    44,
      44,    44,    44,    44,    44,    44,    44,    44,   272,   204,
     272,   272,   272,    45,   269,    46,    47,   269,    46,    47,
     269,   272,   272,   265,   272,   241,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     120,   122,   123,   124,   125,   126,   127,   128,   129,   275,
     275,   275,   194,   192,   194,   275,   194,   265,   265,   258,
     112,     3,   208,   247,   244,    95,    97,   257,     3,     3,
       3,     3,     3,   230,   230,   230,     3,   265,   178,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,    45,
     269,    46,    47,   269,    46,    47,   269,   114,   114,   269,
      45,   162,   194,   272,   258,     3,   114,   219,    32,   206,
     220,   221,   222,   189,   189,   113,    16,   230,   234,    28,
     222,   229,     3,     3
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (yyscanner, lexer, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, yyscanner, lexer); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, lexer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yyscanner);
  YYUSE (lexer);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yyscanner, lexer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, lexer);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yy_reduce_print (yyvsp, yyrule, yyscanner, lexer)
    YYSTYPE *yyvsp;
    int yyrule;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , yyscanner, lexer);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, yyscanner, lexer); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t yyscanner, struct lexer_state * const lexer)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yyscanner, lexer)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  YYUSE (lexer);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (yyscan_t yyscanner, struct lexer_state * const lexer);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (yyscan_t yyscanner, struct lexer_state * const lexer)
#else
int
yyparse (yyscanner, lexer)
    yyscan_t yyscanner;
    struct lexer_state * const lexer;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 519 "pir.y"
    { fixup_global_labels(lexer); ;}
    break;

  case 17:
#line 549 "pir.y"
    { new_macro_const(lexer->macros, (yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval), yypirget_lineno(yyscanner)); ;}
    break;

  case 18:
#line 555 "pir.y"
    { /* fprintf(stderr, "macro body: [%s]\n", CURRENT_MACRO(lexer)->body);*/ ;}
    break;

  case 19:
#line 559 "pir.y"
    { new_macro(lexer->macros, (yyvsp[(2) - (2)].sval), yypirget_lineno(yyscanner), TRUE); ;}
    break;

  case 24:
#line 571 "pir.y"
    { add_macro_param(CURRENT_MACRO(lexer), (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 32:
#line 590 "pir.y"
    { store_macro_string(CURRENT_MACRO(lexer), "%s\n", (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 33:
#line 594 "pir.y"
    {
                          store_macro_string(CURRENT_MACRO(lexer), ".local %s %s\n",
                                             pir_type_names[(yyvsp[(2) - (3)].ival)], (yyvsp[(3) - (3)].sval));
                        ;}
    break;

  case 34:
#line 605 "pir.y"
    { load_library(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 35:
#line 609 "pir.y"
    { yypirset_lineno ((yyvsp[(2) - (2)].ival), yyscanner); ;}
    break;

  case 36:
#line 611 "pir.y"
    { lexer->filename = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 37:
#line 617 "pir.y"
    { set_hll(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 38:
#line 621 "pir.y"
    { set_hll_map(lexer, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 39:
#line 625 "pir.y"
    { set_namespace(lexer, (yyvsp[(3) - (4)].key)); ;}
    break;

  case 40:
#line 629 "pir.y"
    { (yyval.key) = NULL; ;}
    break;

  case 41:
#line 631 "pir.y"
    { (yyval.key) = (yyvsp[(1) - (1)].key); ;}
    break;

  case 42:
#line 635 "pir.y"
    { (yyval.key) = new_key(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 43:
#line 637 "pir.y"
    { (yyval.key) = add_key(lexer, (yyvsp[(1) - (3)].key), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 44:
#line 641 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, new_const(lexer, STRING_TYPE, (yyvsp[(1) - (1)].sval))); ;}
    break;

  case 46:
#line 651 "pir.y"
    { close_sub(lexer); ;}
    break;

  case 47:
#line 655 "pir.y"
    { new_subr(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 52:
#line 667 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_ANON);;}
    break;

  case 53:
#line 669 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_INIT); ;}
    break;

  case 54:
#line 671 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_LOAD); ;}
    break;

  case 55:
#line 673 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_MAIN); ;}
    break;

  case 56:
#line 675 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_METHOD); ;}
    break;

  case 57:
#line 677 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_LEX); ;}
    break;

  case 58:
#line 679 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_POSTCOMP); ;}
    break;

  case 59:
#line 681 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_IMMEDIATE); ;}
    break;

  case 60:
#line 683 "pir.y"
    { set_sub_flag(lexer, SUB_FLAG_MULTI); ;}
    break;

  case 61:
#line 685 "pir.y"
    { set_sub_outer(lexer, (yyvsp[(3) - (4)].sval)); ;}
    break;

  case 62:
#line 687 "pir.y"
    { set_sub_vtable(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 63:
#line 689 "pir.y"
    { set_sub_lexid(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 64:
#line 691 "pir.y"
    { set_sub_instanceof(lexer, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 68:
#line 700 "pir.y"
    { /* XXX */
                           /* generate_get_params(lexer); */
                           set_instr(lexer, "get_params");
                           update_op(lexer, CURRENT_INSTRUCTION(lexer), PARROT_OP_get_params_pc);
                         ;}
    break;

  case 71:
#line 712 "pir.y"
    { set_param_flag(lexer, (yyvsp[(2) - (4)].targ), (yyvsp[(3) - (4)].ival)); ;}
    break;

  case 72:
#line 716 "pir.y"
    { (yyval.targ) = add_param(lexer, (yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 73:
#line 720 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 74:
#line 722 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 78:
#line 731 "pir.y"
    { (yyval.ival) = TARGET_FLAG_INVOCANT;
                           /* XXX handle multi_type */

                         ;}
    break;

  case 79:
#line 738 "pir.y"
    { (yyval.ival) = TARGET_FLAG_UNIQUE_REG; ;}
    break;

  case 82:
#line 748 "pir.y"
    { set_label(lexer, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 99:
#line 773 "pir.y"
    { expand_macro(yyscanner, (yyvsp[(1) - (3)].mval), (yyvsp[(2) - (3)].pval)); ;}
    break;

  case 100:
#line 777 "pir.y"
    { (yyval.pval) = NULL; ;}
    break;

  case 101:
#line 779 "pir.y"
    { (yyval.pval) = (yyvsp[(2) - (3)].pval); ;}
    break;

  case 102:
#line 783 "pir.y"
    { (yyval.pval) = NULL; ;}
    break;

  case 104:
#line 788 "pir.y"
    { (yyval.pval) = new_macro_param((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 105:
#line 790 "pir.y"
    {
                          macro_param *param = new_macro_param((yyvsp[(3) - (3)].sval));
                          param->next = (yyvsp[(1) - (3)].pval);
                          (yyval.pval) = param;
                        ;}
    break;

  case 106:
#line 798 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                          if (sym == NULL) {
                              yypirerror(yyscanner, lexer, "macro argument '%s' is not a "
                                                           "declared identifier", (yyvsp[(1) - (1)].sval));
                          }
                        ;}
    break;

  case 108:
#line 813 "pir.y"
    { set_instr(lexer, NULL); ;}
    break;

  case 110:
#line 821 "pir.y"
    {
                           if (lexer->parse_errors > MAX_NUM_ERRORS)
                               panic(lexer, "Too many errors. Compilation aborted.\n");

                           yyerrok;
                         ;}
    break;

  case 111:
#line 830 "pir.y"
    {
                           set_instrf(lexer, "null", "%T", (yyvsp[(2) - (3)].targ));
                           get_opinfo(yyscanner);
                         ;}
    break;

  case 112:
#line 837 "pir.y"
    {
                           set_instrf(lexer, "get_results", "%T", (yyvsp[(2) - (3)].targ));
                           get_opinfo(yyscanner);
                         ;}
    break;

  case 116:
#line 851 "pir.y"
    { /* at this point, TK_IDENT may in fact be a symbol identifier,
                            * not an op, so don't do any checks like is_parrot_op() just yet.
                            */
                           set_instr(lexer, (yyvsp[(1) - (1)].sval));
                           (yyval.sval) = (yyvsp[(1) - (1)].sval);
                         ;}
    break;

  case 117:
#line 860 "pir.y"
    { /* when this rule is activated, the initial identifier must
                           * be a parrot op.
                           */
                          if (check_op_args_for_symbols(yyscanner))
                              do_strength_reduction(yyscanner);
                        ;}
    break;

  case 123:
#line 878 "pir.y"
    {
                         /* the "instruction" that was set now appears to be
                          * an identifier; get the name, and check its type.
                          */
                         char const * const instr = CURRENT_INSTRUCTION(lexer)->opname;
                         symbol *sym        = find_symbol(lexer, instr);
                         target *obj;

                         /* find the symbol for the object being indexed;
                          * it must have been declared.
                          */
                         if (sym == NULL) {
                            yypirerror(yyscanner, lexer, "indexed object '%s' not declared", instr);
                            sym = new_symbol(lexer, instr, PMC_TYPE);
                         }
                         else if (sym->type != PMC_TYPE) /* found symbol, now check it's a PMC */
                            yypirerror(yyscanner, lexer,
                                    "indexed object '%s' must be of type 'pmc'", instr);

                         /* convert the symbol into a target */
                         obj = target_from_symbol(lexer, sym);

                         /* set the key on the target */
                         set_target_key(obj, (yyvsp[(1) - (3)].key));

                         /* indexed operation is a "set" opcode */
                         update_instr(lexer, "set");
                         unshift_operand(lexer, (yyvsp[(3) - (3)].expr));
                         unshift_operand(lexer, expr_from_target(lexer, obj));

                         get_opinfo(yyscanner);
                       ;}
    break;

  case 124:
#line 913 "pir.y"
    { push_operand(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 125:
#line 918 "pir.y"
    { push_operand(lexer, expr_from_key(lexer, (yyvsp[(1) - (1)].key))); ;}
    break;

  case 126:
#line 922 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, (yyvsp[(1) - (1)].cval)); ;}
    break;

  case 127:
#line 924 "pir.y"
    { /* this is either a LABEL or a symbol; in the latter case, the type
                            * will be filled in later. */
                           (yyval.expr) = expr_from_target(lexer, new_target(lexer, UNKNOWN_TYPE, (yyvsp[(1) - (1)].sval)));
                         ;}
    break;

  case 128:
#line 929 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, (yyvsp[(1) - (1)].targ)); ;}
    break;

  case 129:
#line 931 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, (yyvsp[(1) - (1)].targ)); ;}
    break;

  case 130:
#line 935 "pir.y"
    {
                           /* if $1 is a register, just return that */
                           if (TEST_FLAG((yyvsp[(1) - (2)].targ)->flags, TARGET_FLAG_IS_REG))
                               (yyval.targ) = (yyvsp[(1) - (2)].targ);
                           else { /* it's not a register, so it must be a declared symbol */
                               symbol *sym = find_symbol(lexer, target_name((yyvsp[(1) - (2)].targ)));
                               if (sym == NULL) {
                                   yypirerror(yyscanner, lexer,
                                           "indexed object '%s' not declared", target_name((yyvsp[(1) - (2)].targ)));
                                   /* make sure sym is a valid pointer */
                                   sym = new_symbol(lexer, target_name((yyvsp[(1) - (2)].targ)), PMC_TYPE);
                               }
                               else if (sym->type != PMC_TYPE)
                                   yypirerror(yyscanner, lexer,
                                           "indexed object '%s' is not of type 'pmc'",
                                           target_name((yyvsp[(1) - (2)].targ)));

                               /* create a target node based on the symbol node;
                                * sym already has a PASM register, so through
                                * this the target will get that too.
                                */
                               (yyval.targ) = target_from_symbol(lexer, sym);
                           }

                           /* in both cases (register or symbol), set the key on this target */
                           set_target_key((yyval.targ), (yyvsp[(2) - (2)].key));
                         ;}
    break;

  case 131:
#line 965 "pir.y"
    { (yyval.key) = (yyvsp[(2) - (3)].key); ;}
    break;

  case 132:
#line 969 "pir.y"
    { (yyval.key) = new_key(lexer, (yyvsp[(1) - (1)].expr)); ;}
    break;

  case 133:
#line 971 "pir.y"
    { (yyval.key) = add_key(lexer, (yyvsp[(1) - (3)].key), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 134:
#line 980 "pir.y"
    {
                          /* the instruction is already set in parrot_op rule */
                          unshift_operand(lexer, (yyvsp[(4) - (6)].expr));
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (6)].targ)));

                          if (check_op_args_for_symbols(yyscanner)) {
                              check_first_arg_direction(yyscanner, (yyvsp[(3) - (6)].sval));
                              do_strength_reduction(yyscanner);
                          }
                        ;}
    break;

  case 135:
#line 991 "pir.y"
    {
                          /* the instruction is already set in parrot_op rule */
                          unshift_operand(lexer, (yyvsp[(4) - (4)].expr));
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (4)].targ)));

                          /* if checking op args is successful, do other checks */
                          if (check_op_args_for_symbols(yyscanner)) {
                              check_first_arg_direction(yyscanner, (yyvsp[(3) - (4)].sval));
                              do_strength_reduction(yyscanner);
                          }
                        ;}
    break;

  case 136:
#line 1003 "pir.y"
    { /* XXX create a PMC const for $4 */
                          unshift_operand(lexer, expr_from_key(lexer, (yyvsp[(4) - (6)].key)));
                          unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (6)].targ)));
                          if (check_op_args_for_symbols(yyscanner))
                              check_first_arg_direction(yyscanner, (yyvsp[(3) - (6)].sval));
                        ;}
    break;

  case 137:
#line 1012 "pir.y"
    { get_opinfo(yyscanner); ;}
    break;

  case 138:
#line 1016 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instrf(lexer, "null", "%T", (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, "set", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));
                        ;}
    break;

  case 139:
#line 1023 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instrf(lexer, "null", "%T", (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, "set", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));
                        ;}
    break;

  case 140:
#line 1030 "pir.y"
    { set_instrf(lexer, "set", "%T%s", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 141:
#line 1032 "pir.y"
    { unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (3)].targ))); ;}
    break;

  case 142:
#line 1034 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (3)].sval));
                          if (sym == NULL) {
                              if (!is_parrot_op(lexer, (yyvsp[(3) - (3)].sval)))
                                  yypirerror(yyscanner, lexer, "'%s' is neither a declared symbol "
                                                            "nor a parrot opcode", (yyvsp[(3) - (3)].sval));
                              else { /* handle it as an op */
                                  unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (3)].targ)));
                                  check_first_arg_direction(yyscanner, (yyvsp[(3) - (3)].sval));
                              }
                          }
                          else { /* handle it as a symbol */
                              update_instr(lexer, "set");
                              unshift_operand(lexer, expr_from_target(lexer,
                                                     target_from_symbol(lexer, sym)));
                              unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (3)].targ)));
                          }
                        ;}
    break;

  case 143:
#line 1053 "pir.y"
    {
                          /*   $P0 = foo ["bar"]
                           *
                           * could be PIR sugar for this PASM code:
                           *
                           *    foo $P0, ["bar"]
                           *
                           * but as this sugar is already used for keyed access, the parser
                           * will not allow the former syntax; if there is an op C<foo>,
                           * where the second operand is a key, then this must be written
                           * in PASM style (shown above).
                           */
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (4)].sval));
                          target *t;
                          if (sym == NULL) {
                              if (is_parrot_op(lexer, (yyvsp[(3) - (4)].sval)))
                                  set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), expr_from_key(lexer, (yyvsp[(4) - (4)].key)));
                              else
                                  yypirerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(3) - (4)].sval));

                              /* create a symbol node anyway, so we can continue with instr. gen. */
                              sym = new_symbol(lexer, (yyvsp[(3) - (4)].sval), PMC_TYPE);
                          }
                          else {
                              /* at this point, sym is not NULL, even if there was an error */
                              if (sym->type != PMC_TYPE)
                                  yypirerror(yyscanner, lexer,
                                          "indexed object '%s' must be of type 'pmc'", (yyvsp[(3) - (4)].sval));

                              t = target_from_symbol(lexer, sym);
                              set_target_key(t, (yyvsp[(4) - (4)].key));
                              update_instr(lexer, "set");
                              unshift_operand(lexer, expr_from_target(lexer, t));
                              unshift_operand(lexer, expr_from_target(lexer, (yyvsp[(1) - (4)].targ)));
                          }
                        ;}
    break;

  case 144:
#line 1090 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(3) - (4)].sval));
                          target *t;

                          if (sym == NULL) {
                              yypirerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(3) - (4)].sval));
                              sym = new_symbol(lexer, (yyvsp[(3) - (4)].sval), PMC_TYPE);
                          }
                          else if (sym->type != PMC_TYPE)
                              yypirerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(3) - (4)].sval));

                          t = target_from_symbol(lexer, sym);
                          set_target_key(t, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), t);
                        ;}
    break;

  case 145:
#line 1107 "pir.y"
    {
                          target *preg = new_reg(lexer, PMC_TYPE, (yyvsp[(3) - (4)].ival));
                          set_target_key(preg, (yyvsp[(4) - (4)].key));
                          set_instrf(lexer, "set", "%T%T", (yyvsp[(1) - (4)].targ), preg);
                        ;}
    break;

  case 146:
#line 1113 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%E", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 147:
#line 1115 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 1)
                              set_instrf(lexer, "inc", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "add", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));
                        ;}
    break;

  case 148:
#line 1124 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 1.0)
                              set_instrf(lexer, "inc", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "add", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));
                        ;}
    break;

  case 149:
#line 1133 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].ival) == 1)
                              set_instrf(lexer, "dec", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].ival) == 0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "sub", "%T%i", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].ival));
                        ;}
    break;

  case 150:
#line 1142 "pir.y"
    {
                          if ((yyvsp[(3) - (3)].dval) == 1.0)
                              set_instrf(lexer, "dec", "%T", (yyvsp[(1) - (3)].targ));
                          else if ((yyvsp[(3) - (3)].dval) == 0.0)
                              set_instr(lexer, "noop");
                          else
                              set_instrf(lexer, "sub", "%T%n", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].dval));
                        ;}
    break;

  case 151:
#line 1151 "pir.y"
    { set_instrf(lexer, "add", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 152:
#line 1153 "pir.y"
    { set_instrf(lexer, "sub", "%T%T", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 153:
#line 1155 "pir.y"
    { set_instrf(lexer, (yyvsp[(3) - (4)].sval), "%T%E", (yyvsp[(1) - (4)].targ), (yyvsp[(4) - (4)].expr)); ;}
    break;

  case 154:
#line 1157 "pir.y"
    {
                          if (targets_equal((yyvsp[(1) - (5)].targ), (yyvsp[(3) - (5)].targ))) /* $P0 = $P0 + $P1 ==> $P0 += $P1 */
                              set_instrf(lexer, opnames[(yyvsp[(4) - (5)].ival)], "%T%T", (yyvsp[(1) - (5)].targ), (yyvsp[(5) - (5)].targ));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(4) - (5)].ival)], "%T%T%T", (yyvsp[(1) - (5)].targ), (yyvsp[(3) - (5)].targ), (yyvsp[(5) - (5)].targ));
                        ;}
    break;

  case 155:
#line 1164 "pir.y"
    {
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (4)].sval));
                          target *t;

                          if (sym == NULL) {
                              yypirerror(yyscanner, lexer, "indexed object '%s' not declared", (yyvsp[(1) - (4)].sval));
                              /* create a dummy symbol so we can continue without seg. faults */
                              sym = new_symbol(lexer, (yyvsp[(1) - (4)].sval), PMC_TYPE);
                          }
                          else if (sym->type != PMC_TYPE)
                              yypirerror(yyscanner, lexer,
                                      "indexed object '%s' must be of type 'pmc'", (yyvsp[(1) - (4)].sval));
                          /* at this point sym is a valid (possibly dummy) object for sure */
                          t = target_from_symbol(lexer, sym);
                          set_target_key(t, (yyvsp[(2) - (4)].key));
                          set_instrf(lexer, "set", "%T%E", t, (yyvsp[(4) - (4)].expr));
                      ;}
    break;

  case 156:
#line 1182 "pir.y"
    {
                          target *preg = new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (4)].ival));
                          set_target_key(preg, (yyvsp[(2) - (4)].key));
                          set_instrf(lexer, "set", "%T%E", preg, (yyvsp[(4) - (4)].expr));
                        ;}
    break;

  case 157:
#line 1215 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%i%T", (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 158:
#line 1217 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%n%T", (yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 159:
#line 1219 "pir.y"
    { set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%s%T", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 160:
#line 1221 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_s_s(yyscanner, (yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].sval))); ;}
    break;

  case 161:
#line 1223 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_i_i(yyscanner, (yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival))); ;}
    break;

  case 162:
#line 1225 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_n_n(yyscanner, (yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval))); ;}
    break;

  case 163:
#line 1227 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_i_n(yyscanner, (yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval))); ;}
    break;

  case 164:
#line 1229 "pir.y"
    { set_instrf(lexer, "set", "%C", fold_n_i(yyscanner, (yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival))); ;}
    break;

  case 165:
#line 1234 "pir.y"
    { get_opinfo(yyscanner); ;}
    break;

  case 166:
#line 1243 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, (yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 167:
#line 1245 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "int", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 168:
#line 1247 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "num", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 169:
#line 1249 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "pmc", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 170:
#line 1251 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "string", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 171:
#line 1253 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "if", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 172:
#line 1255 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "unless", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 173:
#line 1257 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "goto", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 174:
#line 1259 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (5)].ival), 1, "null", (yyvsp[(4) - (5)].sval)); ;}
    break;

  case 175:
#line 1261 "pir.y"
    {
                          int istrue = evaluate_c(lexer, (yyvsp[(2) - (4)].cval));
                          /* if "unless", invert the true-ness */
                          istrue = (yyvsp[(1) - (4)].ival) ? !istrue : istrue;
                          if (istrue) {
                              set_instrf(lexer, "branch", "%I", (yyvsp[(4) - (4)].sval));
                              set_instr_flag(lexer, INSTR_FLAG_BRANCH);
                          }
                          else
                              set_instr(lexer, "noop");
                        ;}
    break;

  case 176:
#line 1273 "pir.y"
    {
                          set_instrf(lexer, (yyvsp[(1) - (5)].ival) ? "unless_null" : "if_null", "%T%I",
                                     new_reg(lexer, PMC_TYPE, (yyvsp[(3) - (5)].ival)), (yyvsp[(5) - (5)].sval));
                        ;}
    break;

  case 177:
#line 1278 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 178:
#line 1280 "pir.y"
    { set_instrf(lexer, (yyvsp[(1) - (4)].ival) ? "unless" : "if", "%T%I", (yyvsp[(2) - (4)].targ), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 179:
#line 1282 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "int", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 180:
#line 1284 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "num", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 181:
#line 1286 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "pmc", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 182:
#line 1288 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "string", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 183:
#line 1290 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "if", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 184:
#line 1292 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "unless", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 185:
#line 1294 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "goto", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 186:
#line 1296 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "goto", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 187:
#line 1298 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "null", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 188:
#line 1300 "pir.y"
    { create_if_instr(yyscanner, lexer, (yyvsp[(1) - (4)].ival), 0, "null", (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 189:
#line 1302 "pir.y"
    {
                          if ((yyvsp[(2) - (4)].ival) == COMPUTE_DURING_RUNTIME) {
                             if ((yyvsp[(1) - (4)].ival) == NEED_INVERT_OPNAME) /* "unless" */
                                 invert_instr(lexer);

                             push_operand(lexer, expr_from_ident(lexer, (yyvsp[(4) - (4)].sval)));

                             set_instr_flag(lexer, INSTR_FLAG_ISXX);
                          }
                          else { /* evaluation during compile time */
                             /* if the result was false but the instr. was "unless", or,
                              * if the result was true and the instr. was "if",
                              * do an unconditional jump.
                              */
                             if (((yyvsp[(2) - (4)].ival) == FALSE && (yyvsp[(1) - (4)].ival) == NEED_INVERT_OPNAME)/* unless false -> jump */
                             ||  ((yyvsp[(2) - (4)].ival) == TRUE  && (yyvsp[(1) - (4)].ival) == DONT_INVERT_OPNAME)) {  /* if true -> jump */
                                set_instrf(lexer, "branch", "%I", (yyvsp[(4) - (4)].sval));
                                set_instr_flag(lexer, INSTR_FLAG_BRANCH);
                             }
                             else                       /* if false, unless true --> do nothing */
                                set_instr(lexer, "noop");

                          }
                        ;}
    break;

  case 190:
#line 1333 "pir.y"
    {
                          /* the instructions "gt" and "ge" are converted to "lt" and "le".
                           * if so, then the arguments must be reversed as well. "lt" and
                           * "le" are 1 position after "gt" and "ge" respectively in the
                           * opnames array; hence the [$2 + 1] index.
                           */
                          if ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT)
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival) + 1], "%E%T", (yyvsp[(3) - (3)].expr), (yyvsp[(1) - (3)].targ));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%E", (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].expr));

                          (yyval.ival) = COMPUTE_DURING_RUNTIME;  /* indicates this is evaluated at runtime */
                        ;}
    break;

  case 191:
#line 1347 "pir.y"
    {
                          if ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT)
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival) + 1], "%T%i", (yyvsp[(3) - (3)].targ), (yyvsp[(1) - (3)].ival));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%i%T", (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].targ));
                          (yyval.ival) = COMPUTE_DURING_RUNTIME;
                        ;}
    break;

  case 192:
#line 1355 "pir.y"
    {
                          if ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT)
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival) + 1], "%T%n", (yyvsp[(3) - (3)].targ), (yyvsp[(1) - (3)].dval));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%n%T", (yyvsp[(1) - (3)].dval), (yyvsp[(3) - (3)].targ));

                          (yyval.ival) = COMPUTE_DURING_RUNTIME;
                        ;}
    break;

  case 193:
#line 1364 "pir.y"
    {
                          if ((yyvsp[(2) - (3)].ival) == OP_GE || (yyvsp[(2) - (3)].ival) == OP_GT)
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%T%s", (yyvsp[(3) - (3)].targ), (yyvsp[(1) - (3)].sval));
                          else
                              set_instrf(lexer, opnames[(yyvsp[(2) - (3)].ival)], "%s%T", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].targ));

                          (yyval.ival) = COMPUTE_DURING_RUNTIME;
                        ;}
    break;

  case 194:
#line 1373 "pir.y"
    { (yyval.ival) = evaluate_i_i((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 195:
#line 1375 "pir.y"
    { (yyval.ival) = evaluate_i_n((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval)); ;}
    break;

  case 196:
#line 1377 "pir.y"
    { (yyval.ival) = evaluate_n_i((yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 197:
#line 1379 "pir.y"
    { (yyval.ival) = evaluate_n_n((yyvsp[(1) - (3)].dval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].dval)); ;}
    break;

  case 198:
#line 1381 "pir.y"
    { (yyval.ival) = evaluate_s_s((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 199:
#line 1384 "pir.y"
    { (yyval.ival) = DONT_INVERT_OPNAME; /* no need to invert */ ;}
    break;

  case 200:
#line 1385 "pir.y"
    { (yyval.ival) = NEED_INVERT_OPNAME; /* yes, invert opname */ ;}
    break;

  case 203:
#line 1393 "pir.y"
    {
                          set_instrf(lexer, "branch", "%I", (yyvsp[(2) - (3)].sval));
                          set_instr_flag(lexer, INSTR_FLAG_BRANCH);
                          get_opinfo(yyscanner);
                        ;}
    break;

  case 204:
#line 1401 "pir.y"
    { declare_local(lexer, (yyvsp[(2) - (4)].ival), (yyvsp[(3) - (4)].symb)); ;}
    break;

  case 205:
#line 1405 "pir.y"
    { (yyval.symb) = (yyvsp[(1) - (1)].symb); ;}
    break;

  case 206:
#line 1407 "pir.y"
    { (yyval.symb) = add_local((yyvsp[(1) - (3)].symb), (yyvsp[(3) - (3)].symb)); ;}
    break;

  case 207:
#line 1411 "pir.y"
    { (yyval.symb) = new_local(lexer, (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 208:
#line 1415 "pir.y"
    { /* try to find symbol for this id; if found, it was already declared */
                          symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                          if (sym)
                              yypirerror(yyscanner, lexer, "symbol '%s' is already declared", (yyvsp[(1) - (1)].sval));
                          (yyval.sval) = (yyvsp[(1) - (1)].sval);
                        ;}
    break;

  case 209:
#line 1423 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 210:
#line 1424 "pir.y"
    { (yyval.ival) = 1; ;}
    break;

  case 211:
#line 1428 "pir.y"
    { /* if $4 is not a register, it must be a declared symbol */
                          if (!TEST_FLAG((yyvsp[(4) - (5)].targ)->flags, TARGET_FLAG_IS_REG)) {
                              symbol *sym = find_symbol(lexer, target_name((yyvsp[(4) - (5)].targ)));

                              if (sym == NULL) /* check declaration */
                                  yypirerror(yyscanner, lexer, "lexical '%s' is not declared",
                                          target_name((yyvsp[(4) - (5)].targ)));
                              else if (sym->type != PMC_TYPE) /* a .lex must be a PMC */
                                  yypirerror(yyscanner, lexer, "lexical '%s' must be of type 'pmc'",
                                          target_name((yyvsp[(4) - (5)].targ)));
                          }
                          set_lex_flag((yyvsp[(4) - (5)].targ), (yyvsp[(2) - (5)].sval));
                        ;}
    break;

  case 212:
#line 1447 "pir.y"
    { convert_inv_to_instr(lexer, (yyvsp[(1) - (1)].invo)); ;}
    break;

  case 215:
#line 1459 "pir.y"
    { /* $4 contains an invocation object */
                              set_invocation_args((yyvsp[(4) - (8)].invo), (yyvsp[(3) - (8)].argm));
                              set_invocation_results((yyvsp[(4) - (8)].invo), (yyvsp[(6) - (8)].targ));
                              (yyval.invo) = (yyvsp[(4) - (8)].invo);
                            ;}
    break;

  case 216:
#line 1467 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 217:
#line 1469 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 218:
#line 1473 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 219:
#line 1475 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 220:
#line 1479 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 221:
#line 1483 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_PCC, (yyvsp[(2) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 222:
#line 1485 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_NCI, (yyvsp[(2) - (2)].targ)); ;}
    break;

  case 223:
#line 1488 "pir.y"
    { (yyval.invo) = invoke(lexer, CALL_METHOD, (yyvsp[(2) - (5)].targ), (yyvsp[(5) - (5)].expr)); ;}
    break;

  case 224:
#line 1492 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 225:
#line 1494 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (2)].targ); ;}
    break;

  case 226:
#line 1498 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 227:
#line 1500 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 228:
#line 1504 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 229:
#line 1506 "pir.y"
    { (yyval.targ) = add_target(lexer, (yyvsp[(1) - (2)].targ), (yyvsp[(2) - (2)].targ)); ;}
    break;

  case 230:
#line 1510 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (3)].targ); ;}
    break;

  case 231:
#line 1512 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 233:
#line 1520 "pir.y"
    { set_invocation_results((yyvsp[(3) - (3)].invo), (yyvsp[(1) - (3)].targ));
                             (yyval.invo) = (yyvsp[(3) - (3)].invo);
                           ;}
    break;

  case 234:
#line 1524 "pir.y"
    { set_invocation_results((yyvsp[(3) - (3)].invo), (yyvsp[(1) - (3)].targ));
                             (yyval.invo) = (yyvsp[(3) - (3)].invo);
                           ;}
    break;

  case 235:
#line 1528 "pir.y"
    { set_invocation_results((yyvsp[(1) - (1)].invo), NULL);
                             (yyval.invo) = (yyvsp[(1) - (1)].invo);
                           ;}
    break;

  case 238:
#line 1538 "pir.y"
    {
                             target *invocant;

                             /* if $1 is not a register, check whether the symbol was declared */
                             if (TEST_FLAG((yyvsp[(1) - (4)].targ)->flags, TARGET_FLAG_IS_REG)) {
                                invocant = (yyvsp[(1) - (4)].targ);
                             }
                             else { /* is not a register but a symbol */
                                 symbol *sym = find_symbol(lexer, target_name((yyvsp[(1) - (4)].targ)));
                                 if (sym == NULL)
                                     yypirerror(yyscanner, lexer, "object '%s' not declared",
                                             target_name((yyvsp[(1) - (4)].targ)));

                                 else if (sym->type != PMC_TYPE)
                                     yypirerror(yyscanner, lexer,
                                             "cannot invoke method: '%s' is not of type 'pmc'",
                                             target_name((yyvsp[(1) - (4)].targ)));

                                 /* get a target based on the symbol, it contains a register */
                                 invocant = target_from_symbol(lexer, sym);
                             }

                             (yyval.invo) = invoke(lexer, CALL_METHOD, invocant, (yyvsp[(3) - (4)].expr));
                             set_invocation_args((yyval.invo), (yyvsp[(4) - (4)].argm));
                           ;}
    break;

  case 239:
#line 1566 "pir.y"
    {
                             (yyval.invo) = invoke(lexer, CALL_PCC, (yyvsp[(1) - (2)].targ), NULL);
                             set_invocation_args((yyval.invo), (yyvsp[(2) - (2)].argm));
                           ;}
    break;

  case 240:
#line 1573 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 241:
#line 1575 "pir.y"
    { (yyval.targ) = target_from_string(lexer, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 242:
#line 1579 "pir.y"
    { /* check that this identifier was declared */
                             symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));

                             if (sym == NULL) {
                                yypirerror(yyscanner, lexer,
                                        "method identifier '%s' not declared", (yyvsp[(1) - (1)].sval));
                                /* make sure sym is not NULL */
                                sym = new_symbol(lexer, (yyvsp[(1) - (1)].sval), PMC_TYPE);
                             }
                             else if (sym->type != PMC_TYPE && sym->type != STRING_TYPE)
                                 yypirerror(yyscanner, lexer,
                                         "method '%s' must be of type 'pmc' or 'string'", (yyvsp[(1) - (1)].sval));

                             (yyval.expr) = expr_from_target(lexer, target_from_symbol(lexer, sym));
                           ;}
    break;

  case 243:
#line 1595 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival))); ;}
    break;

  case 244:
#line 1597 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, new_reg(lexer, STRING_TYPE, (yyvsp[(1) - (1)].ival))); ;}
    break;

  case 245:
#line 1599 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, new_const(lexer, STRING_TYPE, (yyvsp[(1) - (1)].sval))); ;}
    break;

  case 246:
#line 1603 "pir.y"
    { (yyval.targ) = target_from_ident(lexer, PMC_TYPE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 247:
#line 1605 "pir.y"
    { (yyval.targ) = new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 248:
#line 1610 "pir.y"
    { (yyval.targ) = (yyvsp[(2) - (3)].targ); ;}
    break;

  case 249:
#line 1614 "pir.y"
    { (yyval.targ) = NULL; ;}
    break;

  case 250:
#line 1616 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 251:
#line 1620 "pir.y"
    { (yyval.targ) = (yyvsp[(1) - (1)].targ); ;}
    break;

  case 252:
#line 1622 "pir.y"
    { (yyval.targ) = add_target(lexer, (yyvsp[(1) - (3)].targ), (yyvsp[(3) - (3)].targ)); ;}
    break;

  case 253:
#line 1626 "pir.y"
    { (yyval.targ) = set_param_flag(lexer, (yyvsp[(1) - (2)].targ), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 254:
#line 1630 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 255:
#line 1632 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 256:
#line 1636 "pir.y"
    { (yyval.ival) = TARGET_FLAG_OPTIONAL; ;}
    break;

  case 257:
#line 1638 "pir.y"
    { (yyval.ival) = TARGET_FLAG_OPT_FLAG; ;}
    break;

  case 258:
#line 1640 "pir.y"
    { (yyval.ival) = TARGET_FLAG_SLURPY; ;}
    break;

  case 259:
#line 1642 "pir.y"
    {
                             (yyval.ival) = TARGET_FLAG_NAMED;
                             set_param_alias(lexer, (yyvsp[(2) - (2)].sval));
                           ;}
    break;

  case 260:
#line 1652 "pir.y"
    { convert_inv_to_instr(lexer, (yyvsp[(1) - (1)].invo)); ;}
    break;

  case 265:
#line 1662 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_RETURN);
                              set_invocation_args((yyval.invo), (yyvsp[(2) - (3)].argm));
                            ;}
    break;

  case 266:
#line 1668 "pir.y"
    { /* was the invocation a method call? then it becomes a method tail
                               * call, otherwise it's just a normal (sub) tail call.
                               */
                              set_invocation_type((yyvsp[(2) - (3)].invo), ((yyvsp[(2) - (3)].invo)->type == CALL_METHOD)
                                                      ? CALL_METHOD_TAILCALL
                                                      : CALL_TAILCALL);
                              (yyval.invo) = (yyvsp[(2) - (3)].invo);
                            ;}
    break;

  case 267:
#line 1679 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_YIELD);
                              set_invocation_args((yyval.invo), (yyvsp[(2) - (3)].argm));
                            ;}
    break;

  case 268:
#line 1686 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 269:
#line 1690 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 270:
#line 1692 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 271:
#line 1696 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 272:
#line 1698 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (3)].argm), (yyvsp[(3) - (3)].argm)); ;}
    break;

  case 275:
#line 1706 "pir.y"
    { (yyval.argm) = set_arg_alias(lexer, (yyvsp[(1) - (3)].sval)); ;}
    break;

  case 276:
#line 1710 "pir.y"
    { (yyval.argm) = set_arg_flag((yyval.argm), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 277:
#line 1714 "pir.y"
    { (yyval.argm) = set_curarg(lexer, new_argument(lexer, (yyvsp[(1) - (1)].expr)));  ;}
    break;

  case 278:
#line 1720 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_RETURN);
                              set_invocation_args((yyval.invo), (yyvsp[(3) - (5)].argm));
                            ;}
    break;

  case 279:
#line 1729 "pir.y"
    {
                              (yyval.invo) = invoke(lexer, CALL_YIELD);
                              set_invocation_args((yyval.invo), (yyvsp[(3) - (5)].argm));
                            ;}
    break;

  case 280:
#line 1736 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 281:
#line 1738 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 282:
#line 1743 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 283:
#line 1745 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 284:
#line 1750 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 285:
#line 1754 "pir.y"
    { (yyval.argm) = NULL; ;}
    break;

  case 286:
#line 1756 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 287:
#line 1760 "pir.y"
    { (yyval.argm) = (yyvsp[(1) - (1)].argm); ;}
    break;

  case 288:
#line 1762 "pir.y"
    { (yyval.argm) = add_arg((yyvsp[(1) - (2)].argm), (yyvsp[(2) - (2)].argm)); ;}
    break;

  case 289:
#line 1766 "pir.y"
    { (yyval.argm) = (yyvsp[(2) - (3)].argm); ;}
    break;

  case 290:
#line 1771 "pir.y"
    { (yyval.ival) = 0; ;}
    break;

  case 291:
#line 1773 "pir.y"
    { SET_FLAG((yyval.ival), (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 292:
#line 1777 "pir.y"
    { (yyval.ival) = ARG_FLAG_FLAT; ;}
    break;

  case 293:
#line 1779 "pir.y"
    {
                               (yyval.ival) = ARG_FLAG_NAMED;
                               set_arg_alias(lexer, (yyvsp[(2) - (2)].sval));
                             ;}
    break;

  case 294:
#line 1786 "pir.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 295:
#line 1788 "pir.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 296:
#line 1792 "pir.y"
    { (yyval.sval) = (yyvsp[(2) - (3)].sval); ;}
    break;

  case 300:
#line 1803 "pir.y"
    { store_global_constant(lexer, (yyvsp[(2) - (2)].cval)); ;}
    break;

  case 301:
#line 1807 "pir.y"
    { /* XXX is .globalconst to be kept? */ ;}
    break;

  case 302:
#line 1811 "pir.y"
    { (yyval.cval) = new_named_const(lexer, INT_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ival)); ;}
    break;

  case 303:
#line 1813 "pir.y"
    { (yyval.cval) = new_named_const(lexer, NUM_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].dval)); ;}
    break;

  case 304:
#line 1815 "pir.y"
    { (yyval.cval) = new_named_const(lexer, STRING_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 305:
#line 1817 "pir.y"
    { (yyval.cval) = new_named_const(lexer, PMC_TYPE, (yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 306:
#line 1838 "pir.y"
    { (yyval.expr) = expr_from_target(lexer, (yyvsp[(1) - (1)].targ)); ;}
    break;

  case 307:
#line 1839 "pir.y"
    { (yyval.expr) = expr_from_const(lexer, (yyvsp[(1) - (1)].cval)); ;}
    break;

  case 308:
#line 1843 "pir.y"
    { (yyval.cval) = new_const(lexer, STRING_TYPE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 309:
#line 1844 "pir.y"
    { (yyval.cval) = new_const(lexer, INT_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 310:
#line 1845 "pir.y"
    { (yyval.cval) = new_const(lexer, NUM_TYPE, (yyvsp[(1) - (1)].dval)); ;}
    break;

  case 311:
#line 1848 "pir.y"
    { (yyval.ival) = OP_NE; ;}
    break;

  case 312:
#line 1849 "pir.y"
    { (yyval.ival) = OP_EQ; ;}
    break;

  case 313:
#line 1850 "pir.y"
    { (yyval.ival) = OP_LT; ;}
    break;

  case 314:
#line 1851 "pir.y"
    { (yyval.ival) = OP_LE; ;}
    break;

  case 315:
#line 1852 "pir.y"
    { (yyval.ival) = OP_GE; ;}
    break;

  case 316:
#line 1853 "pir.y"
    { (yyval.ival) = OP_GT; ;}
    break;

  case 317:
#line 1856 "pir.y"
    { (yyval.ival) = INT_TYPE; ;}
    break;

  case 318:
#line 1857 "pir.y"
    { (yyval.ival) = NUM_TYPE; ;}
    break;

  case 319:
#line 1858 "pir.y"
    { (yyval.ival) = PMC_TYPE; ;}
    break;

  case 320:
#line 1859 "pir.y"
    { (yyval.ival) = STRING_TYPE; ;}
    break;

  case 321:
#line 1867 "pir.y"
    { set_curtarget(lexer, (yyvsp[(1) - (1)].targ));  ;}
    break;

  case 323:
#line 1871 "pir.y"
    { /* a symbol must have been declared; check that at this point. */
                           symbol *sym = find_symbol(lexer, (yyvsp[(1) - (1)].sval));
                           if (sym == NULL) {
                               yypirerror(yyscanner, lexer, "symbol '%s' not declared", (yyvsp[(1) - (1)].sval));

                                   /* make sure sym is not NULL */
                               sym = new_symbol(lexer, (yyvsp[(1) - (1)].sval), UNKNOWN_TYPE);
                           }
                           (yyval.targ) = target_from_symbol(lexer, sym);

                         ;}
    break;

  case 324:
#line 1884 "pir.y"
    { (yyval.targ) = new_reg(lexer, PMC_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 325:
#line 1885 "pir.y"
    { (yyval.targ) = new_reg(lexer, NUM_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 326:
#line 1886 "pir.y"
    { (yyval.targ) = new_reg(lexer, INT_TYPE, (yyvsp[(1) - (1)].ival));    ;}
    break;

  case 327:
#line 1887 "pir.y"
    { (yyval.targ) = new_reg(lexer, STRING_TYPE, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 330:
#line 1895 "pir.y"
    { (yyval.sval) = "if"; ;}
    break;

  case 331:
#line 1896 "pir.y"
    { (yyval.sval) = "unless"; ;}
    break;

  case 332:
#line 1897 "pir.y"
    { (yyval.sval) = "goto"; ;}
    break;

  case 333:
#line 1898 "pir.y"
    { (yyval.sval) = "int"; ;}
    break;

  case 334:
#line 1899 "pir.y"
    { (yyval.sval) = "num"; ;}
    break;

  case 335:
#line 1900 "pir.y"
    { (yyval.sval) = "string"; ;}
    break;

  case 336:
#line 1901 "pir.y"
    { (yyval.sval) = "pmc"; ;}
    break;

  case 337:
#line 1902 "pir.y"
    { (yyval.sval) = "null"; ;}
    break;

  case 338:
#line 1905 "pir.y"
    { (yyval.sval) = "neg"; ;}
    break;

  case 339:
#line 1906 "pir.y"
    { (yyval.sval) = "not"; ;}
    break;

  case 340:
#line 1907 "pir.y"
    { (yyval.sval) = "bnot"; ;}
    break;

  case 341:
#line 1910 "pir.y"
    { (yyval.ival) = OP_ADD; ;}
    break;

  case 342:
#line 1911 "pir.y"
    { (yyval.ival) = OP_SUB; ;}
    break;

  case 343:
#line 1912 "pir.y"
    { (yyval.ival) = OP_DIV; ;}
    break;

  case 344:
#line 1913 "pir.y"
    { (yyval.ival) = OP_MUL; ;}
    break;

  case 345:
#line 1914 "pir.y"
    { (yyval.ival) = OP_MOD; ;}
    break;

  case 346:
#line 1915 "pir.y"
    { (yyval.ival) = OP_BOR; ;}
    break;

  case 347:
#line 1916 "pir.y"
    { (yyval.ival) = OP_BAND; ;}
    break;

  case 348:
#line 1917 "pir.y"
    { (yyval.ival) = OP_BXOR; ;}
    break;

  case 349:
#line 1918 "pir.y"
    { (yyval.ival) = OP_POW; ;}
    break;

  case 350:
#line 1919 "pir.y"
    { (yyval.ival) = OP_CONCAT; ;}
    break;

  case 351:
#line 1920 "pir.y"
    { (yyval.ival) = OP_LSR; ;}
    break;

  case 352:
#line 1921 "pir.y"
    { (yyval.ival) = OP_SHR; ;}
    break;

  case 353:
#line 1922 "pir.y"
    { (yyval.ival) = OP_SHL; ;}
    break;

  case 354:
#line 1923 "pir.y"
    { (yyval.ival) = OP_OR; ;}
    break;

  case 355:
#line 1924 "pir.y"
    { (yyval.ival) = OP_AND; ;}
    break;

  case 356:
#line 1925 "pir.y"
    { (yyval.ival) = OP_FDIV; ;}
    break;

  case 357:
#line 1926 "pir.y"
    { (yyval.ival) = OP_XOR; ;}
    break;

  case 358:
#line 1927 "pir.y"
    { (yyval.ival) = OP_ISEQ; ;}
    break;

  case 359:
#line 1928 "pir.y"
    { (yyval.ival) = OP_ISLE; ;}
    break;

  case 360:
#line 1929 "pir.y"
    { (yyval.ival) = OP_ISLT; ;}
    break;

  case 361:
#line 1930 "pir.y"
    { (yyval.ival) = OP_ISGE; ;}
    break;

  case 362:
#line 1931 "pir.y"
    { (yyval.ival) = OP_ISGT; ;}
    break;

  case 363:
#line 1932 "pir.y"
    { (yyval.ival) = OP_ISNE; ;}
    break;

  case 364:
#line 1938 "pir.y"
    { (yyval.ival) = OP_MUL; ;}
    break;

  case 365:
#line 1939 "pir.y"
    { (yyval.ival) = OP_MOD; ;}
    break;

  case 366:
#line 1940 "pir.y"
    { (yyval.ival) = OP_POW; ;}
    break;

  case 367:
#line 1941 "pir.y"
    { (yyval.ival) = OP_DIV; ;}
    break;

  case 368:
#line 1942 "pir.y"
    { (yyval.ival) = OP_FDIV; ;}
    break;

  case 369:
#line 1943 "pir.y"
    { (yyval.ival) = OP_BOR; ;}
    break;

  case 370:
#line 1944 "pir.y"
    { (yyval.ival) = OP_BAND; ;}
    break;

  case 371:
#line 1945 "pir.y"
    { (yyval.ival) = OP_BXOR; ;}
    break;

  case 372:
#line 1946 "pir.y"
    { (yyval.ival) = OP_CONCAT; ;}
    break;

  case 373:
#line 1947 "pir.y"
    { (yyval.ival) = OP_SHR; ;}
    break;

  case 374:
#line 1948 "pir.y"
    { (yyval.ival) = OP_SHL; ;}
    break;

  case 375:
#line 1949 "pir.y"
    { (yyval.ival) = OP_LSR; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4371 "pirparser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyscanner, lexer, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yyscanner, lexer, yymsg);
	  }
	else
	  {
	    yyerror (yyscanner, lexer, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, yyscanner, lexer);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp, yyscanner, lexer);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyscanner, lexer, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, yyscanner, lexer);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yyscanner, lexer);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1952 "pir.y"



/*

=head1 FUNCTIONS

=over 4

=item C<static constant *
fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b)>

Evaluates the expression C<a op b> and returns a constant node
containing the result value. Both C<a> and C<b> are integer values.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_i_i(yyscan_t yyscanner, int a, pir_math_operator op, int b) {
    int result = 0;

    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
            result = a % b;
            break;
        case OP_BOR:
            result = (a | b);
            break;
        case OP_BAND:
            result = (a & b);
            break;
        case OP_BXOR:
            result = (a ^ b);
            break;
        case OP_POW:
            /* is this cast safe? -- w.r.t. limits of int range. */
            result = (int)pow(a, b);
            break;
        case OP_CONCAT:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot concatenate operands of type 'int' and 'int'");
            break;
        case OP_LSR:
            /* from bits.ops: $1 = (INTVAL)((UINTVAL)$2 >> $3); */
            result = (int)((unsigned)a >> b);
            break;
        case OP_SHR:
            result = a >> b;
            break;
        case OP_SHL:
            result = a << b;
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            /* 7 // 2 -> 3, this is what integer division does (rounding down to whole integers) */
            result = a / b;
            break;
        case OP_XOR:
            result = a ^ b;
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        default:
            panic((lexer_state *)yypirget_extra(yyscanner),
                  "detected 'inc' or 'dec' in fold_i_i()");
            break;
    }
    return new_const(yypirget_extra(yyscanner), INT_TYPE, result);
}

/*

=item C<static constant *
fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b)>

Same as C<fold_i_i>, except C<a> is of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_n_i(yyscan_t yyscanner, double a, pir_math_operator op, int b) {
    double result = 0;
    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_SHR:
        case OP_SHL:
        case OP_LSR:
        case OP_XOR:
        case OP_CONCAT:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot apply binary operator '%s' to types 'num' and 'int'", opnames[op]);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        default:
            panic((lexer_state *)yypirget_extra(yyscanner),
                  "detected 'inc' or 'dec' in fold_n_i()");
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), NUM_TYPE, result);
}

/*

=item C<static constant *
fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b)>

Same as C<fold_i_i>, except C<b> is of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_i_n(yyscan_t yyscanner, int a, pir_math_operator op, double b) {
    double result = 0;

    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0!");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
        case OP_CONCAT:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot apply binary operator '%s' to types 'int' and 'num'", opnames[op]);
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        default:
            panic((lexer_state *)yypirget_extra(yyscanner),
                  "detected 'inc' or 'dec' in fold_i_n()");
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), NUM_TYPE, result);
}

/*

=item C<static constant *
fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b)>

Same as C<fold_i_i>, except that both C<a> and C<b> are of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_n_n(yyscan_t yyscanner, double a, pir_math_operator op, double b) {
    double result = 0;
    switch (op) {
        case OP_ADD:
            result = a + b;
            break;
        case OP_SUB:
            result = a - b;
            break;
        case OP_DIV:
            if (b == 0) /* throw exception ? */
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0");
            else
                result = a / b;
            break;
        case OP_MUL:
            result = a * b;
            break;
        case OP_POW:
            result = pow(a, b);
            break;
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_CONCAT:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
            yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                    "cannot apply binary operator '%s' to arguments of type number", opnames[op]);
            break;
        case OP_OR:
            result = (a || b);
            break;
        case OP_AND:
            result = (a && b);
            break;
        case OP_FDIV:
            if (b == 0)
                yypirerror(yyscanner, (lexer_state * const)yypirget_extra(yyscanner),
                           "cannot divide by 0");
            else
                result = floor(a / b);
            break;
        case OP_ISEQ:
            result = (a == b);
            break;
        case OP_ISLE:
            result = (a <= b);
            break;
        case OP_ISLT:
            result = (a < b);
            break;
        case OP_ISGE:
            result = (a >= b);
            break;
        case OP_ISGT:
            result = (a > b);
            break;
        case OP_ISNE:
            result = (a != b);
            break;

        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        default:
            break;
    }
    return new_const((lexer_state * const)yypirget_extra(yyscanner), NUM_TYPE, result);
}

/*

=item C<static constant *
fold_s_s(yyscan_t yyscanner, char *a, pir_math_operator op, char *b)>

Evaluate the expression C<a op b>, where both C<a> and C<b> are
strings. Only the concatenation and comparison operators are implemented;
other operators will result in an error.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static constant *
fold_s_s(yyscan_t yyscanner, NOTNULL(char const *a), pir_math_operator op, NOTNULL(char const *b)) {
    lexer_state *lexer = (lexer_state *)yypirget_extra(yyscanner);
    switch (op) {
        case OP_CONCAT:
            return new_const(lexer, STRING_TYPE, concat_strings(lexer, a, b));

        case OP_ADD:
        case OP_SUB:
        case OP_DIV:
        case OP_MUL:
        case OP_POW:
        case OP_MOD:
        case OP_BOR:
        case OP_BAND:
        case OP_BXOR:
        case OP_LSR:
        case OP_SHR:
        case OP_SHL:
        case OP_XOR:
        case OP_OR:
        case OP_AND:
        case OP_FDIV:
            yypirerror(yyscanner, lexer,
                    "cannot apply binary operator '%s' to arguments of type number", opnames[op]);
            return new_const(lexer, STRING_TYPE, a);

        case OP_ISEQ:
        case OP_ISLE:
        case OP_ISLT:
        case OP_ISGE:
        case OP_ISGT:
        case OP_ISNE:
            return new_const(lexer, INT_TYPE, (1 == evaluate_s_s(a, op, b)));


        /* OP_INC and OP_DEC are here only to keep the C compiler happy */
        default:
            panic(lexer, "detected 'inc' or 'dec' in fold_s_s()");
            break;
    }
    return NULL;
}

/*

=item C<static int
evaluate_i_i(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_i_i(int a, pir_rel_operator op, int b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_n_i(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_n_i(double a, pir_rel_operator op, int b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_i_n(int a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
Wrapper for C<evaluate_n_n>, which takes arguments of type double.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_i_n(int a, pir_rel_operator op, double b) {
    return evaluate_n_n(a, op, b);
}

/*

=item C<static int
evaluate_n_n(double a, pir_rel_operator op, double b)>

Compare C<a> with C<b> according to the relational operator C<op>.
C<op> can be C<<!=>>, C<<==>>, C<< < >>, C<< <= >>, C<< > >> or C<< >= >>.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_n_n(double a, pir_rel_operator op, double b) {
    switch (op) {
        case OP_NE:
            return (a != b);
        case OP_EQ:
            return (a == b);
        case OP_LT:
            return (a < b);
        case OP_LE:
            return (a <= b);
        case OP_GT:
            return (a > b);
        case OP_GE:
            return (a >= b);
        default:
            return 0;
    }
}

/*

=item C<static int
evaluate_s_s(char *a, pir_rel_operator op, char *b)>

Compare string C<a> with string C<b> using the operator C<op>.
The function uses C's C<strcmp> function. Based on that result,
which can be -1 (smaller), 0 (equal) or 1 (larger), a boolean
result is returned.
Note that C<strcmp()> should not be replaced by the C<STREQ> macro used throughout
Parrot source code; this function uses the result of C<strcmp()>.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_s_s(NOTNULL(char const * const a), pir_rel_operator op, NOTNULL(char const * const b)) {
    int result = strcmp(a, b); /* do /not/ use STREQ; we're interested in the result. */

    switch (op) {
        case OP_NE:
            return (result != 0);
        case OP_EQ:
            return (result == 0);
        case OP_LT:
            return (result < 0);
        case OP_LE:
            return (result <= 0);
        case OP_GT:
            return (result > 0);
        case OP_GE:
            return (result >= 0);
        default:
            return -1;
    }
}

/*

=item C<static int
evaluate_s(char * const s)>

Evaluate a string in boolean context; if the string's length is 0, it's false.
If the string equals "0", ".0", "0." or "0.0", it's false.
Otherwise, it's true.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_s(NOTNULL(char * const s)) {
    int strlen_s = strlen(s);

    if (strlen_s > 0) {
        if (strlen_s <= 3) { /* if strlen > 3, (max. nr of characters to represent "0")
                                no need to do expensive string comparison; it must be true. */
            if (STREQ(s, "0") || STREQ(s, ".0") || STREQ(s, "0.") || STREQ(s, "0.0"))
                return 0;
            else  /* short string but not equal to "0.0" or a variant */
                return 1;
        }
        else /* strlen > 3, so does not contain "0.0" or a variant */
            return 1;
    }
    else
        return 0; /* strlen is not larger than 0 */
}

/*

=item C<static int
evaluate_c(lexer_state * const lexer, constant * const c)>

Evaluate a constant node in boolean context; if the constant is numeric,
it must be non-zero to be true; if it's a string, C<evaluate_s> is invoked
to evaluate the string.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
evaluate_c(NOTNULL(lexer_state * const lexer), NOTNULL(constant * const c)) {
    switch (c->type) {
        case INT_TYPE:
            return (c->val.ival != 0);
        case NUM_TYPE:
            return (c->val.nval != 0);
        case STRING_TYPE:
            return evaluate_s(c->val.sval);
        default:
            panic(lexer, "impossible constant type in evaluate_c()");
            return 0;
    }
}

/*

=item C<static char *
concat_strings(lexer_state * const lexer, char const *a, char const *b)>

Concatenates two strings into a new buffer. The new string is returned.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static char *
concat_strings(NOTNULL(lexer_state * const lexer), NOTNULL(char const * a),
               NOTNULL(char const * b))
{
    int strlen_a = strlen(a);
    char *newstr = (char *)pir_mem_allocate_zeroed(lexer, (strlen_a + strlen(b) + 1)
                                                          * sizeof (char));
    strcpy(newstr, a);
    strcpy(newstr + strlen_a, b);
    a = b = NULL;
    return newstr;
}


/*

=item C<static void
create_if_instr(yyscan_t yyscanner, lexer_state *lexer, int invert, int hasnull,
                char * const name, char * const label)>

Create an C<if> or C<unless> instruction; if C<invert> is non-zero (true), the
C<if> instruction is inverted, effectively becoming C<unless>.

If C<hasnull> is non-zero (true), the C<if> instruction becomes C<if_null>; again,
if C<invert> is non-zero, the instruction becomes C<unless_null>.

C<name> is the name of the variable that is checked during this instruction

=cut

*/
static void
create_if_instr(yyscan_t yyscanner, NOTNULL(lexer_state * const lexer), int invert, int hasnull,
                NOTNULL(char const * const name),
                NOTNULL(char const * const label))
{
    /* try to find the symbol; if it was declared it will be found; otherwise emit an error. */
    symbol *sym = find_symbol(lexer, name);
    if (sym == NULL) {
        yypirerror(yyscanner, lexer, "symbol '%s' not declared'", name);
        /* create a dummy symbol so we can continue without segfaulting. */
        sym = new_symbol(lexer, name, UNKNOWN_TYPE);
    }
    /* if there was a keyword "null", use the if/unless_null instruction variants. */
    if (hasnull)
        set_instrf(lexer, invert ? "unless_null" : "if_null", "%T%I",
                   target_from_symbol(lexer, sym), label);
    else
        set_instrf(lexer, invert ? "unless" : "if", "%T%I", target_from_symbol(lexer, sym), label);

    /* set a flag on this instruction */
    set_instr_flag(lexer, INSTR_FLAG_IFUNLESS);
}

/*

=item C<static int
check_value(constant * const c, int val)>

Check whether the current value of the constant C<c> equals C<val>.
For our purposes, it is sufficient to check for integer values (including
a check against 1.0 or 0.0). If the values are indeed equal, true is returned,
false otherwise. If the constant is not numeric, it returns always false.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
check_value(NOTNULL(constant * const c), int val) {
    switch(c->type) {
        case INT_TYPE:
            return (c->val.ival == val);
        case NUM_TYPE:
            return (c->val.nval == val);
        default:
            break;
    }
    return 0;
}


/*

=item C<static void
reduce_strength(yyscan_t yyscanner, int newop, int op2_index)>

Do the actual strength reduction; the current op will be replaced by C<newop>.
The operands at position 1 and C<op2_index> will be retrieved. C<op2_index> indicates
the position of the second operand that must be retrieved.

When the current instruction is:

 add_i_i_ic

then C<op2_index> will be 1, indicating the second operand must be retrieved.
When the current instruction is:

 add_i_ic_i

then C<op2_index> will be 2, so that the two operands represented by target nodes
are retrieved (the operands indicated as C<i>, as opposed by C<ic>.)

Then, if the two operands (which are target nodes) are equal, then one of them can
be removed, so that the direction of the first operand will change from OUT to INOUT.


=cut

*/
static void
reduce_strength(yyscan_t yyscanner, int newop, int op2_index) {
    lexer_state *lexer = (lexer_state *)yypirget_extra(yyscanner);
    instruction *instr = CURRENT_INSTRUCTION(lexer);
    /* based on the signatures, we know for sure that the first and second operands are targets. */

    /* get the operands */
    expression *op1, *op2;

    PARROT_ASSERT(op2_index == 1 || op2_index == 2); /* count from 0, so 2nd or 3rd operand. */

    get_operands(lexer, BIT(0) | BIT(op2_index), &op1, &op2);

    /* check whether targets are equal */
    if (targets_equal(op1->expr.t, op2->expr.t)) {
        update_op(lexer, instr, newop);
        /* in that case, remove the second one */
        if (op2_index == 2)
            op2->next = op1;
        else
            op1->next = op2->next;
    }


}


/*

=item C<static int
convert_3_to_2_args(int opcode, int *second_op_index)>

Given the 3-operand version of a Parrot math op (in the parameter C<opcode>), get the
strength-reduced version with 2 operands. This is a low-level,
"dirty-job-but-someone-has-to-do-it" function, so other higher level functions
don't get cluttered. If a 2-operand version is specified, then that version is returned.

The second parameter C<second_op_index> will be assigned the index of the second target
parameter, if any (note this is an I<out> parameter, as it is passed by address).
So, in case of C<PARROT_OP_add_i_ic_i>, this will be 2, as that's the second target
(start counting from 0). In case of C<PARROT_OP_add_i_i_ic>, it's 1.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
convert_3_to_2_args(int opcode, NOTNULL(int *second_op_index)) {
    *second_op_index = 1; /* count from 0 */
    switch (opcode) {
        case PARROT_OP_add_i_i:
        case PARROT_OP_add_i_i_i:
            return PARROT_OP_add_i_i;

        case PARROT_OP_add_i_ic:
        case PARROT_OP_add_i_i_ic:
            return PARROT_OP_add_i_ic;

        case PARROT_OP_add_n_n_n:
            return PARROT_OP_add_n_n;
        case PARROT_OP_add_n_n_nc:
            return PARROT_OP_add_n_nc;

        case PARROT_OP_add_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_add_i_ic;

        case PARROT_OP_add_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_add_n_nc;

        case PARROT_OP_div_i_i_i:
            return PARROT_OP_div_i_i;
        case PARROT_OP_div_i_i_ic:
            return PARROT_OP_div_i_ic;
        case PARROT_OP_div_n_n_n:
            return PARROT_OP_div_n_n;
        case PARROT_OP_div_n_n_nc:
            return PARROT_OP_div_n_nc;

        case PARROT_OP_div_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_div_i_ic;
        case PARROT_OP_div_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_div_n_nc;

        /* shouldn't these be constant-folded? XXX Why do these ops exist?
        case PARROT_OP_div_i_ic_ic:
            return PARROT_OP_div_i_ic_ic;
        case PARROT_OP_div_n_nc_nc:
        */


        case PARROT_OP_mul_i_i_i:
            return PARROT_OP_mul_i_i;
        case PARROT_OP_mul_i_i_ic:
            return PARROT_OP_mul_i_ic;
        case PARROT_OP_mul_n_n_n:
            return PARROT_OP_mul_n_n;
        case PARROT_OP_mul_n_n_nc:
            return PARROT_OP_mul_n_nc;

        case PARROT_OP_mul_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_mul_i_ic;
        case PARROT_OP_mul_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_mul_n_nc;

        case PARROT_OP_fdiv_i_i_i:
            return PARROT_OP_fdiv_i_i;
        case PARROT_OP_fdiv_i_i_ic:
            return PARROT_OP_fdiv_i_ic;
        case PARROT_OP_fdiv_n_n_n:
            return PARROT_OP_fdiv_n_n;
        case PARROT_OP_fdiv_n_n_nc:
            return PARROT_OP_fdiv_n_nc;

        case PARROT_OP_fdiv_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_fdiv_n_nc;
        case PARROT_OP_fdiv_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_fdiv_i_ic;

        case PARROT_OP_sub_i_i_i:
            return PARROT_OP_sub_i_i;

        case PARROT_OP_sub_i_i_ic:
        case PARROT_OP_sub_i_ic:
            return PARROT_OP_sub_i_ic;

        case PARROT_OP_sub_n_n_n:
            return PARROT_OP_sub_n_n;
        case PARROT_OP_sub_n_n_nc:
        case PARROT_OP_sub_n_nc:
            return PARROT_OP_sub_n_nc;

        case PARROT_OP_sub_i_ic_i:
            *second_op_index = 2;
            return PARROT_OP_sub_i_ic;
        case PARROT_OP_sub_n_nc_n:
            *second_op_index = 2;
            return PARROT_OP_sub_n_nc;
        default:
            break;
    }
    return -1;
}

/*

=item C<static void
do_strength_reduction(yyscan_t yyscanner)>

Implement strength reduction for the math operators C<add>, C<sub>, C<mul>, C<div> and C<fdiv>.
If the current instruction is any of these, then the first two operands are checked; if both
are targets and are equal, the second operand is removed; this means that the first operand
will be an IN/OUT operand. For instance:

 add $I0, $I0, $I1

becomes:

 add $I0, $I1

and

 add $I0, 1

becomes:

 inc $I0

=cut

*/
static void
do_strength_reduction(yyscan_t yyscanner) {
    lexer_state *lexer = (lexer_state *)yypirget_extra(yyscanner);
    instruction *instr;
    expression  *arg1;
    expression  *arg2;
    int          newop;
    int          second_op_index;
    int          num_operands;

    /* don't do strength reduction if a "don't do" flag was set */
    if (TEST_FLAG(lexer->flags, LEXER_FLAG_NOSTRENGTHREDUCTION))
        return;

    instr = CURRENT_INSTRUCTION(lexer);

    newop = convert_3_to_2_args(instr->opcode, &second_op_index);

    /* if it's not a parrot math op, don't do strength reduction. */
    if (newop == -1)
        return;

    /* if there's more than 2 operands, do strength reduction. op_count also
     * counts the operand itself, so compare with 3, not 2.
     */
    if (instr->opinfo->op_count > 3)
        reduce_strength(yyscanner, newop, second_op_index);

    /* Now, try to simplify instruction even more. add_i_ic can become inc_i if
     * the second operand is 1, for instance. The instruction can be removed if
     * the second operand is 0.
     */
    get_operands(lexer, BIT(0) | BIT(1), &arg1, &arg2);

    switch (instr->opcode) {
        case PARROT_OP_add_i_ic:
            if (check_value(arg2->expr.c, 1)) {
                update_op(lexer, instr, PARROT_OP_inc_i);
                if (second_op_index == 2)
                    arg1->next = arg1;
                else
                    arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0)) {
                update_op(lexer, instr, PARROT_OP_noop); /* clear this one */
            }
            break;
        case PARROT_OP_add_n_nc:
            if (check_value(arg2->expr.c, 1)) {
                update_op(lexer, instr, PARROT_OP_inc_n);
                arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0))
                update_op(lexer, instr, PARROT_OP_noop); /* clear this one */
            break;
        case PARROT_OP_div_i_ic:
        case PARROT_OP_div_n_nc:
        case PARROT_OP_fdiv_i_ic:
        case PARROT_OP_fdiv_n_nc:
            if (check_value(arg2->expr.c, 1))  /* div $I0, 1 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            else if (check_value(arg2->expr.c, 0))  /* div $I0, 0 --> error */
                yypirerror(yyscanner, lexer, "cannot divide by 0");
            break;
        case PARROT_OP_mul_i_ic:
            if (check_value(arg2->expr.c, 1))  /* mul $I0, 1 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            else if (check_value(arg2->expr.c, 0)) { /* mul $I0, 0 --> null $I0 */
                update_op(lexer, instr, PARROT_OP_null_i);
                arg1->next = arg2->next;
            }
            break;
        case PARROT_OP_mul_n_nc:
            if (check_value(arg2->expr.c, 1)) { /* mul $I0, 1 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            }
            else if (check_value(arg2->expr.c, 0)) { /* mul $I0, 0 --> null $I0 */
                update_op(lexer, instr, PARROT_OP_null_n);
            }
            break;

        case PARROT_OP_sub_i_ic:
            if (check_value(arg2->expr.c, 1)) { /* sub $I0, 1 --> dec $I0 */
                update_op(lexer, instr, PARROT_OP_dec_i);
                if (second_op_index == 2)
                    arg1->next = arg1;
                else
                    arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0)) { /* sub $I0, 0 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            }
            break;
        case PARROT_OP_sub_n_nc:
            if (check_value(arg2->expr.c, 1)) { /* sub $N0, 1 --> dec $N0 */
                update_op(lexer, instr, PARROT_OP_dec_n);
                arg1->next = arg2->next;
            }
            else if (check_value(arg2->expr.c, 0))  /* sub $I0, 0 --> noop */
                update_op(lexer, instr, PARROT_OP_noop);
            break;
        default:
            break;
    }


}

/*

=item C<static void
check_first_arg_direction(yyscan_t yyscanner, char * const opname)>

This function checks the first argument's  direction of the op C<opname>.
If the direction is not C<OUT>, a syntax error is emitted. This function assumes
that C<opname> is a valid parrot op. This check is done to complain about
valid PIR syntax that is undesirable, such as:

 $S0 = print

which is another way of writing:

 print $S0

As the first argument C<$S0> is an C<IN> argument, the sugared version should
not be allowed.

=cut

*/
static void
check_first_arg_direction(yyscan_t yyscanner, NOTNULL(char const * const opname)) {
    int dir_first_arg;
    lexer_state * lexer = (lexer_state *)yypirget_extra(yyscanner);


    PARROT_ASSERT(CURRENT_INSTRUCTION(lexer));

    PARROT_ASSERT(CURRENT_INSTRUCTION(lexer)->opinfo);

    /* op_count also counts the instruction itself, so must be at least 2 */
    PARROT_ASSERT(CURRENT_INSTRUCTION(lexer)->opinfo->op_count >= 2);

    /* get the direction of the first argument */
    dir_first_arg = CURRENT_INSTRUCTION(lexer)->opinfo->dirs[0];

    /* direction cannot be IN or INOUT */
    if (dir_first_arg == PARROT_ARGDIR_IN)
        yypirerror(yyscanner, lexer, "cannot write first arg of op '%s' as a target "
                                  "(direction of argument is IN).", opname);

}




/*

=item C<static int
get_signature_length(expression * const e)>

Calculate the length of the signature for one operand; an operand is separated
from the instruction name or another operand through '_', which must also
be counted.

 set $I0, 42  --> set_i_ic

therefore, for $I0 (a target), return 1 for the type, 1 for the '_', and whatever
is needed for a key, if any, as in this example:

 set $P0[1] = "hi"  --> set_p_kic_sc

$P0 is a target, resulting in "_p", the key [1] is a key ('k') of type int ('i'),
and it's a constant ('c'). Add 1 for the '_'.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
get_signature_length(NOTNULL(expression * const e)) {
    switch (e->type) {
        case EXPR_TARGET:
            return 2 + ((e->expr.t->key != NULL) /* if there's a key on this target ... */
                       ? get_signature_length(e->expr.t->key->expr) + 1 /* ... get its length. */
                       : 0);
        case EXPR_CONSTANT:
            return 3;
        case EXPR_IDENT:
            return 3; /* 1 for '_', 1 for 'i', 1 for 'c' */
        case EXPR_KEY: /* for '_', 'k' */
            return 2 + get_signature_length(e->expr.k->expr);
        default:
            fprintf(stderr, "wrong expression typein get_signature_length()\n");
            break;
    }
    return 0;
}


/* the order of these letters match with the pir_type enumeration.
 * These are used for generating the full opname (set I0, 10 -> set_i_ic).
 */
static char const type_codes[5] = {'i', 'n', 's', 'p', '?'};


/*

=item C<static char *
write_signature(expression * const iter, char *instr_writer)>

Write the signature for the operand C<iter>, using the character
pointer C<instr_writer>. When the operand is an indexed target node
(in other words, it has a key node), this function is invoked recursively
passing the key as an argument.

This function returns the updated character pointer (due to pass-by-value
semantics of the C calling conventions).

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static char *
write_signature(NOTNULL(expression * const iter), NOTNULL(char *instr_writer)) {
    switch (iter->type) {
        case EXPR_TARGET:
            *instr_writer++ = type_codes[iter->expr.t->type];

            if (iter->expr.t->key) {
                *instr_writer++ = '_';
                *instr_writer++ = 'k';
                if ((iter->expr.t->key->expr->type == EXPR_TARGET)
                    && (iter->expr.t->key->expr->expr.t->type == PMC_TYPE)) {
                    /* the key is a target, and its type is a PMC. In that case, do not
                     * print the signature; 'kp' is not valid.
                     */
                }
                else {
                    if ((iter->expr.t->key->expr->type == EXPR_TARGET)
                       & (iter->expr.t->key->expr->expr.t->type == INT_TYPE)) /* $I register */
                    {
                       *instr_writer++ = 'i';
                    }
                    else
                    /*
                    instr_writer = write_signature(iter->expr.t->key->expr, instr_writer);
                    */
                    switch (iter->expr.t->key->expr->type) {
                        case EXPR_CONSTANT:
                            *instr_writer++ = 'c';
                            break;
                        default:
                            fprintf(stderr, "write_signature: non-constant key\n");
                            instr_writer = write_signature(iter->expr.t->key->expr, instr_writer);
                            break;
                    }
                }
            }
            break;
        case EXPR_CONSTANT:
            *instr_writer++ = type_codes[iter->expr.c->type];
            *instr_writer++ = 'c';
            break;
        case EXPR_IDENT: /* used for labels; these will be converted to (i)nteger (c)onstants*/
            *instr_writer++ = 'i';
            *instr_writer++ = 'c';
            break;
        case EXPR_KEY:
            *instr_writer++ = 'k';

            instr_writer    = write_signature(iter->expr.k->expr, instr_writer);
            /*

            switch (iter->expr.k->expr->type) {
                case EXPR_CONSTANT:
                   *instr_writer++ = 'c';
                   break;
                default:
                    fprintf(stderr, "write_signature: non-constant key\n");
                    instr_writer = write_signature(iter->expr.k->expr, instr_writer);
                    break;
            }
            */

            break;
        default:
            fprintf(stderr, "wrong expression type in write_signature()\n");
            break;
    }
    return instr_writer;
}


/*

=item C<static char *
get_signatured_opname(instruction * const instr)>

Returns the full opname of the instruction C<name>; the signature
of the opname is based on the operands, some examples are shown
below:

 set I0, 10        --> set_i_ic
 print "hi"        --> print_sc
 set P0[1], 3.14   --> set_p_kic_nc

For each operand, an underscore is added; then for the types
int, num, string or pmc, an 'i', 'n', 's' or 'p' is added
respectively. If the operand is a constant, a 'c' suffic is added.

If the operand is a key of something, a 'k' prefix is added.

=cut

*/
PARROT_WARN_UNUSED_RESULT
PARROT_CANNOT_RETURN_NULL
static char *
get_signatured_opname(NOTNULL(lexer_state * const lexer), NOTNULL(instruction * const instr)) {
    size_t      fullname_length;
    char       *fullname;
    char       *instr_writer;
    expression *iter         = instr->operands;
    unsigned    num_operands = 0;

    /* get length of short opname (and add 1 for the NULL character) */
    fullname_length = strlen(instr->opname) + 1;

    /* for each operand, calculate the length of the signature (for that op.)
     * and add it to the full length.
     */
    if (iter) {
        iter = iter->next;
        do {
            int keylength    = get_signature_length(iter);
            /* printf("keylength of operand was: %d\n", keylength);
            */
            fullname_length += keylength;
            iter             = iter->next;
            ++num_operands;
        }
        while (iter != instr->operands->next);
    }

    /* now we know how long the fullname will be, allocate enough memory. */
    fullname = (char *)pir_mem_allocate_zeroed(lexer, fullname_length * sizeof (char));

    /* copy the short name into fullname buffer, and set instr_writer to
     * the character after that.
     */
    strcpy(fullname, instr->opname);
    instr_writer = fullname + strlen(instr->opname);

    /* now iterate again over all operands, and codify them into the fullname.
     * As we counted the number of operands, this loop can be written a bit simpler.
     */
    iter = instr->operands;
    while (num_operands-- > 0) {
        iter            = iter->next;
        *instr_writer++ = '_'; /* separate each operand code by a '_' */
        instr_writer    = write_signature(iter, instr_writer);
    }

    return fullname;
}

/*

XXX temp. solution.

*/
PARROT_WARN_UNUSED_RESULT
static double
get_constant_value(constant * const c) {
    PARROT_ASSERT(c->type == INT_TYPE || c->type == NUM_TYPE);

    switch (c->type) {
        case INT_TYPE:
            return c->val.ival;
        case NUM_TYPE:
            return c->val.nval;
        default:
            return 0;
    }
}


/*

XXX is this really needed? why not just disallow lt 10, 20, L ?

*/
static void
flow_op_const_fold(yyscan_t yyscanner, int flow_op) {
    lexer_state * const lexer = (lexer_state * const)yypirget_extra(yyscanner);
    expression *arg1, *arg2, *arg3;
    int result;
    instruction * instr = CURRENT_INSTRUCTION(lexer);
    double arg1val, arg2val;

    PARROT_ASSERT(instr);

    get_operands(lexer, BIT(0) | BIT(1) | BIT(2), &arg1, &arg2, &arg3);
    /*
    arg1 = get_operand(lexer, 1);
    arg2 = get_operand(lexer, 2);
    arg3 = get_operand(lexer, 3);
    */

    PARROT_ASSERT(arg1);
    PARROT_ASSERT(arg2);

    arg1val = get_constant_value(arg1->expr.c);
    arg2val = get_constant_value(arg2->expr.c);

    result = evaluate_n_n(arg1val, flow_op, arg2val);

    PARROT_ASSERT(result == TRUE || result == FALSE);

    if (result == FALSE) {
        update_op(lexer, instr, PARROT_OP_noop); /* XXX maybe delete/clear such instructions. */
    }
    else { /* true */
        update_op(lexer, instr, PARROT_OP_branch_ic);
        instr->operands = NULL;
        push_operand(lexer, arg3);
        arg3->next = arg3;
    }




}

/*

=item C<static void
math_op_const_fold(yyscan_t yyscanner, int folding_op, int new_op)>

Do constant folding for the math operator C<folding_op>; this can be
OP_ADD, OP_SUB, or OP_MUL. This function takes the 2nd and 3rd operands
and computes the result based on C<folding_op>. The 2nd and 3rd operands
are removed from the instruction, and the computed result is added as a new
2nd operand.

XXX really needed? Why not just disallow add $I0, 10, 20 ??

=cut

*/
static void
math_op_const_fold(yyscan_t yyscanner, int folding_op, int new_op) {
    expression  * arg1,
                * arg2,
                * arg3;
    lexer_state * const lexer = (lexer_state * const)yypirget_extra(yyscanner);
    instruction * const instr = CURRENT_INSTRUCTION(lexer);
    constant    *       result;
    double              arg1val,
                        arg2val;
    pir_type type1, type2;

    update_op(lexer, instr, new_op);

    /* now do constant-folding on the 2nd and 3rd arguments. */

    get_operands(lexer, BIT(0) | BIT(1) | BIT(2), &arg1, &arg2, &arg3);


    /* based on the constant types, retrieve the values from the right union fields;
     * note that fold_i_i must be called only when both types are INT_TYPE; adding
     * int + float will result in float anyway.
     * This code is not very nice, but it's straightforward, and unfortunately necessary.
     */
    type1 = arg2->expr.c->type;
    type2 = arg3->expr.c->type;

    if (type1 == NUM_TYPE || type2 == NUM_TYPE) {
        double val1;
        double val2;

        if (type1 == NUM_TYPE)
            val1 = arg2->expr.c->val.nval;
        else
            val1 = arg2->expr.c->val.ival;

        if (type2 == NUM_TYPE)
            val2 = arg3->expr.c->val.nval;
        else
            val2 = arg3->expr.c->val.ival;

        result = fold_n_n(yyscanner, val1, folding_op, val2);
    }
    else { /* both are not NUM_TYPE */
        result = fold_i_i(yyscanner, arg2->expr.c->val.ival, folding_op, arg3->expr.c->val.ival);
    }



    /* remove all operands on the current instruction */
    CURRENT_INSTRUCTION(lexer)->operands = NULL;
    /* operands are circular linked lists; arg1 is the only operand to be kept, so update
     * its next pointer; otherwise, the old operands are still there through this link.
     */
    arg1->next = arg1;

    /* add the first operand, and the result for the "set" op. */
    push_operand(lexer, arg1);
    push_operand(lexer, expr_from_const(lexer, result));

}

/*

=item C<static int
get_opinfo(yyscan_t yyscanner)>

Compute the signatured opname from the instruction name and its arguments.
Based on this signature, the opcode is retrieved. If the opcode cannot
be found (i.e., it's -1), then a check is done for some special math ops;
C<add_i_ic_ic> and the like do not exist, but instead should be replaced
by C<set_i_ic> (and the like). If it's not one of these special cases,
then that means the op is not valid, and an error message will be reported.

=cut

*/
PARROT_IGNORABLE_RESULT
static int
get_opinfo(yyscan_t yyscanner) {
    lexer_state * const lexer = (lexer_state * const)yypirget_extra(yyscanner);
    instruction * const instr = CURRENT_INSTRUCTION(lexer);

    char * const fullopname = get_signatured_opname(lexer, instr);
    int          opcode;

    /* find the numeric opcode for the signatured op. */
    opcode = lexer->interp->op_lib->op_code(fullopname, 1);

    /* if the op does not exist, it might be one of the math. ops that need
     * constant folding.
     */
    if (opcode < 0) {

        /* XXX REMOVE THESE; THESE OPS SHOULD BE REAL OPS; DON"T FAKE THEM */
        /* do these tests only if opcode was not found; this way, the checks are not done
         * for all instructions, but only if the instruction was not found.
         */
        if (STREQ(fullopname, "add_i_ic_ic")) {
            math_op_const_fold(yyscanner, OP_ADD, PARROT_OP_set_i_ic);
            return TRUE;
        }
        else if (STREQ(fullopname, "add_n_ic_ic")) {
            math_op_const_fold(yyscanner, OP_ADD, PARROT_OP_set_n_ic);
            return TRUE;
        }
        else if (STREQ(fullopname, "add_n_nc_nc")) {
            math_op_const_fold(yyscanner, OP_ADD, PARROT_OP_set_n_nc);
            return TRUE;
        }
        else if (STREQ(fullopname, "sub_i_ic_ic")) {
            math_op_const_fold(yyscanner, OP_SUB, PARROT_OP_set_i_ic);
            return TRUE;
        }
        else if (STREQ(fullopname, "sub_n_nc_nc")) {
            math_op_const_fold(yyscanner, OP_SUB, PARROT_OP_set_n_nc);
            return TRUE;
        }
        else if (STREQ(fullopname, "sub_n_ic_ic")) {
            math_op_const_fold(yyscanner, OP_SUB, PARROT_OP_set_n_ic);
            return TRUE;
        }
        else if (STREQ(fullopname, "mul_i_ic_ic")) {
            math_op_const_fold(yyscanner, OP_MUL, PARROT_OP_set_i_ic);
            return TRUE;
        }
        else if (STREQ(fullopname, "lt_ic_ic_ic")) {
            flow_op_const_fold(yyscanner, OP_LT);
            return TRUE;
        }
        else {
            yypirerror(yyscanner, lexer, "'%s' is not a parrot op", fullopname);
            return FALSE;
        }
    }
    else {
        update_op(lexer, instr, opcode);
        return TRUE;
    }

}

/*

=item C<static void
check_op_args_for_symbols(yyscan_t yyscanner)>

Check the arguments of the current instruction. First, the number of expected arguments
is checked against the specified number of arguments. Then, for each argument, if the
particular argument should not be a label (instructions can take LABEL operands), and
if the argument is a target node, then the argument must be a declared symbol. If it
is not, an error message is given.

If there are errors, FALSE is returned; if successful, TRUE is returned.

=cut

*/
PARROT_WARN_UNUSED_RESULT
static int
check_op_args_for_symbols(yyscan_t yyscanner) {
    lexer_state * const lexer = (lexer_state * const)yypirget_extra(yyscanner);
    struct op_info_t  * opinfo;
    unsigned short      i;
    short               opcount;
    unsigned            num_operands;
    char               *fullopname;
    int                 opcode;
    int                 result;
    int                 label_bitmask = 0; /* an int is at least 32 bits;
                                            * an op cannot have more than 8 operands, as defined in
                                            * include/parrot/op.h:18, so an int is good enough for
                                            * a bit mask to cover all operands.
                                            */

    /* iterate over all operands to set the type and PASM register on all target nodes, if any */
    num_operands = get_operand_count(lexer);
    for (i = 0; i < num_operands; i++) {
        expression *operand = get_operand(lexer, i + 1); /* get_operand counts from 1 */
        if (operand->type == EXPR_TARGET) { /* if it is a target... */

            if (!TEST_FLAG(operand->expr.t->flags, TARGET_FLAG_IS_REG)) { /* not a register */
                symbol *sym = find_symbol(lexer, target_name(operand->expr.t));

                if (sym) { /* copy the type and PASM register from the symbol */
                    operand->expr.t->type  = sym->type;
                    operand->expr.t->color = sym->color;
                }
                else { /* it's not a declared symbol; for now assume it's a label */
                    if (operand->type == EXPR_TARGET) {
                        /* if it's not a register (otherwise, no need to check) */
                        if (!TEST_FLAG(operand->expr.t->flags, TARGET_FLAG_IS_REG)) {
                            /* convert the target to an identifier */
                            operand->expr.id = target_name(operand->expr.t);
                            operand->type    = EXPR_IDENT;

                            /* set a bit in the bitmask indicating it is assumed to be a label;
                             * this prevents us doing a symbol lookup in the second loop; a
                             * bitmask is faster.
                             */
                            SET_BIT(label_bitmask, BIT(i));
                        }
                    }
                }
            }
        }
    }


    /* make sure the current instruction gets a pointer to the relevant opinfo entry */
    result = get_opinfo(yyscanner);

    /* if failure, return false */
    if (result == FALSE)
        return FALSE;
    else {
        int i = 0;
        expression *iter = CURRENT_INSTRUCTION(lexer)->operands;
        opinfo           = CURRENT_INSTRUCTION(lexer)->opinfo;


        PARROT_ASSERT(opinfo);

        opcount = opinfo->op_count - 1; /* according to op.h, opcount also counts the op itself. */

        PARROT_ASSERT(opcount >= 0);

        if (iter == NULL)
            return TRUE;

        iter = iter->next; /* go to first */


        /* iterate over all operands */
        while (iter != CURRENT_INSTRUCTION(lexer)->operands->next) {
            if (opinfo->labels[i] == 0) {
                /* test the bitmask; if we expected this operand was a label, but now we found out
                 * through opinfo that it's not supposed to be a label at this position, so emit
                 * an error.
                 */
                if (TEST_BIT(label_bitmask, BIT(i))) {
                    yypirerror(yyscanner, lexer, "symbol '%s' is not declared", iter->expr.id);
                    return FALSE;
                }
            }

            iter = iter->next;
            ++i;
        }
    }
    return TRUE;
}

/*

=back

=cut

*/


/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4:
 */


