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

#define Trace(t) if (Opt_P) if (Opt_P) cout<< t << endl;
 
int Opt_P = 1;
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
#line 18 "parser.y"
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
#line 210 "y.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 223 "y.tab.cpp"

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
#define YYLAST   317

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

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
       2,     2,     2,    44,     2,     2,     2,     2,     2,     2,
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
      71,    73,    75,    77,    79,    82,    84,    85,    97,    99,
     100,   104,   106,   110,   113,   114,   117,   119,   121,   123,
     125,   127,   129,   133,   140,   145,   150,   153,   156,   158,
     161,   164,   165,   171,   179,   185,   187,   189,   195,   206,
     207,   213,   215,   216,   220,   222,   224,   226,   228,   233,
     235,   238,   242,   246,   250,   254,   258,   262,   266,   270,
     274,   278,   281,   285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    24,    38,    63,    52,    64,    69,
      53,    -1,    66,    64,    -1,    65,    64,    -1,    -1,    32,
      38,    54,    67,    55,    89,    -1,    32,    38,    55,    89,
      -1,    33,    38,    54,    67,    55,    89,    -1,    33,    38,
      54,    67,    -1,    33,    38,    55,    89,    -1,    33,    38,
      -1,    33,    38,    54,    67,    56,    89,    57,    -1,    22,
      -1,    11,    -1,    19,    -1,     9,    -1,    29,    -1,    40,
      -1,    41,    -1,    39,    -1,    42,    -1,    43,    -1,    70,
      69,    -1,    70,    -1,    -1,    15,    38,    71,    58,    72,
      59,    75,    52,    64,    76,    53,    -1,    73,    -1,    -1,
      74,    60,    73,    -1,    74,    -1,    38,    54,    67,    -1,
      54,    67,    -1,    -1,    77,    76,    -1,    77,    -1,    78,
      -1,    79,    -1,    81,    -1,    83,    -1,    84,    -1,    38,
      55,    89,    -1,    38,    56,    89,    57,    55,    89,    -1,
      25,    58,    89,    59,    -1,    26,    58,    89,    59,    -1,
      28,    89,    -1,    35,    38,    -1,    28,    -1,    25,    89,
      -1,    26,    89,    -1,    -1,    52,    80,    64,    76,    53,
      -1,    21,    58,    89,    59,    82,    17,    82,    -1,    21,
      58,    89,    59,    82,    -1,    78,    -1,    79,    -1,    34,
      58,    89,    59,    82,    -1,    20,    58,    38,    45,    48,
      40,    30,    40,    59,    82,    -1,    -1,    38,    85,    58,
      86,    59,    -1,    87,    -1,    -1,    88,    60,    87,    -1,
      88,    -1,    89,    -1,    38,    -1,    68,    -1,    38,    56,
      89,    57,    -1,    84,    -1,    48,    89,    -1,    89,    49,
      89,    -1,    89,    50,    89,    -1,    89,    47,    89,    -1,
      89,    48,    89,    -1,    89,    45,    89,    -1,    89,     3,
      89,    -1,    89,     5,    89,    -1,    89,     4,    89,    -1,
      89,    46,    89,    -1,    89,     6,    89,    -1,    44,    89,
      -1,    89,     7,    89,    -1,    89,     8,    89,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    59,    75,    76,    77,    81,    92,   104,
     115,   125,   135,   145,   157,   161,   165,   169,   173,   180,
     184,   188,   192,   196,   204,   205,   210,   209,   230,   231,
     235,   236,   240,   252,   257,   263,   264,   268,   269,   270,
     271,   272,   278,   287,   299,   303,   307,   314,   320,   324,
     325,   331,   330,   345,   351,   360,   361,   367,   372,   388,
     387,   412,   413,   417,   418,   422,   428,   434,   438,   447,
     448,   468,   490,   510,   530,   550,   574,   598,   624,   648,
     675,   698,   708,   721
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
  "'('", "')'", "','", "$accept", "program", "@1", "opt_var_dec",
  "const_dec", "var_dec", "var_type", "const_value", "opt_func_dec",
  "func_dec", "@2", "opt_args", "args", "arg", "opt_ret_type",
  "opt_statement", "statement", "simple", "block", "@3", "conditional",
  "B_or_S", "loop", "func_invocation", "@4", "opt_comma_separated",
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
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    63,    62,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    69,    69,    71,    70,    72,    72,
      73,    73,    74,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    80,    79,    81,    81,    82,    82,    83,    83,    85,
      84,    86,    86,    87,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     2,     2,     0,     6,     4,     6,
       4,     4,     2,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     0,    11,     1,     0,
       3,     1,     3,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     3,     6,     4,     4,     2,     2,     1,     2,
       2,     0,     5,     7,     5,     1,     1,     5,    10,     0,
       5,     1,     0,     3,     1,     1,     1,     1,     4,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,     0,
       6,     6,     0,    12,     0,     0,    25,     5,     4,     0,
       0,     0,     0,    26,     3,    24,    17,    15,    16,    14,
      18,     0,    66,    21,    19,    20,    22,    23,     0,     0,
      67,    69,     8,    10,    11,     0,     0,     0,     0,    81,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     7,     0,    62,    76,
      78,    77,    80,    82,    83,    75,    79,    73,    74,    71,
      72,     9,     0,     0,     0,    28,    31,    68,     0,    61,
      64,    65,    13,     0,    34,     0,    60,     0,    32,     0,
       0,    30,    63,    33,     6,     0,     0,     0,     0,     0,
      48,     0,     0,    59,    51,     0,    36,    37,    38,    39,
      40,    41,     0,     0,     0,    49,     0,    50,    46,     0,
      47,     0,     0,     6,    27,    35,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,    44,    45,     0,     0,
       0,     0,     0,    55,    56,    54,    57,     0,    52,     0,
       0,    43,     0,    53,     0,     0,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     9,    10,    11,    31,    40,    15,    16,
      45,    84,    85,    86,   100,   115,   116,   153,   154,   133,
     119,   155,   120,    41,    48,    88,    89,    90,    91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
      22,    49,    93,  -116,  -116,    42,    -8,    60,    61,    85,
      -8,    -8,   -25,     6,    63,    57,    85,  -116,  -116,    73,
     112,    73,   112,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,    70,   -11,  -116,  -116,  -116,  -116,  -116,   112,   112,
    -116,  -116,   196,     8,   196,    71,   112,   112,    72,   202,
    -116,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,    90,   196,   135,   112,   -27,
     -27,   -27,   -27,   202,   190,   -27,   -27,    16,    16,  -116,
    -116,   196,   141,    77,    74,  -116,    75,  -116,    98,  -116,
      76,   196,  -116,    73,    78,    90,  -116,   112,  -116,    73,
      82,  -116,  -116,  -116,    -8,   233,   100,   101,   238,   259,
     112,   115,   136,    30,  -116,   123,   233,  -116,  -116,  -116,
    -116,  -116,   139,   112,   112,   196,   112,   196,   196,   112,
    -116,   112,   112,    -8,  -116,  -116,   133,     3,     9,    68,
     116,   196,   164,   233,   131,   237,  -116,  -116,   237,   160,
     163,   177,    30,  -116,  -116,   201,  -116,   112,  -116,   189,
     237,   196,   180,  -116,   165,   237,  -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -116,    -7,  -116,  -116,   -16,  -116,   206,  -116,
    -116,  -116,   128,  -116,  -116,  -115,  -116,   -38,   -36,  -116,
    -116,   -69,  -116,   -35,  -116,  -116,   129,  -116,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -60
