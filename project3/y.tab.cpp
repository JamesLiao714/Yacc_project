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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LE = 258,
     GE = 259,
     EQ = 260,
     NEQ = 261,
     AND = 262,
     OR = 263,
     BOOL = 264,
     BREAK = 265,
     CHAR = 266,
     CASE = 267,
     CLASS = 268,
     CONTINUE = 269,
     DEF = 270,
     DO = 271,
     ELSE = 272,
     EXIT = 273,
     FLOAT = 274,
     FOR = 275,
     IF = 276,
     INT = 277,
     NUL = 278,
     OBJECT = 279,
     PRINT = 280,
     PRINTLN = 281,
     REPEAT = 282,
     RETURN = 283,
     STRING = 284,
     TO = 285,
     TYPE = 286,
     VAL = 287,
     VAR = 288,
     WHILE = 289,
     READ = 290,
     FALSE = 291,
     TRUE = 292,
     ID = 293,
     BOOL_CONST = 294,
     INT_CONST = 295,
     REAL_CONST = 296,
     STR_CONST = 297,
     CHAR_CONST = 298,
     UMINUS = 299
   };
#endif
/* Tokens.  */
#define LE 258
#define GE 259
#define EQ 260
#define NEQ 261
#define AND 262
#define OR 263
#define BOOL 264
#define BREAK 265
#define CHAR 266
#define CASE 267
#define CLASS 268
#define CONTINUE 269
#define DEF 270
#define DO 271
#define ELSE 272
#define EXIT 273
#define FLOAT 274
#define FOR 275
#define IF 276
#define INT 277
#define NUL 278
#define OBJECT 279
#define PRINT 280
#define PRINTLN 281
#define REPEAT 282
#define RETURN 283
#define STRING 284
#define TO 285
#define TYPE 286
#define VAL 287
#define VAR 288
#define WHILE 289
#define READ 290
#define FALSE 291
#define TRUE 292
#define ID 293
#define BOOL_CONST 294
#define INT_CONST 295
#define REAL_CONST 296
#define STR_CONST 297
#define CHAR_CONST 298
#define UMINUS 299




/* Copy the first part of user declarations.  */
#line 1 "parser.y"


#include <iostream>
#include "symbols.hpp"
#include "lex.yy.cpp"
#include "codeGen.hpp"

#define Trace(t) if (Opt_P) if (Opt_P) cout<< t << endl;
 


string filename;
ofstream out;

int Opt_P = 0;

int method_num = 0;
int main_num = 0;

void yyerror(string s);

