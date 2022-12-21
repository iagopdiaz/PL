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
    ESUMA = 271,                   /* ESUMA  */
    ERESTA = 272,                  /* ERESTA  */
    EMULT = 273,                   /* EMULT  */
    EDIV = 274,                    /* EDIV  */
    VARRAY = 275,                  /* VARRAY  */
    SUMA = 276,                    /* SUMA  */
    RESTA = 277,                   /* RESTA  */
    MULT = 278,                    /* MULT  */
    DIV = 279,                     /* DIV  */
    EXPONT = 280,                  /* EXPONT  */
    RAIZ = 281,                    /* RAIZ  */
    IGUALM = 282,                  /* IGUALM  */
    DE = 283,                      /* DE  */
    EN = 284,                      /* EN  */
    VESTATICA = 285,               /* VESTATICA  */
    ELSE = 286,                    /* ELSE  */
    IF = 287,                      /* IF  */
    VDINAMICA = 288,               /* VDINAMICA  */
    MAYOR = 289,                   /* MAYOR  */
    MENOR = 290,                   /* MENOR  */
    IGUAL = 291,                   /* IGUAL  */
    DISTINTO = 292,                /* DISTINTO  */
    MAYORIGUAL = 293,              /* MAYORIGUAL  */
    MENORIGUAL = 294,              /* MENORIGUAL  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    CLOSEIF = 297,                 /* CLOSEIF  */
    ELSEIF = 298,                  /* ELSEIF  */
    NUMERO = 299,                  /* NUMERO  */
    PALABRA = 300                  /* PALABRA  */
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
#define ESUMA 271
#define ERESTA 272
#define EMULT 273
#define EDIV 274
#define VARRAY 275
#define SUMA 276
#define RESTA 277
#define MULT 278
#define DIV 279
#define EXPONT 280
#define RAIZ 281
#define IGUALM 282
#define DE 283
#define EN 284
#define VESTATICA 285
#define ELSE 286
#define IF 287
#define VDINAMICA 288
#define MAYOR 289
#define MENOR 290
#define IGUAL 291
#define DISTINTO 292
#define MAYORIGUAL 293
#define MENORIGUAL 294
#define AND 295
#define OR 296
#define CLOSEIF 297
#define ELSEIF 298
#define NUMERO 299
#define PALABRA 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "final.y"

	char * string;

#line 161 "final.tab.h"

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
