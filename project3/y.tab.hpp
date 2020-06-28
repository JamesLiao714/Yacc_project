/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "parser.y"
{
  int ival;
  double dval;
  bool bval;
  char cval;
  string *sval;
  int type;
  idInfo* info;
}
/* Line 1529 of yacc.c.  */
#line 147 "y.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