SymbolTableList symbols;
vector<vector<idInfo> > functions;



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
#line 28 "parser.y"
{
  int ival;
  double dval;
  bool bval;
  char cval;
  string *sval;
  int type;
  idInfo* info;
}
/* Line 193 of yacc.c.  */
#line 220 "y.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 233 "y.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    61,     2,     2,
      58,    59,    49,    47,    60,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
      45,    55,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    12,    15,    18,    19,    26,    31,
      38,    43,    48,    51,    59,    61,    63,    65,    67,    69,
      71,    73,    75,    77,    79,    82,    84,    85,    86,    99,
     101,   102,   106,   108,   112,   115,   116,   119,   121,   123,
     125,   127,   129,   131,   135,   142,   143,   147,   148,   152,
     155,   158,   160,   161,   167,   168,   176,   177,   178,   182,
     184,   186,   187,   188,   196,   197,   198,   211,   212,   218,
     220,   221,   225,   227,   229,   231,   233,   238,   240,   243,
     247,   251,   255,   259,   263,   267,   271,   275,   279,   283,
     287,   290,   294,   298
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    24,    38,    64,    52,    65,    70,
      53,    -1,    67,    65,    -1,    66,    65,    -1,    -1,    32,
      38,    54,    68,    55,   100,    -1,    32,    38,    55,   100,
      -1,    33,    38,    54,    68,    55,   100,    -1,    33,    38,
      54,    68,    -1,    33,    38,    55,   100,    -1,    33,    38,
      -1,    33,    38,    54,    68,    56,   100,    57,    -1,    22,
      -1,    11,    -1,    19,    -1,     9,    -1,    29,    -1,    40,
      -1,    41,    -1,    39,    -1,    42,    -1,    43,    -1,    71,
      70,    -1,    71,    -1,    -1,    -1,    15,    38,    72,    58,
      74,    59,    77,    52,    73,    65,    78,    53,    -1,    75,
      -1,    -1,    76,    60,    75,    -1,    76,    -1,    38,    54,
      68,    -1,    54,    68,    -1,    -1,    79,    78,    -1,    79,
      -1,    80,    -1,    83,    -1,    85,    -1,    90,    -1,    95,
      -1,    38,    55,   100,    -1,    38,    56,   100,    57,    55,
     100,    -1,    -1,    81,    25,   100,    -1,    -1,    82,    26,
     100,    -1,    28,   100,    -1,    35,    38,    -1,    28,    -1,
      -1,    52,    84,    65,    78,    53,    -1,    -1,    21,    58,
     100,    59,    86,    89,    87,    -1,    -1,    -1,    17,    88,
      89,    -1,    80,    -1,    83,    -1,    -1,    -1,    34,    58,
      91,   100,    92,    59,    89,    -1,    -1,    -1,    20,    58,
      93,    38,    45,    48,    40,    30,    40,    94,    59,    89,
      -1,    -1,    38,    96,    58,    97,    59,    -1,    98,    -1,
      -1,    99,    60,    98,    -1,    99,    -1,   100,    -1,    38,
      -1,    69,    -1,    38,    56,   100,    57,    -1,    95,    -1,
      48,   100,    -1,   100,    49,   100,    -1,   100,    50,   100,
      -1,   100,    61,   100,    -1,   100,    47,   100,    -1,   100,
      48,   100,    -1,   100,    45,   100,    -1,   100,     3,   100,
      -1,   100,     5,   100,    -1,   100,     4,   100,    -1,   100,
      46,   100,    -1,   100,     6,   100,    -1,    44,   100,    -1,
     100,     7,   100,    -1,   100,     8,   100,    -1,    58,   100,
      59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    69,    88,    89,    90,    94,   105,   117,
     139,   156,   173,   187,   199,   203,   207,   211,   215,   222,
     226,   230,   234,   238,   246,   247,   252,   261,   251,   292,
     293,   297,   298,   302,   314,   319,   325,   326,   330,   331,
     332,   333,   334,   340,   357,   370,   370,   383,   383,   394,
     399,   405,   415,   414,   429,   428,   440,   442,   441,   447,
     448,   455,   459,   454,   469,   473,   468,   492,   491,   517,
     518,   522,   523,   527,   533,   552,   563,   572,   573,   596,
     613,   628,   642,   665,   688,   714,   740,   770,   796,   824,
     850,   862,   877,   893
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LE", "GE", "EQ", "NEQ", "AND", "OR",
  "BOOL", "BREAK", "CHAR", "CASE", "CLASS", "CONTINUE", "DEF", "DO",
  "ELSE", "EXIT", "FLOAT", "FOR", "IF", "INT", "NUL", "OBJECT", "PRINT",
  "PRINTLN", "REPEAT", "RETURN", "STRING", "TO", "TYPE", "VAL", "VAR",
  "WHILE", "READ", "FALSE", "TRUE", "ID", "BOOL_CONST", "INT_CONST",
  "REAL_CONST", "STR_CONST", "CHAR_CONST", "'!'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "UMINUS", "'{'", "'}'", "':'", "'='", "'['", "']'",
  "'('", "')'", "','", "'%'", "$accept", "program", "@1", "opt_var_dec",
  "const_dec", "var_dec", "var_type", "const_value", "opt_func_dec",
  "func_dec", "@2", "@3", "opt_args", "args", "arg", "opt_ret_type",
  "opt_statement", "statement", "simple", "@4", "@5", "block", "@6",
  "conditional", "@7", "else_statement", "@8", "B_or_S", "loop", "@9",
  "@10", "@11", "@12", "func_invocation", "@13", "opt_comma_separated",
  "comma_separated", "func_expression", "expression", 0
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
     295,   296,   297,   298,    33,    60,    62,    43,    45,    42,
      47,   299,   123,   125,    58,    61,    91,    93,    40,    41,
      44,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    64,    63,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    70,    70,    72,    73,    71,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    81,    80,    82,    80,    80,
      80,    80,    84,    83,    86,    85,    87,    88,    87,    89,
      89,    91,    92,    90,    93,    94,    90,    96,    95,    97,
      97,    98,    98,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     2,     2,     0,     6,     4,     6,
       4,     4,     2,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     0,    12,     1,
       0,     3,     1,     3,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     3,     6,     0,     3,     0,     3,     2,
       2,     1,     0,     5,     0,     7,     0,     0,     3,     1,
       1,     0,     0,     7,     0,     0,    12,     0,     5,     1,
       0,     3,     1,     1,     1,     1,     4,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,     0,
       6,     6,     0,    12,     0,     0,    25,     5,     4,     0,
       0,     0,     0,    26,     3,    24,    17,    15,    16,    14,
      18,     0,    74,    21,    19,    20,    22,    23,     0,     0,
       0,    75,    77,     8,    10,    11,     0,     0,     0,     0,
      90,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     7,
       0,    70,    93,    85,    87,    86,    89,    91,    92,    84,
      88,    82,    83,    79,    80,    81,     9,     0,     0,     0,
      29,    32,    76,     0,    69,    72,    73,    13,     0,    35,
       0,    68,     0,    33,     0,     0,    31,    71,    34,    27,
       6,    45,     0,     0,    51,     0,     0,    67,    52,     0,
      37,    38,     0,     0,    39,    40,    41,    42,    64,     0,
      49,    61,    50,     0,     0,     6,    28,    36,     0,     0,
       0,     0,     0,    43,     0,    45,    46,    48,     0,    54,
      62,     0,     0,     0,    45,     0,     0,    53,     0,     0,
      59,    60,    56,    45,    44,     0,    57,    55,    63,     0,
      45,    65,    58,     0,    45,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     9,    10,    11,    31,    41,    15,    16,
      46,   110,    89,    90,    91,   105,   119,   120,   160,   122,
     123,   161,   135,   125,   154,   167,   170,   162,   126,   142,
     155,   140,   173,    42,    49,    93,    94,    95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
      -2,    27,    63,  -120,  -120,    15,    -8,    31,    46,    71,
      -8,    -8,     6,    25,    72,    59,    71,  -120,  -120,    82,
     221,    82,   221,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,    61,   -35,  -120,  -120,  -120,  -120,  -120,   221,   221,
     221,  -120,  -120,   157,    50,   157,    62,   221,   221,    67,
      26,    60,     3,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,    88,   157,
       9,   221,  -120,   166,   166,   166,   166,    26,   174,   166,
     166,    74,    74,    60,    60,   157,   157,    92,    73,    84,
    -120,    85,  -120,    87,  -120,    90,   157,  -120,    82,    93,
      88,  -120,   221,  -120,    82,    96,  -120,  -120,  -120,  -120,
      -8,   216,    86,    94,   221,   108,   113,    52,  -120,   114,
     205,  -120,   143,   144,  -120,  -120,  -120,  -120,  -120,   221,
     157,  -120,  -120,   221,   221,    -8,  -120,  -120,   221,   221,
     131,   126,   221,   157,   151,   216,   157,   157,   137,  -120,
     157,   128,   133,   136,   220,   129,   221,  -120,   149,    52,
    -120,  -120,   173,   220,   157,   161,  -120,  -120,  -120,   152,
     220,  -120,  -120,   134,   220,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,    -7,  -120,  -120,   -16,  -120,   178,  -120,
    -120,  -120,  -120,    95,  -120,  -120,  -119,  -120,   -43,  -120,
    -120,   -30,  -120,  -120,  -120,  -120,  -120,   -85,  -120,  -120,
    -120,  -120,  -120,   -28,  -120,  -120,   107,  -120,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -68
