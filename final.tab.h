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
    VBOOL = 266,                   /* VBOOL  */
    VSTRING = 267,                 /* VSTRING  */
    VTRUE = 268,                   /* VTRUE  */
    VFALSE = 269,                  /* VFALSE  */
    STOP = 270,                    /* STOP  */
    VARRAY = 271,                  /* VARRAY  */
    SUMA = 272,                    /* SUMA  */
    RESTA = 273,                   /* RESTA  */
    MULT = 274,                    /* MULT  */
    DIV = 275,                     /* DIV  */
    EXPONT = 276,                  /* EXPONT  */
    RAIZ = 277,                    /* RAIZ  */
    IGUALM = 278,                  /* IGUALM  */
    DE = 279,                      /* DE  */
    EN = 280,                      /* EN  */
    VESTATICA = 281,               /* VESTATICA  */
    ELSE = 282,                    /* ELSE  */
    IF = 283,                      /* IF  */
    VDINAMICA = 284,               /* VDINAMICA  */
    MAYOR = 285,                   /* MAYOR  */
    MENOR = 286,                   /* MENOR  */
    IGUAL = 287,                   /* IGUAL  */
    DISTINTO = 288,                /* DISTINTO  */
    MAYORIGUAL = 289,              /* MAYORIGUAL  */
    MENORIGUAL = 290,              /* MENORIGUAL  */
    AND = 291,                     /* AND  */
    OR = 292,                      /* OR  */
    CLOSEIF = 293,                 /* CLOSEIF  */
    ELSEIF = 294,                  /* ELSEIF  */
    NUMERO = 295,                  /* NUMERO  */
    PALABRA = 296                  /* PALABRA  */
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
#define VBOOL 266
#define VSTRING 267
#define VTRUE 268
#define VFALSE 269
#define STOP 270
#define VARRAY 271
#define SUMA 272
#define RESTA 273
#define MULT 274
#define DIV 275
#define EXPONT 276
#define RAIZ 277
#define IGUALM 278
#define DE 279
#define EN 280
#define VESTATICA 281
#define ELSE 282
#define IF 283
#define VDINAMICA 284
#define MAYOR 285
#define MENOR 286
#define IGUAL 287
#define DISTINTO 288
#define MAYORIGUAL 289
#define MENORIGUAL 290
#define AND 291
#define OR 292
#define CLOSEIF 293
#define ELSEIF 294
#define NUMERO 295
#define PALABRA 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "final.y"

	char * string;

#line 153 "final.tab.h"

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