static const yytype_int16 yytable[] =
{
      42,   135,    44,    17,    18,    43,    51,    52,    53,    54,
      55,    56,    51,    52,    53,    54,    55,    56,    49,    50,
      59,    60,    61,    62,     7,     8,    66,    67,   150,    19,
      20,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    47,     1,   -59,    57,    58,
      59,    60,    61,    62,    57,    58,    59,    60,    61,    62,
      21,    22,   145,    63,    64,    61,    62,   117,   146,   118,
     121,    51,    52,    53,    54,    55,    56,    98,   117,   156,
     118,   121,    26,   103,    27,   131,   132,     3,   125,   127,
     128,   163,    28,     4,     6,    29,   166,   105,    12,    13,
      14,    23,    30,   137,   138,   117,   139,   118,   121,   140,
      24,   141,   142,    57,    58,    59,    60,    61,    62,    51,
      52,    53,    54,    55,    56,    46,   143,   147,    83,    65,
      68,    93,    99,    94,   104,    95,    97,   161,    51,    52,
      53,    54,    55,    56,    51,    52,    53,    54,    55,    56,
      32,    33,    34,    35,    36,    37,    38,    96,   122,   123,
      39,    57,    58,    59,    60,    61,    62,    51,    52,    53,
      54,    55,    56,   129,   130,   148,   134,   136,   144,   151,
      57,    58,    59,    60,    61,    62,    57,    58,    59,    60,
      61,    62,    87,    51,    52,    53,    54,    55,    92,    51,
      52,    53,    54,    55,    56,    51,    52,    53,    54,    57,
      58,    59,    60,    61,    62,   157,   158,   159,   160,   162,
     164,   149,    25,   101,   165,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    58,    59,    60,    61,
      62,    57,    58,    59,    60,    61,    62,    57,    58,    59,
      60,    61,    62,   106,   107,     0,     0,     0,   108,   109,
       0,   110,   108,   109,     0,   110,     0,   111,   112,     0,
       0,   113,   112,     0,     0,   152,    32,    33,    34,    35,
      36,    37,    38,     0,     0,   114,    39,     0,     0,   114,
       0,     0,     0,     0,     0,     0,   124,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126
};