static const yytype_int16 yytable[] =
{
      43,   137,    45,    17,    18,    44,    53,    54,    55,    56,
      57,    58,    53,    54,    55,    56,    57,    58,    50,    51,
      52,    48,     1,   -67,     7,     8,   152,    69,    70,    53,
      54,    55,    56,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    59,    60,
      61,    62,    63,    64,    59,    60,    61,    62,    63,    64,
      19,    20,    72,     4,    65,     3,    92,     6,   121,    12,
      65,    59,    60,    61,    62,    63,    64,   121,   168,    21,
      22,   124,   103,   127,    13,   172,    14,    65,   108,   175,
     124,    26,   127,    27,   130,    53,    54,    55,    56,    57,
      58,    28,   121,   111,    29,    66,    67,   133,   134,   141,
      23,    30,    24,   143,   144,   124,    47,   127,   146,   147,
      68,    65,   150,    63,    64,    71,    88,    98,   145,    53,
      54,    55,    56,    57,    58,    65,   164,    59,    60,    61,
      62,    63,    64,    99,   128,   100,   101,   104,   109,    97,
     102,   132,   129,    65,    53,    54,    55,    56,    57,    58,
      53,    54,    55,    56,    57,    58,   131,   136,   138,   148,
     139,    59,    60,    61,    62,    63,    64,    53,    54,    55,
      56,    57,   153,   156,   158,   149,   157,    65,   163,   165,
     166,   169,   171,   174,    25,   106,    59,    60,    61,    62,
      63,    64,    59,    60,    61,    62,    63,    64,   151,   107,
       0,     0,    65,    61,    62,    63,    64,     0,    65,    59,
      60,    61,    62,    63,    64,   112,   113,    65,     0,     0,
     -45,   -47,     0,   114,     0,    65,   112,   113,     0,   115,
     116,     0,   -47,   117,   114,     0,   -47,     0,   114,     0,
     115,   116,     0,     0,   117,   116,     0,   118,   159,    32,
      33,    34,    35,    36,    37,    38,     0,     0,   118,    39,
       0,     0,   118,     0,     0,     0,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      20,   120,    22,    10,    11,    21,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    38,    39,
      40,    56,    24,    58,    32,    33,   145,    47,    48,     3,
       4,     5,     6,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    45,    46,
      47,    48,    49,    50,    45,    46,    47,    48,    49,    50,
      54,    55,    59,     0,    61,    38,    57,    52,   111,    38,
      61,    45,    46,    47,    48,    49,    50,   120,   163,    54,
      55,   111,    98,   111,    38,   170,    15,    61,   104,   174,
     120,     9,   120,    11,   114,     3,     4,     5,     6,     7,
       8,    19,   145,   110,    22,    55,    56,    55,    56,   129,
      38,    29,    53,   133,   134,   145,    55,   145,   138,   139,
      58,    61,   142,    49,    50,    58,    38,    54,   135,     3,
       4,     5,     6,     7,     8,    61,   156,    45,    46,    47,
      48,    49,    50,    59,    58,    60,    59,    54,    52,    57,
      60,    38,    58,    61,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,     8,    58,    53,    25,    38,
      26,    45,    46,    47,    48,    49,    50,     3,     4,     5,
       6,     7,    45,    55,    48,    59,    53,    61,    59,    40,
      17,    30,    40,    59,    16,   100,    45,    46,    47,    48,
      49,    50,    45,    46,    47,    48,    49,    50,    57,   102,
      -1,    -1,    61,    47,    48,    49,    50,    -1,    61,    45,
      46,    47,    48,    49,    50,    20,    21,    61,    -1,    -1,
      25,    26,    -1,    28,    -1,    61,    20,    21,    -1,    34,
      35,    -1,    26,    38,    28,    -1,    26,    -1,    28,    -1,
      34,    35,    -1,    -1,    38,    35,    -1,    52,    38,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    52,    48,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    63,    38,     0,    64,    52,    32,    33,    65,
      66,    67,    38,    38,    15,    70,    71,    65,    65,    54,
      55,    54,    55,    38,    53,    70,     9,    11,    19,    22,
      29,    68,    38,    39,    40,    41,    42,    43,    44,    48,
      58,    69,    95,   100,    68,   100,    72,    55,    56,    96,
     100,   100,   100,     3,     4,     5,     6,     7,     8,    45,
      46,    47,    48,    49,    50,    61,    55,    56,    58,   100,
     100,    58,    59,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,    38,    74,
      75,    76,    57,    97,    98,    99,   100,    57,    54,    59,
      60,    59,    60,    68,    54,    77,    75,    98,    68,    52,
      73,    65,    20,    21,    28,    34,    35,    38,    52,    78,
      79,    80,    81,    82,    83,    85,    90,    95,    58,    58,
     100,    58,    38,    55,    56,    84,    53,    78,    25,    26,
      93,   100,    91,   100,   100,    65,   100,   100,    38,    59,
     100,    57,    78,    45,    86,    92,    55,    53,    48,    38,
      80,    83,    89,    59,   100,    40,    17,    87,    89,    30,
      88,    40,    89,    94,    59,    89
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
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
#line 70 "parser.y"
    {
                          ProgramStart();
                          Trace("program(object)");
                        }
    break;

  case 3:
#line 75 "parser.y"
    {
                          if(main_num == 0){
                              yyerror("no main");;
                          }
                          symbols.pop();

                          ProgramEnd();
                        }
    break;

  case 7:
#line 95 "parser.y"
    {
                          Trace("constant declaration(type)");

                          if (!isConst(*(yyvsp[(6) - (6)].info))) yyerror("expression not constant value"); /*const check*/
                          if ((yyvsp[(4) - (6)].type) != (yyvsp[(6) - (6)].info)->type) yyerror("type not match"); /*type parameter check*/

                          (yyvsp[(6) - (6)].info)->flag = constVariableFlag;
                          (yyvsp[(6) - (6)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (6)].sval), *(yyvsp[(6) - (6)].info)) == -1) yyerror("constant redefinition"); /* symbol check */
                        }
    break;

  case 8:
