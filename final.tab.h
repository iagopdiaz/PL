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
    SIMBOLOS = 275,                /* SIMBOLOS  */
    VARRAY = 276,                  /* VARRAY  */
    SUMA = 277,                    /* SUMA  */
    RESTA = 278,                   /* RESTA  */
    MULT = 279,                    /* MULT  */
    DIV = 280,                     /* DIV  */
    EXPONT = 281,                  /* EXPONT  */
    RAIZ = 282,                    /* RAIZ  */
    IGUALM = 283,                  /* IGUALM  */
    DE = 284,                      /* DE  */
    EN = 285,                      /* EN  */
    VESTATICA = 286,               /* VESTATICA  */
    ELSE = 287,                    /* ELSE  */
    IF = 288,                      /* IF  */
    VDINAMICA = 289,               /* VDINAMICA  */
    MAYOR = 290,                   /* MAYOR  */
    MENOR = 291,                   /* MENOR  */
    IGUAL = 292,                   /* IGUAL  */
    DISTINTO = 293,                /* DISTINTO  */
    MAYORIGUAL = 294,              /* MAYORIGUAL  */
    MENORIGUAL = 295,              /* MENORIGUAL  */
    AND = 296,                     /* AND  */
    OR = 297,                      /* OR  */
    CLOSEIF = 298,                 /* CLOSEIF  */
    ELSEIF = 299,                  /* ELSEIF  */
    NUMERO = 300,                  /* NUMERO  */
    PRINTF = 301,                  /* PRINTF  */
    TEXTO = 302,                   /* TEXTO  */
    FINTEXTO = 303,                /* FINTEXTO  */
    INICIOP = 304,                 /* INICIOP  */
    FINP = 305,                    /* FINP  */
    PALABRA = 306                  /* PALABRA  */
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
#define SIMBOLOS 275
#define VARRAY 276
#define SUMA 277
#define RESTA 278
#define MULT 279
#define DIV 280
#define EXPONT 281
#define RAIZ 282
#define IGUALM 283
#define DE 284
#define EN 285
#define VESTATICA 286
#define ELSE 287
#define IF 288
#define VDINAMICA 289
#define MAYOR 290
#define MENOR 291
#define IGUAL 292
#define DISTINTO 293
#define MAYORIGUAL 294
#define MENORIGUAL 295
#define AND 296
#define OR 297
#define CLOSEIF 298
#define ELSEIF 299
#define NUMERO 300
#define PRINTF 301
#define TEXTO 302
#define FINTEXTO 303
#define INICIOP 304
#define FINP 305
#define PALABRA 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "final.y"

	char * string;

#line 173 "final.tab.h"

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
