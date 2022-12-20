/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_FINAL_TAB_H_INCLUDED
# define YY_YY_FINAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VARIABLE = 258,                /* VARIABLE  */
    VNUMERO = 259,                 /* VNUMERO  */
    VSTRING = 260,                 /* VSTRING  */
    VARRAY = 261,                  /* VARRAY  */
    VESTATICA = 262,               /* VESTATICA  */
    ELSE = 263,                    /* ELSE  */
    IF = 264,                      /* IF  */
    VDINAMICA = 265,               /* VDINAMICA  */
    MAYOR = 266,                   /* MAYOR  */
    MENOR = 267,                   /* MENOR  */
    IGUAL = 268,                   /* IGUAL  */
    DISTINTO = 269,                /* DISTINTO  */
    MAYORIGUAL = 270,              /* MAYORIGUAL  */
    MENORIGUAL = 271,              /* MENORIGUAL  */
    AND = 272,                     /* AND  */
    OR = 273,                      /* OR  */
    CLOSEIF = 274,                 /* CLOSEIF  */
    NUMERO = 275,                  /* NUMERO  */
    PALABRA = 276                  /* PALABRA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VARIABLE 258
#define VNUMERO 259
#define VSTRING 260
#define VARRAY 261
#define VESTATICA 262
#define ELSE 263
#define IF 264
#define VDINAMICA 265
#define MAYOR 266
#define MENOR 267
#define IGUAL 268
#define DISTINTO 269
#define MAYORIGUAL 270
#define MENORIGUAL 271
#define AND 272
#define OR 273
#define CLOSEIF 274
#define NUMERO 275
#define PALABRA 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "final.y"

	char * string;

#line 113 "final.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

#if !defined yyerror && !defined YYERROR_IS_DECLARED
void yyerror (const char *msg);
#endif
#if !defined yylex && !defined YYLEX_IS_DECLARED
int yylex (void);
#endif

int yyparse (void);


#endif /* !YY_YY_FINAL_TAB_H_INCLUDED  */