#line 106 "parser.y"
    {
                          Trace("constant declaration");

                          if (!isConst(*(yyvsp[(4) - (4)].info))) yyerror("expression not constant value"); /* constant check */

                          (yyvsp[(4) - (4)].info)->flag = constVariableFlag;
                          (yyvsp[(4) - (4)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (4)].sval), *(yyvsp[(4) - (4)].info)) == -1) yyerror("constant redefinition"); /* symbol check */
                        }
    break;

  case 9:
#line 118 "parser.y"
    {
                          Trace("variable declaration(VAR ID ':' var_type '=' expression )");

                          if ((yyvsp[(4) - (6)].type) != (yyvsp[(6) - (6)].info)->type) yyerror("type not match"); /* type check */

                          (yyvsp[(6) - (6)].info)->flag = variableFlag;
                          (yyvsp[(6) - (6)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (6)].sval), *(yyvsp[(6) - (6)].info)) == -1) yyerror("variable redefinition"); /* symbol check */

                          if ((yyvsp[(4) - (6)].type) == intType || (yyvsp[(4) - (6)].type) == boolType) {
                            int idx = symbols.getIndex(*(yyvsp[(2) - (6)].sval));
                            int val = getValue(*(yyvsp[(6) - (6)].info));
                            if (idx == -1) {
                              GlobalVarWithVal(*(yyvsp[(2) - (6)].sval), val);
                            }
                            else if (idx >= 0) {
                              LocalVarWithVal(idx, val);
                            }
                          }

                        }
    break;

  case 10:
