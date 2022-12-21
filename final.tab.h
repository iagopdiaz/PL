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
    VESTATICA = 280,               /* VESTATICA  */
    ELSE = 281,                    /* ELSE  */
    IF = 282,                      /* IF  */
    VDINAMICA = 283,               /* VDINAMICA  */
    MAYOR = 284,                   /* MAYOR  */
    MENOR = 285,                   /* MENOR  */
    IGUAL = 286,                   /* IGUAL  */
    DISTINTO = 287,                /* DISTINTO  */
    MAYORIGUAL = 288,              /* MAYORIGUAL  */
    MENORIGUAL = 289,              /* MENORIGUAL  */
    AND = 290,                     /* AND  */
    OR = 291,                      /* OR  */
    CLOSEIF = 292,                 /* CLOSEIF  */
    ELSEIF = 293,                  /* ELSEIF  */
    NUMERO = 294,                  /* NUMERO  */
    PALABRA = 295                  /* PALABRA  */
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
#define VESTATICA 280
#define ELSE 281
#define IF 282
#define VDINAMICA 283
#define MAYOR 284
#define MENOR 285
#define IGUAL 286
#define DISTINTO 287
#define MAYORIGUAL 288
#define MENORIGUAL 289
#define AND 290
#define OR 291
#define CLOSEIF 292
#define ELSEIF 293
#define NUMERO 294
#define PALABRA 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "final.y"

	char * string;

#line 151 "final.tab.h"

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