static const yytype_int16 yycheck[] =
{
      20,   116,    22,    10,    11,    21,     3,     4,     5,     6,
       7,     8,     3,     4,     5,     6,     7,     8,    38,    39,
      47,    48,    49,    50,    32,    33,    46,    47,   143,    54,
      55,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    56,    24,    58,    45,    46,
      47,    48,    49,    50,    45,    46,    47,    48,    49,    50,
      54,    55,    59,    55,    56,    49,    50,   105,    59,   105,
     105,     3,     4,     5,     6,     7,     8,    93,   116,   148,
     116,   116,     9,    99,    11,    55,    56,    38,   108,   109,
     110,   160,    19,     0,    52,    22,   165,   104,    38,    38,
      15,    38,    29,   123,   124,   143,   126,   143,   143,   129,
      53,   131,   132,    45,    46,    47,    48,    49,    50,     3,
       4,     5,     6,     7,     8,    55,   133,    59,    38,    58,
      58,    54,    54,    59,    52,    60,    60,   157,     3,     4,
       5,     6,     7,     8,     3,     4,     5,     6,     7,     8,
      38,    39,    40,    41,    42,    43,    44,    59,    58,    58,
      48,    45,    46,    47,    48,    49,    50,     3,     4,     5,
       6,     7,     8,    58,    38,    59,    53,    38,    45,    48,
      45,    46,    47,    48,    49,    50,    45,    46,    47,    48,
      49,    50,    57,     3,     4,     5,     6,     7,    57,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,    45,
      46,    47,    48,    49,    50,    55,    53,    40,    17,    30,
      40,    57,    16,    95,    59,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    45,    46,    47,    48,    49,    50,    45,    46,    47,
      48,    49,    50,    20,    21,    -1,    -1,    -1,    25,    26,
      -1,    28,    25,    26,    -1,    28,    -1,    34,    35,    -1,
      -1,    38,    35,    -1,    -1,    38,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    52,    48,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    62,    38,     0,    63,    52,    32,    33,    64,
      65,    66,    38,    38,    15,    69,    70,    64,    64,    54,
      55,    54,    55,    38,    53,    69,     9,    11,    19,    22,
      29,    67,    38,    39,    40,    41,    42,    43,    44,    48,
      68,    84,    89,    67,    89,    71,    55,    56,    85,    89,
      89,     3,     4,     5,     6,     7,     8,    45,    46,    47,
      48,    49,    50,    55,    56,    58,    89,    89,    58,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    38,    72,    73,    74,    57,    86,    87,
      88,    89,    57,    54,    59,    60,    59,    60,    67,    54,
      75,    73,    87,    67,    52,    64,    20,    21,    25,    26,
      28,    34,    35,    38,    52,    76,    77,    78,    79,    81,
      83,    84,    58,    58,    58,    89,    58,    89,    89,    58,
      38,    55,    56,    80,    53,    76,    38,    89,    89,    89,
      89,    89,    89,    64,    45,    59,    59,    59,    59,    57,
      76,    48,    38,    78,    79,    82,    82,    55,    53,    40,
      17,    89,    30,    82,    40,    59,    82
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
#line 60 "parser.y"
    {
                          Trace("program(object)");
                        }
    break;

  case 3:
#line 64 "parser.y"
    {
                          
                          symbols.dump();
                          symbols.pop();
                        }
    break;

  case 7:
#line 82 "parser.y"
    {
                          Trace("constant declaration(type)");

                          if (!isConst(*(yyvsp[(6) - (6)].info))) yyerror("expression != constant value"); /*const check*/
                          if ((yyvsp[(4) - (6)].type) != (yyvsp[(6) - (6)].info)->type) yyerror("type not match"); /*type parameter check*/

                          (yyvsp[(6) - (6)].info)->flag = constVariableFlag;
                          (yyvsp[(6) - (6)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (6)].sval), *(yyvsp[(6) - (6)].info)) == -1) yyerror("constant redefinition"); /* symbol check */
                        }
    break;

  case 8:
#line 93 "parser.y"
    {
                          Trace("constant declaration");

                          if (!isConst(*(yyvsp[(4) - (4)].info))) yyerror("expression not constant value"); /* constant check */

                          (yyvsp[(4) - (4)].info)->flag = constVariableFlag;
                          (yyvsp[(4) - (4)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (4)].sval), *(yyvsp[(4) - (4)].info)) == -1) yyerror("constant redefinition"); /* symbol check */
                        }
    break;

  case 9:
#line 105 "parser.y"
    {
                          Trace("variable declaration(VAR ID ':' var_type '=' expression )");

                          if (!isConst(*(yyvsp[(6) - (6)].info))) yyerror("expression not constant value"); /* constant check */
                          if ((yyvsp[(4) - (6)].type) != (yyvsp[(6) - (6)].info)->type) yyerror("type not match"); /* type check */

                          (yyvsp[(6) - (6)].info)->flag = variableFlag;
                          (yyvsp[(6) - (6)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (6)].sval), *(yyvsp[(6) - (6)].info)) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
    break;

  case 10:
#line 116 "parser.y"
    {
                          Trace("variable declaration ( VAR ID ':' var_type)");

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(4) - (4)].type);
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(2) - (4)].sval), *info) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
    break;

  case 11:
#line 126 "parser.y"
    {
                          Trace("variable declaration (VAR ID '=' expression)");

                          if (!isConst(*(yyvsp[(4) - (4)].info))) yyerror("expression not constant value"); /* constant check */

                          (yyvsp[(4) - (4)].info)->flag = variableFlag;
                          (yyvsp[(4) - (4)].info)->init = true;
                          if (symbols.insert(*(yyvsp[(2) - (4)].sval), *(yyvsp[(4) - (4)].info)) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
    break;

  case 12:
#line 136 "parser.y"
    {
                          Trace("variable declaration(VAR ID )");

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = intType;
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(2) - (2)].sval), *info) == -1) yyerror("variable redefinition"); /* symbol check */
                        }
    break;

  case 13:
#line 146 "parser.y"
    {
                          Trace("array declaration");

                          if (!isConst(*(yyvsp[(6) - (7)].info))) yyerror("array size not constant");
                          if ((yyvsp[(6) - (7)].info)->type != intType) yyerror("array size not integer");
                          if ((yyvsp[(6) - (7)].info)->value.ival < 1) yyerror("array size < 1");
                          if (symbols.insert(*(yyvsp[(2) - (7)].sval), (yyvsp[(4) - (7)].type), (yyvsp[(6) - (7)].info)->value.ival) == -1) yyerror("variable redefinition");
                        }
    break;

  case 14:
#line 158 "parser.y"
    {
                          (yyval.type) = intType;
                        }
    break;

  case 15:
#line 162 "parser.y"
    {
                          (yyval.type) = charType;
                        }
    break;

  case 16:
#line 166 "parser.y"
    {
                          (yyval.type) = realType;
                        }
    break;

  case 17:
#line 170 "parser.y"
    {
                          (yyval.type) = boolType;
                        }
    break;

  case 18:
#line 174 "parser.y"
    {
                          (yyval.type) = strType;
                        }
    break;

  case 19:
#line 181 "parser.y"
    {
                          (yyval.info) = intConst((yyvsp[(1) - (1)].ival));
                        }
    break;

  case 20:
#line 185 "parser.y"
    {
                          (yyval.info) = realConst((yyvsp[(1) - (1)].dval));
                        }
    break;

  case 21:
#line 189 "parser.y"
    {
                          (yyval.info) = boolConst((yyvsp[(1) - (1)].bval));
                        }
    break;

  case 22:
#line 193 "parser.y"
    {
                          (yyval.info) = strConst((yyvsp[(1) - (1)].sval));
                        }
    break;

  case 23:
#line 197 "parser.y"
    {
                          (yyval.info) = charConst((yyvsp[(1) - (1)].cval));
                        }
    break;

  case 26:
#line 210 "parser.y"
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
#line 220 "parser.y"
    {
                         
                  
                          symbols.dump();
                          symbols.pop();
                        }
    break;

  case 32:
#line 241 "parser.y"
    {
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(3) - (3)].type);
                          info->init = false;
                          if (symbols.insert(*(yyvsp[(1) - (3)].sval), *info) == -1) yyerror("variable redefinition");
                          symbols.addFuncArg(*(yyvsp[(1) - (3)].sval), *info);
                        }
    break;

  case 33:
#line 253 "parser.y"
    {
                          symbols.setFuncType((yyvsp[(2) - (2)].type));
                        }
    break;

  case 34:
#line 257 "parser.y"
    {
                          symbols.setFuncType(voidType);
                        }
    break;

  case 41:
#line 273 "parser.y"
    {
                            if((yyvsp[(1) - (1)].info) != NULL) yyerror("procedure invocation should not have return value"); 
                        }
    break;

  case 42:
#line 279 "parser.y"
    {
                          Trace(" variable assignment");
                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (3)].sval));
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag == constVariableFlag) yyerror("can't assign to constant"); /* constant check */
                          if (info->flag == functionFlag) yyerror("can't assign to function"); /* function check */
                          if (info->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                        }
    break;

  case 43:
#line 288 "parser.y"
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

  case 44:
#line 300 "parser.y"
    {
                          Trace("print(expression)");
                        }
    break;

  case 45:
#line 304 "parser.y"
    {
                          Trace("println(expression)");
                        }
    break;

  case 46:
#line 308 "parser.y"
    {
                          Trace("return expression");


                
                        }
    break;

  case 47:
#line 315 "parser.y"
    {
                          idInfo *info = symbols.lookup(*(yyvsp[(2) - (2)].sval));
                          if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
                          Trace("READ ID")
                        }
    break;

  case 48:
#line 321 "parser.y"
    {
                          Trace("return");
                        }
    break;

  case 51:
#line 331 "parser.y"
    {
                          Trace("----block start----");
                          symbols.push();
                        }
    break;

  case 52:
#line 337 "parser.y"
    {
                          Trace("----block end----");
                          symbols.dump();
                          symbols.pop();
                        }
    break;

  case 53:
#line 346 "parser.y"
    {
                          Trace(" if else");

                          if ((yyvsp[(3) - (7)].info)->type != boolType) yyerror("condition type error (if_else)");
                        }
    break;

  case 54:
#line 352 "parser.y"
    {
                          Trace(" if");

                          if ((yyvsp[(3) - (5)].info)->type != boolType) yyerror("condition type error (if)");
                        }
    break;

  case 57:
#line 368 "parser.y"
    {
                          Trace("while loop");
                          if ((yyvsp[(3) - (5)].info)->type != boolType) yyerror("while condition type error");
                        }
    break;

  case 58:
#line 373 "parser.y"
    {
                          Trace("FOR loop");
                          idInfo *info = symbols.lookup(*(yyvsp[(3) - (10)].sval));
                          if (info == NULL) yyerror("undeclared indentifier(for)"); /* declaration check */
                          if (info->flag != variableFlag) yyerror("not a variable(for)"); /* function check */
                          if(info->type != intType) yyerror("variable should be int(for)");
                          
                        }
    break;

  case 59:
#line 388 "parser.y"
    {
                          functions.push_back(vector<idInfo>());
                        }
    break;

  case 60:
#line 392 "parser.y"
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

                          (yyval.info) = info;
                          functions.pop_back();
                        }
    break;

  case 65:
#line 423 "parser.y"
    {
                          functions[functions.size() - 1].push_back(*(yyvsp[(1) - (1)].info));
                        }
    break;

  case 66:
#line 429 "parser.y"
    {
                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (1)].sval));
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          (yyval.info) = info;
                        }
    break;

  case 67:
#line 435 "parser.y"
    {
                            (yyval.info) = (yyvsp[(1) - (1)].info);
                        }
    break;

  case 68:
#line 439 "parser.y"
    {
                          idInfo *info = symbols.lookup(*(yyvsp[(1) - (4)].sval));
                          if (info == NULL) yyerror("undeclared identifier");
                          if (info->type != arrayType) yyerror("not array type");
                          if ((yyvsp[(3) - (4)].info)->type != intType) yyerror("invalid index");
                          if ((yyvsp[(3) - (4)].info)->value.ival >= info->value.aval.size()) yyerror("index out of range");
                          (yyval.info) = new idInfo(info->value.aval[(yyvsp[(3) - (4)].info)->value.ival]);
                        }
    break;

  case 70:
#line 449 "parser.y"
    {
                          Trace("-expression");

                          if ((yyvsp[(2) - (2)].info)->type != intType && (yyvsp[(2) - (2)].info)->type != realType) yyerror("operator error"); /* operator check */
                          /*
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $2->type;
                          */
                          if((yyvsp[(2) - (2)].info) -> type == intType)
                          {
                            (yyvsp[(2) - (2)].info) -> value.ival *= -1;
                          }
                          else
                          {
                            (yyvsp[(2) - (2)].info) -> value.dval *= -1;
                          }
                          (yyval.info) = (yyvsp[(2) - (2)].info);
                        }
    break;

  case 71:
#line 469 "parser.y"
    {
                          Trace("expression * expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */
                          
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;

                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[(1) - (3)].info) -> value.ival * (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[(1) - (3)].info) -> value.dval * (yyvsp[(3) - (3)].info) -> value.dval;
                          }

                          (yyval.info) = info;
                        }
    break;

  case 72:
#line 491 "parser.y"
    {
                          Trace("expression / expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != intType && (yyvsp[(1) - (3)].info)->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = (yyvsp[(1) - (3)].info)->type;
                          if((yyvsp[(1) - (3)].info) -> type == intType)
                          {
                            info->value.ival = (yyvsp[(1) - (3)].info) -> value.ival / (yyvsp[(3) - (3)].info) -> value.ival;
                          }
                          else
                          {
                             info->value.dval = (yyvsp[(1) - (3)].info) -> value.dval / (yyvsp[(3) - (3)].info) -> value.dval;
                          }
                          (yyval.info) = info;
                        }
    break;

  case 73:
#line 511 "parser.y"
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
                        }
    break;

  case 74:
#line 531 "parser.y"
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
                        }
    break;

  case 75:
#line 551 "parser.y"
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
                        }
    break;

  case 76:
#line 575 "parser.y"
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
                        }
    break;

  case 77:
#line 599 "parser.y"
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
                          (yyval.info) = info;
                        }
    break;

  case 78:
#line 625 "parser.y"
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
                        }
    break;

  case 79:
#line 649 "parser.y"
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
                  
                        }
    break;

  case 80:
#line 676 "parser.y"
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
                        }
    break;

  case 81:
#line 699 "parser.y"
    {
                          Trace("!expression");

                          if ((yyvsp[(2) - (2)].info)->type != boolType) yyerror("operator error"); /* operator check */

                          (yyvsp[(2) - (2)].info) -> value.bval = !(yyvsp[(2) - (2)].info) -> value.bval;
    
                          (yyval.info) = (yyvsp[(2) - (2)].info);
                        }
    break;

  case 82:
#line 709 "parser.y"
    {
                          Trace("expression && expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
                          if ((yyvsp[(1) - (3)].info)->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = (yyvsp[(1) - (3)].info)-> value.bval && (yyvsp[(3) - (3)].info) -> value.bval;
                          (yyval.info) = info;
                        }
    break;

  case 83:
#line 722 "parser.y"
    {
                          Trace("expression || expression");

                          if ((yyvsp[(1) - (3)].info)->type != (yyvsp[(3) - (3)].info)->type) yyerror("type not match"); /* type check */
        
                          if ((yyvsp[(1) - (3)].info)->type != boolType) yyerror("operator error"); /* operator check */
             
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = (yyvsp[(1) - (3)].info)-> value.bval && (yyvsp[(3) - (3)].info) -> value.bval;
                          (yyval.info) = info;
                        }
    break;


/* Line 1267 of yacc.c.  */
#line 2345 "y.tab.cpp"
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


#line 738 "parser.y"


void yyerror(string s) {
  cerr << "line " << linenum << ": " << s << endl;
  exit(1);
}

int main(void) {
  yyparse();
  return 0;
}