#line 140 "parser.y"
    {
                          Trace("variable declaration ( VAR ID ':' var_type)");

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(4) - (4)].type);
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(2) - (4)].sval), *info) == -1) yyerror("variable redefinition"); /* symbol check */

                          if ((yyvsp[(4) - (4)].type) == intType || (yyvsp[(4) - (4)].type) == boolType) {
                            int idx = symbols.getIndex(*(yyvsp[(2) - (4)].sval));
                            if (idx == -1) {
                              GlobalVar(*(yyvsp[(2) - (4)].sval));
                            }
                          }
                        }
    break;

  case 11:
#line 157 "parser.y"
    {
                          Trace("variable declaration (VAR ID '=' expression)");
                          (yyvsp[(4) - (4)].info)->flag = variableFlag;
                          (yyvsp[(4) - (4)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (4)].sval), *(yyvsp[(4) - (4)].info)) == -1) yyerror("variable redefinition"); /* symbol check */

                          int idx = symbols.getIndex(*(yyvsp[(2) - (4)].sval));
                          int val = getValue(*(yyvsp[(4) - (4)].info));
                          if (idx == -1) {
                            GlobalVarWithVal(*(yyvsp[(2) - (4)].sval), val);
                          }
                          else if (idx >= 0) {
                            LocalVarWithVal(idx, val);
                          }

                        }
    break;

  case 12:
#line 174 "parser.y"
    {
                          Trace("variable declaration(VAR ID )");
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = intType;
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(2) - (2)].sval), *info) == -1) yyerror("variable redefinition"); /* symbol check */

                          int idx = symbols.getIndex(*(yyvsp[(2) - (2)].sval));
                          if (idx == -1) {
                            GlobalVar(*(yyvsp[(2) - (2)].sval));
                          }
                        }
    break;

  case 13:
#line 188 "parser.y"
    {
                          Trace("array declaration");

                          if (!isConst(*(yyvsp[(6) - (7)].info))) yyerror("array size not constant");
                          if ((yyvsp[(6) - (7)].info)->type != intType) yyerror("array size not integer");
                          if ((yyvsp[(6) - (7)].info)->value.ival < 1) yyerror("array size < 1");
                          if (symbols.insert(*(yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].type), (yyvsp[(6) - (7)].info)->value.ival) == -1) yyerror("variable redefinition");
                        }
    break;

  case 14:
#line 200 "parser.y"
    {
                          (yyval.type) = intType;
                        }
    break;

  case 15:
#line 204 "parser.y"
    {
                          (yyval.type) = charType;
                        }
    break;

  case 16:
#line 208 "parser.y"
    {
                          (yyval.type) = realType;
                        }
    break;

  case 17:
#line 212 "parser.y"
    {
                          (yyval.type) = boolType;
                        }
    break;

  case 18:
#line 216 "parser.y"
    {
                          (yyval.type) = strType;
                        }
    break;

  case 19:
#line 223 "parser.y"
    {
                          (yyval.info) = intConst((yyvsp[(1) - (1)].ival));
                        }
    break;

  case 20:
#line 227 "parser.y"
    {
                          (yyval.info) = realConst((yyvsp[(1) - (1)].dval));
                        }
    break;

  case 21:
#line 231 "parser.y"
    {
                          (yyval.info) = boolConst((yyvsp[(1) - (1)].bval));
                        }
    break;

  case 22:
#line 235 "parser.y"
    {
                          (yyval.info) = strConst((yyvsp[(1) - (1)].sval));
                        }
    break;

  case 23:
#line 239 "parser.y"
    {
                          (yyval.info) = charConst((yyvsp[(1) - (1)].cval));
                        }
    break;

  case 26:
#line 252 "parser.y"
    {
                          Trace("method declaration");
                          idInfo *info = new idInfo();
                          info->flag = functionFlag;
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(2) - (2)].sval), *info) == -1) yyerror("function redefinition"); /* symbol check */
                          symbols.push();
                        }
    break;

  case 27:
#line 261 "parser.y"
    {
                          if (*(yyvsp[(2) - (8)].sval) == "main") {    
                              
                            MainStart();
                            main_num++; 
                          }
                          else {
                            
                            FuncStart(*symbols.lookup(*(yyvsp[(2) - (8)].sval)));
                          
                          }
                        }
    break;

  case 28:
#line 274 "parser.y"
    {
                          
                          if (symbols.lookup(*(yyvsp[(2) - (12)].sval))->type == voidType) {
                            VoidFuncEnd();
                            
                          }
                          else {
                            BlockEnd();
                            
                          }

                           method_num++;                       
                           symbols.pop();
                        }
    break;

  case 33:
