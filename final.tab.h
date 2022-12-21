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
    FOR = 258,                     /* FOR  */
    WHILE = 259,                   /* WHILE  */
    DOWHILE = 260,                 /* DOWHILE  */
    ENDFOR = 261,                  /* ENDFOR  */
    ENDWHILE = 262,                /* ENDWHILE  */
    ENDDOWHILE = 263,              /* ENDDOWHILE  */
    VARIABLE = 264,                /* VARIABLE  */
    VNUMERO = 265,                 /* VNUMERO  */
    VSTRING = 266,                 /* VSTRING  */
    STOP = 267,                    /* STOP  */
    VARRAY = 268,                  /* VARRAY  */
    SUMA = 269,                    /* SUMA  */
    RESTA = 270,                   /* RESTA  */
    MULT = 271,                    /* MULT  */
    DIV = 272,                     /* DIV  */
    EXPONT = 273,                  /* EXPONT  */
    RAIZ = 274,                    /* RAIZ  */
    IGUALM = 275,                  /* IGUALM  */
    DE = 276,                      /* DE  */
    VESTATICA = 277,               /* VESTATICA  */
    ELSE = 278,                    /* ELSE  */
    IF = 279,                      /* IF  */
    VDINAMICA = 280,               /* VDINAMICA  */
    MAYOR = 281,                   /* MAYOR  */
    MENOR = 282,                   /* MENOR  */
    IGUAL = 283,                   /* IGUAL  */
    DISTINTO = 284,                /* DISTINTO  */
    MAYORIGUAL = 285,              /* MAYORIGUAL  */
    MENORIGUAL = 286,              /* MENORIGUAL  */
    AND = 287,                     /* AND  */
    OR = 288,                      /* OR  */
    CLOSEIF = 289,                 /* CLOSEIF  */
    ELSEIF = 290,                  /* ELSEIF  */
    NUMERO = 291,                  /* NUMERO  */
    PALABRA = 292                  /* PALABRA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define FOR 258
#define WHILE 259
#define DOWHILE 260
#define ENDFOR 261
#define ENDWHILE 262
#define ENDDOWHILE 263
#define VARIABLE 264
#define VNUMERO 265
#define VSTRING 266
#define STOP 267
#define VARRAY 268
#define SUMA 269
#define RESTA 270
#define MULT 271
#define DIV 272
#define EXPONT 273
#define RAIZ 274
#define IGUALM 275
#define DE 276
#define VESTATICA 277
#define ELSE 278
#define IF 279
#define VDINAMICA 280
#define MAYOR 281
#define MENOR 282
#define IGUAL 283
#define DISTINTO 284
#define MAYORIGUAL 285
#define MENORIGUAL 286
#define AND 287
#define OR 288
#define CLOSEIF 289
#define ELSEIF 290
#define NUMERO 291
#define PALABRA 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "final.y"

	char * string;

#line 145 "final.tab.h"

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
