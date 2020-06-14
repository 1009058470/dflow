/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_SOURCEPARSER_HH_INCLUDED
# define YY_YY_SOURCEPARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    INT = 259,
    FLOAT = 260,
    SEND = 261,
    OPPLUS = 262,
    OPMIN = 263,
    OPMUL = 264,
    OPDIV = 265,
    ASSIGN = 266,
    EQ = 267,
    LT = 268,
    LTE = 269,
    GT = 270,
    GTE = 271,
    OR = 272,
    AND = 273,
    NOT = 274,
    TRUE = 275,
    FALSE = 276,
    IF = 277,
    THEN = 278,
    ELSE = 279,
    FI = 280,
    SKIP = 281,
    WHILE = 282,
    DO = 283,
    OD = 284
  };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define FLOAT 260
#define SEND 261
#define OPPLUS 262
#define OPMIN 263
#define OPMUL 264
#define OPDIV 265
#define ASSIGN 266
#define EQ 267
#define LT 268
#define LTE 269
#define GT 270
#define GTE 271
#define OR 272
#define AND 273
#define NOT 274
#define TRUE 275
#define FALSE 276
#define IF 277
#define THEN 278
#define ELSE 279
#define FI 280
#define SKIP 281
#define WHILE 282
#define DO 283
#define OD 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "SourceParser.yy" /* yacc.c:1909  */

    std::string *str;
    Block *block;
    Identifier *ident;
    Expression *expression;
    Statement *statement;
    Statements *statements;

#line 121 "SourceParser.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SOURCEPARSER_HH_INCLUDED  */