#line 303 "parser.y"
    {
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(3) - (3)].type);
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(1) - (3)].sval), *info) == -1) yyerror("variable redefinition");
                          symbols.addFuncArg(*(yyvsp[(1) - (3)].sval), *info);
                        }
    break;

  case 34:
#line 315 "parser.y"
    {
                          symbols.setFuncType((yyvsp[(2) - (2)].type));
                        }
    break;

  case 35:
#line 319 "parser.y"
    {
                          symbols.setFuncType(voidType);
                        }
    break;

  case 42:
#line 335 "parser.y"
    {
                            //if($1 != NULL) yyerror("procedure invocation should not have return value"); 
                        }
    break;

  case 43:
#line 341 "parser.y"
    {
                          Trace(" variable assignment");
                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (3)].sval));
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag == constVariableFlag) yyerror("can't assign to constant"); /* constant check */
                          if (info->flag == functionFlag) yyerror("can't assign to function"); /* function check */
                          if (info->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */

                           if (info->type == intType || info->type == boolType) {
                            int idx = symbols.getIndex(*(yyvsp[(1) - (3)].sval));
                            if (idx == -1) 
                              SetGlobalVar(*(yyvsp[(1) - (3)].sval));
                            else 
                              SetLocalVar(idx);
                          }
                        }
    break;

  case 44:
#line 358 "parser.y"
    {
                          Trace("Array assignment");

                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (6)].sval));
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag != variableFlag) yyerror("not a variable"); /* variable check */
                          if (info->type != arrayType) yyerror("not a array"); /* type check */
                          if ((yyvsp[(3) - (6)].info)->type != intType) yyerror("index not integer"); /* index type check */
                          if ((yyvsp[(3) - (6)].info)->value.ival >= info->value.aval.size() || (yyvsp[(3) - (6)].info)->value.ival < 0) yyerror("index out of range"); /* index range check */
                          if (info->value.aval[0].type != (yyvsp[(6) - (6)].info)->type) yyerror("type not match"); /* type check */
                        }
    break;

  case 45:
#line 370 "parser.y"
    {
                          PrintStart();
                        }
    break;

  case 46:
#line 374 "parser.y"
    {
                          Trace("print expression");

                          if ((yyvsp[(3) - (3)].info)->type == strType) 
                            PrintStr();
                          else 
                            PrintInt();
                        }
    break;

  case 47:
#line 383 "parser.y"
    {
                          PrintStart();
                        }
    break;

  case 48:
#line 387 "parser.y"
    {
                          Trace("println(expression)");
                          if ((yyvsp[(3) - (3)].info)->type == strType) 
                            PrintlnStr();
                          else 
                            PrintlnInt();
                        }
    break;

  case 49:
#line 395 "parser.y"
    {
                          Trace("return expression");
                          IReturn();        
                        }
    break;

  case 50:
#line 400 "parser.y"
    {
                          idInfo *info = symbols.lookup(*(yyvsp[(2) - (2)].sval));
                          if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
                          Trace("READ ID")
                        }
    break;

  case 51:
#line 406 "parser.y"
    {
                          Trace("return");
                          Return();
                        }
    break;

  case 52:
#line 415 "parser.y"
    {
                          Trace("----block start----");
                          symbols.push();
                        }
    break;

  case 53:
#line 421 "parser.y"
    {
                          Trace("----block end----");
                          
                          symbols.pop();
                        }
    break;

  case 54:
#line 429 "parser.y"
    {
                           IfStart();
                           if ((yyvsp[(3) - (4)].info)->type != boolType) yyerror("condition type error (if_else)");
                        }
    break;

  case 55:
#line 434 "parser.y"
    { 
                           Trace("if else");
                           IfEnd();
                          }
    break;

  case 57:
#line 442 "parser.y"
    {
                          Else();
                        }
    break;

  case 61:
#line 455 "parser.y"
    {
                          WhileStart();
                        }
    break;

  case 62:
#line 459 "parser.y"
    {
                          //if ($3->type != boolType) yyerror("while condition type error");
                          WhileCond();
                        }
    break;

  case 63:
#line 464 "parser.y"
    {
                          Trace("while loop");
                          WhileEnd();
                        }
    break;

  case 64:
#line 469 "parser.y"
    {
                           //ForStart();
                        }
    break;

  case 65:
#line 473 "parser.y"
    {
                          //ForCond();
                        }
    break;

  case 66:
#line 477 "parser.y"
    {
                          //ForEnd();
                          Trace("FOR loop");
                          idInfo *info = symbols.lookup(*(yyvsp[(4) - (12)].sval));
                          if (info == NULL) yyerror("undeclared indentifier(for)"); /* declaration check */
                          if (info->flag != variableFlag) yyerror("not a variable(for)"); /* function check */
                          if(info->type != intType) yyerror("variable should be int(for)");                         
                        }
    break;

  case 67:
#line 492 "parser.y"
    {
                          functions.push_back(vector<idInfo>());
                        }
    break;

  case 68:
#line 496 "parser.y"
    {
                          Trace(" function invocation");

                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (5)].sval));
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag != functionFlag) yyerror("not a function"); /* function check */

                          vector<idInfo> para = info->value.aval;
                          if (para.size() != functions[functions.size() - 1].size()) yyerror("parameter size not match"); /* parameter size check */

                          for (int i = 0; i < para.size(); ++i) {
                            if (para[i].type != functions[functions.size() - 1].at(i).type) yyerror("parameter type not match"); /* parameter type check */
                          }

                          CallFunc(*info);
                          (yyval.info) = info;
                          functions.pop_back();
                        }
    break;

  case 73:
#line 528 "parser.y"
    {
                          functions[functions.size() - 1].push_back(*(yyvsp[(1) - (1)].info));
                        }
    break;

  case 74:
#line 534 "parser.y"
    {
                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (1)].sval));
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          (yyval.info) = info;

                          if (!symbols.isGlobal() && isConst(*info)) {
                            if (info->type == strType) 
                              ConstStr(info->value.sval);
                            else if (info->type == intType || info->type == boolType) ConstInt(getValue(*info));
                          }
                          else if (info->type == intType || info->type == boolType) {
                            int idx = symbols.getIndex(*(yyvsp[(1) - (1)].sval));
                            if (idx == -1) 
                              GetGlobalVar(*(yyvsp[(1) - (1)].sval));
                            else 
                              GetLocalVar(idx);
                          }
                        }
    break;

  case 75:
#line 553 "parser.y"
    {
                            if (!symbols.isGlobal()) 
                            {
                              if ((yyvsp[(1) - (1)].info)->type == strType) 
                                ConstStr((yyvsp[(1) - (1)].info)->value.sval);
                              else if ((yyvsp[(1) - (1)].info)->type == intType || (yyvsp[(1) - (1)].info)->type == boolType)
                                ConstInt(getValue(*(yyvsp[(1) - (1)].info)));
                            }
                            (yyval.info) = (yyvsp[(1) - (1)].info);
                        }
    break;

  case 76:
#line 564 "parser.y"
    {
                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (4)].sval));
                          if (info == NULL) yyerror("undeclared identifier");
                          if (info->type != arrayType) yyerror("not array type");
                          if ((yyvsp[(3) - (4)].info)->type != intType) yyerror("invalid index");
                          if ((yyvsp[(3) - (4)].info)->value.ival >= info->value.aval.size()) yyerror("index out of range");
                          (yyval.info) = new idInfo(info->value.aval[(yyvsp[(3) - (4)].info)->value.ival]);
                        }
    break;

  case 78:
#line 574 "parser.y"
    {
                          Trace("-expression");

                          if ((yyvsp[(2) - (2)].info)->type != intType && (yyvsp[(2) - (2)].info)->type != realType) yyerror("operator error"); /* operator check */
                          
                          if((yyvsp[(2) - (2)].info) -> type == intType)
                          {
                            (yyvsp[(2) - (2)].info) -> value.ival *= -1;
                          }
                          else
                          {
                            (yyvsp[(2) - (2)].info) -> value.dval *= -1;
                          }
                          (yyval.info) = (yyvsp[(2) - (2)].info);

                          if ((yyvsp[(2) - (2)].info)->type == intType) 
                          {
                            //cout << "$2->type is" << $2->type <<endl;
                            Operator('m');
                          }
                           
                        }
    break;

  case 79:
#line 597 "parser.y"
    {
                          Trace("expression * expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */
                          
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;

    
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) 
                            Operator('*');
                        }
    break;

  case 80:
#line 614 "parser.y"
    {
                           Trace("expression / expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;
                        
                          (yyval.info) = info;
                          if ((yyvsp[(1) - (3)].info)->type == intType) 
                            Operator('/');
                        }
    break;

  case 81:
#line 629 "parser.y"
    {
                          Trace("expression % expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) Operator('%');
                        }
    break;

  case 82:
#line 643 "parser.y"
    {
                          Trace("expression + expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[(1) - (3)].info) -> value.ival + (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[(1) - (3)].info) -> value.dval + (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;
                          
                          if ((yyvsp[(1) - (3)].info)->type == intType) 
                            Operator('+');
                        }
    break;

  case 83:
#line 666 "parser.y"
    {
                          Trace("expression - expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[(1) - (3)].info) -> value.ival - (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[(1) - (3)].info) -> value.dval - (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) 
                            Operator('-');
                        }
    break;

  case 84:
#line 689 "parser.y"
    {
                          Trace("expression < expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType && (yyvsp[(1) - (3)].info) -> type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[(1) - (3)].info) -> value.ival < (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                          else if((yyvsp[(1) - (3)].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[(1) - (3)].info) -> value.bval < (yyvsp[(3) - (3)].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[(1) - (3)].info) -> value.dval < (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) CondOp(IFLT);
                        }
    break;

  case 85:
#line 715 "parser.y"
    {
                          Trace("expression <= expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType && (yyvsp[(1) - (3)].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[(1) - (3)].info) -> value.ival <= (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                           else if((yyvsp[(1) - (3)].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[(1) - (3)].info) -> value.bval <= (yyvsp[(3) - (3)].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[(1) - (3)].info) -> value.dval <= (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) CondOp(IFLE);
                        }
    break;

  case 86:
#line 741 "parser.y"
    {
                         
                          Trace("expression == expression");
                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                    
                          
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[(1) - (3)].info) -> value.ival == (yyvsp[(3) - (3)].info) -> value.ival;
                            
                          }
                          else if((yyvsp[(1) - (3)].info) -> type == boolType)
                          {
                        
                            info -> value.bval = (yyvsp[(1) - (3)].info) -> value.bval == (yyvsp[(3) - (3)].info) -> value.bval;
                          } 
                          else
                          {
                             info->value.bval = (yyvsp[(1) - (3)].info) -> value.dval == (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          
                        
                          if ((yyvsp[(1) - (3)].info)->type == intType || (yyvsp[(1) - (3)].info)->type == boolType) 
                            CondOp(IFEQ);
                          (yyval.info) = info;
                        }
    break;

  case 87:
#line 771 "parser.y"
    {
                          Trace("expression >= expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType && (yyvsp[(1) - (3)].info)->type!= boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[(1) - (3)].info) -> value.ival >= (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                           else if((yyvsp[(1) - (3)].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[(1) - (3)].info) -> value.bval >= (yyvsp[(3) - (3)].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[(1) - (3)].info) -> value.dval >= (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) CondOp(IFGE);
                        }
    break;

  case 88:
#line 797 "parser.y"
    {
                          Trace("expression > expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType && (yyvsp[(1) - (3)].info)->type != boolType) yyerror("operator error"); /* operator check */
                        
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {

                            info->value.bval = (yyvsp[(1) - (3)].info) -> value.ival > (yyvsp[(3) - (3)].info) -> value.ival;
                            
                          }
                          else if((yyvsp[(1) - (3)].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[(1) - (3)].info) -> value.bval > (yyvsp[(3) - (3)].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[(1) - (3)].info) -> value.dval > (yyvsp[(3) - (3)].info) -> value.dval;
                          }                          
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType) CondOp(IFGT);
                        }
    break;

  case 89:
#line 825 "parser.y"
    {
                          Trace("expression != expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                        
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.bval = (yyvsp[(1) - (3)].info) -> value.ival != (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                           else if((yyvsp[(1) - (3)].info) -> type == boolType)
                          {
                            info -> value.bval = (yyvsp[(1) - (3)].info) -> value.bval != (yyvsp[(3) - (3)].info) -> value.bval;
                          }
                          else
                          {
                             info->value.bval = (yyvsp[(1) - (3)].info) -> value.dval != (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == intType || (yyvsp[(1) - (3)].info)->type == boolType) CondOp(IFNE);

                        }
    break;

  case 90:
#line 851 "parser.y"
    {
                          Trace("!expression");

                          if ((yyvsp[(2) - (2)].info)->type != boolType) yyerror("operator error"); /* operator check */

                          (yyvsp[(2) - (2)].info) -> value.bval = !(yyvsp[(2) - (2)].info) -> value.bval;
    
                          (yyval.info) = (yyvsp[(2) - (2)].info);

                          if ((yyvsp[(2) - (2)].info)->type == boolType) Operator('!');
                        }
    break;

  case 91:
#line 863 "parser.y"
    {
                          Trace("expression && expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = (yyvsp[(1) - (3)].info)-> value.bval && (yyvsp[(3) - (3)].info) -> value.bval;
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == boolType) Operator('&');
                        }
    break;

  case 92:
#line 878 "parser.y"
    {
                          Trace("expression || expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
        
                          if ((yyvsp[(1) - (3)].info)->type != boolType) yyerror("operator error"); /* operator check */
             
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = (yyvsp[(1) - (3)].info)-> value.bval && (yyvsp[(3) - (3)].info) -> value.bval;
                          (yyval.info) = info;

                          if ((yyvsp[(1) - (3)].info)->type == boolType) Operator('|');
                        }
    break;

  case 93:
#line 894 "parser.y"
    {
                          (yyval.info) = (yyvsp[(2) - (3)].info);
                        }
    break;


/* Line 1267 of yacc.c.  */
#line 2543 "y.tab.cpp"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 899 "parser.y"


void yyerror(string s) {
  cerr << "line " << linenum << ": " << s << endl;
  exit(1);
}

int main(int argc, char **argv) {
  yyin = fopen(argv[1], "r");
  string source = string(argv[1]);
  int dot = source.find(".");
  filename = source.substr(0, dot);
  out.open(filename + ".jasm");

  yyparse();
  return 0;
}
