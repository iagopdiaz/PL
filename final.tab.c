/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "final.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror (char const *);
extern int yylex();
extern int yylineno;
char error[500];
char * variables;
int * op;
int * tabulaciones;

#line 84 "final.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "final.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FOR = 3,                        /* FOR  */
  YYSYMBOL_WHILE = 4,                      /* WHILE  */
  YYSYMBOL_DOWHILE = 5,                    /* DOWHILE  */
  YYSYMBOL_ENDFOR = 6,                     /* ENDFOR  */
  YYSYMBOL_ENDWHILE = 7,                   /* ENDWHILE  */
  YYSYMBOL_ENDDOWHILE = 8,                 /* ENDDOWHILE  */
  YYSYMBOL_VARIABLE = 9,                   /* VARIABLE  */
  YYSYMBOL_VNUMERO = 10,                   /* VNUMERO  */
  YYSYMBOL_VBOOL = 11,                     /* VBOOL  */
  YYSYMBOL_VSTRING = 12,                   /* VSTRING  */
  YYSYMBOL_VTRUE = 13,                     /* VTRUE  */
  YYSYMBOL_VFALSE = 14,                    /* VFALSE  */
  YYSYMBOL_STOP = 15,                      /* STOP  */
  YYSYMBOL_ESUMA = 16,                     /* ESUMA  */
  YYSYMBOL_ERESTA = 17,                    /* ERESTA  */
  YYSYMBOL_EMULT = 18,                     /* EMULT  */
  YYSYMBOL_EDIV = 19,                      /* EDIV  */
  YYSYMBOL_SIMBOLOS = 20,                  /* SIMBOLOS  */
  YYSYMBOL_VARRAY = 21,                    /* VARRAY  */
  YYSYMBOL_SUMA = 22,                      /* SUMA  */
  YYSYMBOL_RESTA = 23,                     /* RESTA  */
  YYSYMBOL_MULT = 24,                      /* MULT  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_EXPONT = 26,                    /* EXPONT  */
  YYSYMBOL_RAIZ = 27,                      /* RAIZ  */
  YYSYMBOL_IGUALM = 28,                    /* IGUALM  */
  YYSYMBOL_DE = 29,                        /* DE  */
  YYSYMBOL_EN = 30,                        /* EN  */
  YYSYMBOL_VESTATICA = 31,                 /* VESTATICA  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_VDINAMICA = 34,                 /* VDINAMICA  */
  YYSYMBOL_MAYOR = 35,                     /* MAYOR  */
  YYSYMBOL_MENOR = 36,                     /* MENOR  */
  YYSYMBOL_IGUAL = 37,                     /* IGUAL  */
  YYSYMBOL_DISTINTO = 38,                  /* DISTINTO  */
  YYSYMBOL_MAYORIGUAL = 39,                /* MAYORIGUAL  */
  YYSYMBOL_MENORIGUAL = 40,                /* MENORIGUAL  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_CLOSEIF = 43,                   /* CLOSEIF  */
  YYSYMBOL_ELSEIF = 44,                    /* ELSEIF  */
  YYSYMBOL_NUMERO = 45,                    /* NUMERO  */
  YYSYMBOL_PRINTF = 46,                    /* PRINTF  */
  YYSYMBOL_TEXTO = 47,                     /* TEXTO  */
  YYSYMBOL_FINTEXTO = 48,                  /* FINTEXTO  */
  YYSYMBOL_INICIOP = 49,                   /* INICIOP  */
  YYSYMBOL_FINP = 50,                      /* FINP  */
  YYSYMBOL_PALABRA = 51,                   /* PALABRA  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_S = 53,                         /* S  */
  YYSYMBOL_contenido = 54,                 /* contenido  */
  YYSYMBOL_contprint = 55,                 /* contprint  */
  YYSYMBOL_printrec = 56,                  /* printrec  */
  YYSYMBOL_tipoprint = 57,                 /* tipoprint  */
  YYSYMBOL_contif = 58,                    /* contif  */
  YYSYMBOL_comprecursivo = 59,             /* comprecursivo  */
  YYSYMBOL_comparador = 60,                /* comparador  */
  YYSYMBOL_dimensionvar = 61,              /* dimensionvar  */
  YYSYMBOL_contvar = 62,                   /* contvar  */
  YYSYMBOL_crearvar = 63,                  /* crearvar  */
  YYSYMBOL_typevar = 64,                   /* typevar  */
  YYSYMBOL_numarrayvar = 65,               /* numarrayvar  */
  YYSYMBOL_contmat2 = 66,                  /* contmat2  */
  YYSYMBOL_contmat = 67,                   /* contmat  */
  YYSYMBOL_operador = 68,                  /* operador  */
  YYSYMBOL_operador2 = 69,                 /* operador2  */
  YYSYMBOL_recConmat = 70,                 /* recConmat  */
  YYSYMBOL_parametro = 71,                 /* parametro  */
  YYSYMBOL_contfor = 72,                   /* contfor  */
  YYSYMBOL_contwhile = 73,                 /* contwhile  */
  YYSYMBOL_contdowhile = 74                /* contdowhile  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    36,    42,    48,    58,    67,    77,    86,
      95,   105,   115,   125,   135,   148,   158,   169,   180,   191,
     208,   217,   226,   233,   237,   244,   251,   264,   280,   301,
     328,   344,   350,   351,   352,   353,   354,   355,   356,   357,
     362,   369,   381,   406,   430,   455,   480,   507,   536,   541,
     546,   553,   558,   563,   570,   571,   572,   575,   576,   577,
     583,   592,   603,   615,   622,   633,   660,   674,   700,   701,
     702,   703,   707,   708,   709,   710,   711,   712,   715,   723,
     738,   753,   766,   777,   796,   800,   814,   834,   850
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FOR", "WHILE",
  "DOWHILE", "ENDFOR", "ENDWHILE", "ENDDOWHILE", "VARIABLE", "VNUMERO",
  "VBOOL", "VSTRING", "VTRUE", "VFALSE", "STOP", "ESUMA", "ERESTA",
  "EMULT", "EDIV", "SIMBOLOS", "VARRAY", "SUMA", "RESTA", "MULT", "DIV",
  "EXPONT", "RAIZ", "IGUALM", "DE", "EN", "VESTATICA", "ELSE", "IF",
  "VDINAMICA", "MAYOR", "MENOR", "IGUAL", "DISTINTO", "MAYORIGUAL",
  "MENORIGUAL", "AND", "OR", "CLOSEIF", "ELSEIF", "NUMERO", "PRINTF",
  "TEXTO", "FINTEXTO", "INICIOP", "FINP", "PALABRA", "$accept", "S",
  "contenido", "contprint", "printrec", "tipoprint", "contif",
  "comprecursivo", "comparador", "dimensionvar", "contvar", "crearvar",
  "typevar", "numarrayvar", "contmat2", "contmat", "operador", "operador2",
  "recConmat", "parametro", "contfor", "contwhile", "contdowhile", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     180,   -32,   -32,   -32,     4,  -111,  -111,  -111,  -111,  -111,
    -111,   -32,   -11,   407,    22,   126,  -111,  -111,    -9,    57,
    -111,  -111,   199,   -32,  -111,   199,  -111,  -111,   199,  -111,
    -111,  -111,  -111,    16,    20,    32,  -111,  -111,  -111,   -22,
    -111,   199,  -111,  -111,  -111,    70,  -111,   145,  -111,   -32,
     -32,   -32,     4,   -32,  -111,  -111,  -111,  -111,    -2,    58,
     157,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   258,
     -32,   199,   285,   311,   -12,  -111,     2,  -111,     9,    40,
     239,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    63,
     -32,   419,  -111,  -111,  -111,  -111,  -111,    58,    58,  -111,
    -111,   330,  -111,  -111,  -111,    36,    54,    59,    43,   407,
    -111,   -32,  -111,    66,   -32,   -32,   419,   419,  -111,  -111,
      43,    43,  -111,  -111,  -111,  -111,  -111,   356,   199,   -32,
    -111,    71,  -111,  -111,  -111,   375,  -111,   -32,  -111,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     5,     9,     8,     0,     0,
      84,    83,     0,    31,    10,     0,    31,    11,     0,    12,
      54,    56,    55,     0,     0,     0,    52,     6,    40,    49,
       7,     0,    26,    25,    24,    21,    23,     3,     1,     0,
       0,     0,     0,     0,     4,    16,    15,    63,     0,     0,
       0,    32,    33,    34,    35,    38,    39,    36,    37,     0,
       0,     0,     0,     0,     0,    53,    50,    51,    48,    43,
       0,    20,    22,     2,    17,    18,    19,    13,    14,     0,
       0,    67,    82,    68,    69,    70,    71,     0,     0,    85,
      30,     0,    87,    88,    62,    41,    44,    42,     0,     0,
      27,     0,    64,     0,    79,     0,    66,    65,    86,    61,
       0,     0,    57,    58,    59,    60,    46,     0,     0,     0,
      78,     0,    47,    45,    28,     0,    81,     0,    29,    80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,    -5,   -10,  -111,    47,    48,     1,  -111,    53,
      73,   -33,  -110,  -111,    -8,  -111,    50,   -18,   -52,    -1,
      62,    72,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    14,    15,    16,    45,    46,    40,    22,    70,    37,
      38,    39,   126,   105,    17,    18,   114,    19,    91,    26,
      24,    27,    29
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    76,    78,    25,    28,    55,    57,    56,    47,    42,
     132,   133,    41,    20,    30,    31,    32,    69,    60,    21,
      72,    58,    48,    73,    71,    33,    30,    31,    32,    79,
      30,    31,    32,   104,    43,    34,    80,    55,    35,    56,
      44,    90,    30,    31,    32,   116,   117,    34,    23,    89,
      35,    25,    28,   106,    41,    36,   122,   123,    92,    55,
     107,    56,    55,    55,    56,    56,   101,    36,   108,   100,
      55,    75,    56,   115,     5,     6,     7,     8,   112,    90,
      90,   119,   120,    77,     9,    10,    59,   121,   124,   113,
      42,    55,    82,    56,   125,   129,    92,    92,   115,   115,
     137,    88,    20,    20,   127,    87,    74,    86,    21,    21,
      98,    84,   128,   130,   131,    43,     0,    55,    81,    56,
       0,    44,    85,   135,     0,    55,     0,    56,   136,    49,
      50,    51,     0,     0,     0,    52,   139,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     0,     0,    49,    50,
      51,     0,     9,    10,    52,     0,     0,     0,     0,    53,
       0,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     9,    10,    12,     0,     0,    54,     0,    53,    93,
      94,    95,    96,     1,     2,     3,    97,     0,     0,     4,
       0,     0,    12,     0,     0,    83,     5,     6,     7,     8,
       0,     0,     1,     2,     3,     0,     9,    10,     4,     0,
       0,     0,     0,    11,     0,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    12,     0,    13,
       0,     0,    11,     0,    61,    62,    63,    64,    65,    66,
      67,    68,    49,    50,    51,     0,    12,     0,    52,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     0,
       0,    49,    50,    51,    99,     9,    10,    52,     0,     0,
       0,   109,    53,     0,     5,     6,     7,     8,     0,     0,
       0,     0,   110,   111,     9,    10,    12,     0,    49,    50,
      51,    53,   102,     0,    52,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,    12,     0,     0,     0,     0,
       0,     9,    10,     0,    49,    50,    51,     0,    53,   103,
      52,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,    12,    49,    50,    51,   118,     9,    10,    52,
       0,     0,     0,     0,    53,     0,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     9,    10,    12,    49,
      50,    51,     0,    53,     0,    52,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     0,    12,    49,    50,
      51,     0,     9,    10,    52,     0,     0,     0,     0,    53,
       0,     5,     6,     7,     8,     0,     0,     0,     0,   134,
       0,     9,    10,    12,     0,     0,     0,     0,    53,     0,
       1,     2,     3,     0,     0,     0,     4,     0,   138,     0,
       0,     0,    12,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     9,    10,     5,     6,     7,     8,     0,
      11,    93,    94,    95,    96,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    12
};

static const yytype_int16 yycheck[] =
{
       1,    34,    35,     2,     3,    15,    15,    15,    13,    20,
     120,   121,    11,    45,    10,    11,    12,    22,    19,    51,
      25,    30,     0,    28,    23,    21,    10,    11,    12,    51,
      10,    11,    12,    45,    45,    31,    41,    47,    34,    47,
      51,    59,    10,    11,    12,    97,    98,    31,    49,    51,
      34,    50,    51,    51,    53,    51,    13,    14,    59,    69,
      51,    69,    72,    73,    72,    73,    71,    51,    28,    70,
      80,    51,    80,    91,    16,    17,    18,    19,    15,    97,
      98,    45,    28,    51,    26,    27,    29,    28,    45,    90,
      20,   101,    45,   101,    51,    29,    97,    98,   116,   117,
      29,    53,    45,    45,   109,    52,    33,    51,    51,    51,
      60,    49,   111,   114,   115,    45,    -1,   127,    48,   127,
      -1,    51,    50,   128,    -1,   135,    -1,   135,   129,     3,
       4,     5,    -1,    -1,    -1,     9,   137,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,     3,     4,
       5,    -1,    26,    27,     9,    -1,    -1,    -1,    -1,    33,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    47,    -1,    -1,    50,    -1,    33,    22,
      23,    24,    25,     3,     4,     5,    29,    -1,    -1,     9,
      -1,    -1,    47,    -1,    -1,    50,    16,    17,    18,    19,
      -1,    -1,     3,     4,     5,    -1,    26,    27,     9,    -1,
      -1,    -1,    -1,    33,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    47,    -1,    49,
      -1,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,     3,     4,     5,    -1,    47,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,     3,     4,     5,     6,    26,    27,     9,    -1,    -1,
      -1,    32,    33,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    43,    44,    26,    27,    47,    -1,     3,     4,
       5,    33,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    47,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,     3,     4,     5,    -1,    33,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    47,     3,     4,     5,     6,    26,    27,     9,
      -1,    -1,    -1,    -1,    33,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    47,     3,
       4,     5,    -1,    33,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    47,     3,     4,
       5,    -1,    26,    27,     9,    -1,    -1,    -1,    -1,    33,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    43,
      -1,    26,    27,    47,    -1,    -1,    -1,    -1,    33,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    43,    -1,
      -1,    -1,    47,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    16,    17,    18,    19,    -1,
      33,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    16,    17,    18,    19,    26,
      27,    33,    47,    49,    53,    54,    55,    66,    67,    69,
      45,    51,    59,    71,    72,    59,    71,    73,    59,    74,
      10,    11,    12,    21,    31,    34,    51,    61,    62,    63,
      58,    59,    20,    45,    51,    56,    57,    54,     0,     3,
       4,     5,     9,    33,    50,    55,    66,    15,    30,    29,
      71,    35,    36,    37,    38,    39,    40,    41,    42,    54,
      60,    59,    54,    54,    62,    51,    63,    51,    63,    51,
      54,    48,    57,    50,    72,    73,    74,    61,    58,    51,
      69,    70,    71,    22,    23,    24,    25,    29,    68,     6,
      71,    54,     7,     8,    45,    65,    51,    51,    28,    32,
      43,    44,    15,    71,    68,    69,    70,    70,     6,    45,
      28,    28,    13,    14,    45,    51,    64,    54,    59,    29,
      71,    71,    64,    64,    43,    54,    71,    29,    43,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    71,    71,    72,    72,    73,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     2,     1,     1,
       2,     2,     2,     3,     3,     2,     2,     3,     3,     3,
       3,     2,     2,     1,     1,     1,     1,     3,     5,     6,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     3,     5,     4,     5,     2,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     4,     4,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       5,     4,     1,     1,     1,     3,     4,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* S: INICIOP contenido FINP  */
#line 31 "final.y"
                           {
			printf("#include <stdio.h>\n#include <math.h>\n\nint main() {\n\n");
			printf("%s",(yyvsp[-1].string));
			printf("\n\n};\n");
			}
#line 1307 "final.tab.c"
    break;

  case 3: /* S: INICIOP contenido  */
#line 36 "final.y"
                           {
		sprintf(error, "No se ha encontrado 'fin programa'"); 
		yyerror(error);
		YYABORT;

	}
#line 1318 "final.tab.c"
    break;

  case 4: /* S: contenido FINP  */
#line 42 "final.y"
                        {
		sprintf(error, "No se ha encontrado 'inicio programa'"); 
		yyerror(error);
		YYABORT;

	}
#line 1329 "final.tab.c"
    break;

  case 5: /* S: contenido  */
#line 48 "final.y"
                    {
		sprintf(error, "No se ha encontrado 'inicio y fin programa'"); 
		yyerror(error);
		YYABORT;

	}
#line 1340 "final.tab.c"
    break;

  case 6: /* contenido: VARIABLE dimensionvar  */
#line 58 "final.y"
                                     {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );		
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
			}
#line 1354 "final.tab.c"
    break;

  case 7: /* contenido: IF contif  */
#line 67 "final.y"
                            {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
			}
#line 1369 "final.tab.c"
    break;

  case 8: /* contenido: contmat2  */
#line 77 "final.y"
                           {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
			}
#line 1383 "final.tab.c"
    break;

  case 9: /* contenido: contprint  */
#line 86 "final.y"
                             {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1397 "final.tab.c"
    break;

  case 10: /* contenido: FOR contfor  */
#line 95 "final.y"
                               {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1412 "final.tab.c"
    break;

  case 11: /* contenido: WHILE contwhile  */
#line 105 "final.y"
                                   {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1427 "final.tab.c"
    break;

  case 12: /* contenido: DOWHILE contdowhile  */
#line 115 "final.y"
                                       {
				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1442 "final.tab.c"
    break;

  case 13: /* contenido: contenido VARIABLE dimensionvar  */
#line 125 "final.y"
                                                   {
     	     	 	char * auxcont;
					auxcont= (char*)malloc ( 500*500*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1457 "final.tab.c"
    break;

  case 14: /* contenido: contenido IF contif  */
#line 135 "final.y"
                                       {
     	     	 	char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					printf("%d\n",*tabulaciones);
					strcpy(auxcont, (yyvsp[-2].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					
					(yyval.string) = auxcont;
					}
#line 1475 "final.tab.c"
    break;

  case 15: /* contenido: contenido contmat2  */
#line 148 "final.y"
                                       {
     	     		char * auxcont;
					auxcont = (char*)malloc (500*500*sizeof(char) );
					strcpy(auxcont, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					
					(yyval.string) = auxcont;}
#line 1490 "final.tab.c"
    break;

  case 16: /* contenido: contenido contprint  */
#line 158 "final.y"
                                       {
     	     		char * auxcont;
					auxcont = (char*)malloc (500*500*sizeof(char) );
					strcpy(auxcont, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1505 "final.tab.c"
    break;

  case 17: /* contenido: contenido FOR contfor  */
#line 169 "final.y"
                                         {
     	     		char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					strcpy(auxcont, (yyvsp[-2].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1521 "final.tab.c"
    break;

  case 18: /* contenido: contenido WHILE contwhile  */
#line 180 "final.y"
                                             {
     	     				char * auxcont;
					auxcont = (char*)malloc (500*500*sizeof(char) );
					*tabulaciones -=1;
					strcpy(auxcont, (yyvsp[-2].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1537 "final.tab.c"
    break;

  case 19: /* contenido: contenido DOWHILE contdowhile  */
#line 191 "final.y"
                                                 {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 500*500*sizeof(char) );
					*tabulaciones -=1;
					strcpy(auxcont, (yyvsp[-2].string));
					for (int i = 0; i < *tabulaciones; i++){
						strcat(auxcont, "\t");
					}
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;
					}
#line 1553 "final.tab.c"
    break;

  case 20: /* contprint: TEXTO printrec FINTEXTO  */
#line 208 "final.y"
                                    {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcat(aux, "printf(");
				strcat(aux,"\"");
				strcat(aux,(yyvsp[-1].string));
				strcat(aux,"\\n\");");
				(yyval.string) = aux;
			}
#line 1567 "final.tab.c"
    break;

  case 21: /* contprint: TEXTO printrec  */
#line 217 "final.y"
                                         {
				sprintf(error, "No se ha encontrado 'fintexto'"); 
				yyerror(error);
				YYABORT;
				
			}
#line 1578 "final.tab.c"
    break;

  case 22: /* printrec: printrec tipoprint  */
#line 226 "final.y"
                              {
			char * auxcont;
			auxcont = (char*)malloc (500*sizeof(char) );
			strcpy(auxcont, (yyvsp[-1].string));
			strcat(auxcont, (yyvsp[0].string));
			(yyval.string) = auxcont;
		}
#line 1590 "final.tab.c"
    break;

  case 23: /* printrec: tipoprint  */
#line 233 "final.y"
                           {(yyval.string) = (yyvsp[0].string);}
#line 1596 "final.tab.c"
    break;

  case 24: /* tipoprint: PALABRA  */
#line 237 "final.y"
                      { 
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, " ");
				strcat(aux,(yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 1608 "final.tab.c"
    break;

  case 25: /* tipoprint: NUMERO  */
#line 244 "final.y"
                                 { 
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, " ");
				strcat(aux,(yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 1620 "final.tab.c"
    break;

  case 26: /* tipoprint: SIMBOLOS  */
#line 251 "final.y"
                                   { 
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, " ");
				strcat(aux,(yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 1632 "final.tab.c"
    break;

  case 27: /* contif: comprecursivo contenido CLOSEIF  */
#line 264 "final.y"
                                          {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "if");
					strcat(aux, "(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ")");
					strcat(aux, "{\n");
					strcat(aux, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "};\n");	
					(yyval.string) = aux;
		}
#line 1652 "final.tab.c"
    break;

  case 28: /* contif: comprecursivo contenido ELSE contenido CLOSEIF  */
#line 280 "final.y"
                                                                 {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "if");
					strcat(aux, "(");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, ")");
					strcat(aux, "{\n");
					strcat(aux, (yyvsp[-3].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "} else {\n");
					strcat(aux, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "};\n");
					(yyval.string) = aux;
					}
#line 1677 "final.tab.c"
    break;

  case 29: /* contif: comprecursivo contenido ELSEIF comprecursivo contenido CLOSEIF  */
#line 301 "final.y"
                                                                                 {
						char * aux;
						aux = (char*)malloc ( 500*sizeof(char) );
						strcpy(aux, "if");
						strcat(aux, "(");
						strcat(aux, (yyvsp[-5].string));
						strcat(aux, ")");
						strcat(aux, "{\n");
						strcat(aux, (yyvsp[-4].string));
						for (int i = 0; i < *tabulaciones-1; i++){
							strcat(aux, "\t");
						}
						strcat(aux, "} else if(");
						strcat(aux, (yyvsp[-2].string));
						strcat(aux, ") {\n");
						strcat(aux, (yyvsp[-1].string));
						for (int i = 0; i < *tabulaciones-1; i++){
							strcat(aux, "\t");
						}
						strcat(aux, "};\n");
						(yyval.string) = aux;
						}
#line 1704 "final.tab.c"
    break;

  case 30: /* comprecursivo: comprecursivo comparador parametro  */
#line 328 "final.y"
                                                 {
				char * auxcont;
				auxcont= (char*)malloc( 100*sizeof(char) );
				if ((strcmp((yyvsp[-1].string),"||") == 0) ||(strcmp((yyvsp[-1].string),"&&") == 0)){
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, " ");
					strcat(auxcont, (yyvsp[-1].string));
					strcat(auxcont, " ");
					strcat(auxcont, (yyvsp[0].string));	
				}else{
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, (yyvsp[-1].string));
					strcat(auxcont, (yyvsp[0].string));				
				}
				(yyval.string) = auxcont;
				}
#line 1725 "final.tab.c"
    break;

  case 31: /* comprecursivo: parametro  */
#line 344 "final.y"
                           {
	        		*tabulaciones +=1;	
	        		(yyval.string) = (yyvsp[0].string);
	        	    }
#line 1734 "final.tab.c"
    break;

  case 32: /* comparador: MAYOR  */
#line 350 "final.y"
                   {(yyval.string)=">";}
#line 1740 "final.tab.c"
    break;

  case 33: /* comparador: MENOR  */
#line 351 "final.y"
                           {(yyval.string)="<";}
#line 1746 "final.tab.c"
    break;

  case 34: /* comparador: IGUAL  */
#line 352 "final.y"
                           {(yyval.string)="==";}
#line 1752 "final.tab.c"
    break;

  case 35: /* comparador: DISTINTO  */
#line 353 "final.y"
                              {(yyval.string)="!=";}
#line 1758 "final.tab.c"
    break;

  case 36: /* comparador: AND  */
#line 354 "final.y"
                         {(yyval.string)="&&";}
#line 1764 "final.tab.c"
    break;

  case 37: /* comparador: OR  */
#line 355 "final.y"
                        {(yyval.string)="||";}
#line 1770 "final.tab.c"
    break;

  case 38: /* comparador: MAYORIGUAL  */
#line 356 "final.y"
                                {(yyval.string)=">=";}
#line 1776 "final.tab.c"
    break;

  case 39: /* comparador: MENORIGUAL  */
#line 357 "final.y"
                                {(yyval.string)="<=";}
#line 1782 "final.tab.c"
    break;

  case 40: /* dimensionvar: contvar  */
#line 362 "final.y"
                      {		
					char * auxdim;
					auxdim = (char*)malloc ( 100*sizeof(char) );
					strcpy(auxdim, (yyvsp[0].string));
					strcat(auxdim, ";\n");
					(yyval.string) = auxdim;
					}
#line 1794 "final.tab.c"
    break;

  case 41: /* dimensionvar: VARRAY contvar numarrayvar  */
#line 369 "final.y"
                                          {
					char * auxdim;
					auxdim = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxdim, "");
					strcat(auxdim, (yyvsp[-1].string));
					strcat(auxdim, " ");
					strcat(auxdim, (yyvsp[0].string));
					strcat(auxdim, ";\n");
					(yyval.string) = auxdim;
	       			}
#line 1809 "final.tab.c"
    break;

  case 42: /* contvar: VDINAMICA crearvar PALABRA  */
#line 381 "final.y"
                                    {
				char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * esvariable;
				
				strcpy(auxvar, "-");
				strcat(auxvar, (yyvsp[0].string));
				strcat(auxvar, "-");
				esvariable = strstr(variables, auxvar);				
				
				if(esvariable == NULL){
					strcat(variables, auxvar);
					
					strcpy(auxvar, (yyvsp[-1].string));
					strcat(auxvar, "* ");
					strcat(auxvar, (yyvsp[0].string));
					
					(yyval.string) = auxvar;
				}else{
					sprintf(error, "Variable '%s' ya creada", 							(yyvsp[0].string)); 
					yyerror(error);
					YYABORT;				
				}
				
			}
#line 1839 "final.tab.c"
    break;

  case 43: /* contvar: crearvar PALABRA  */
#line 406 "final.y"
                            {
  	 			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * esvariable;
				
				strcpy(auxvar, "-");
				strcat(auxvar, (yyvsp[0].string));
				strcat(auxvar, "-");
				esvariable = strstr(variables, auxvar);				
				
				if(esvariable == NULL){
					strcat(variables, auxvar);
					
					strcpy(auxvar, (yyvsp[-1].string));
					strcat(auxvar, (yyvsp[0].string));
					
					(yyval.string) = auxvar;
				}else{
					sprintf(error, "Variable '%s' ya creada", 							(yyvsp[0].string)); 
					yyerror(error);
					YYABORT;				
				}
  	  			
			}
#line 1868 "final.tab.c"
    break;

  case 44: /* contvar: VESTATICA crearvar PALABRA  */
#line 430 "final.y"
                                      {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * esvariable;
				
				strcpy(auxvar, "-");
				strcat(auxvar, (yyvsp[0].string));
				strcat(auxvar, "-");
				esvariable = strstr(variables, auxvar);				
				
				if(esvariable == NULL){
					strcat(variables, auxvar);
					
					strcpy(auxvar, (yyvsp[-1].string));
					strcat(auxvar, (yyvsp[0].string));
					
					(yyval.string) = auxvar;
				}else{
					sprintf(error, "Variable '%s' ya creada", 							(yyvsp[0].string)); 
					yyerror(error);
					YYABORT;				
				}
			}
#line 1896 "final.tab.c"
    break;

  case 45: /* contvar: VDINAMICA crearvar PALABRA IGUALM typevar  */
#line 455 "final.y"
                                                     {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * auxvar2;
				auxvar2 = (char*)malloc ( 100*sizeof(char) );
				char * control;
				char * partes;
				
				strcpy(auxvar, (yyvsp[-3].string)); //Variable salida
				strcpy(auxvar2, (yyvsp[0].string));  //Variable con control de tipo
				partes = strtok((yyvsp[0].string), "-"); //Variable con el valor del tipo
				control = memchr(auxvar2, '-', strlen(auxvar2));
				control = strtok(control, "-");
				
				if (strcmp(control,auxvar) == 0){
					strcat(auxvar, (yyvsp[-2].string));
					strcat(auxvar, "=");
					strcat(auxvar, (yyvsp[0].string));
					(yyval.string) = auxvar;
				}else{
					sprintf(error, "Encontrado tipo: %s . Se esperaba tipo: %s", control, auxvar); 
					yyerror(error);
					YYABORT;
				}
				}
#line 1926 "final.tab.c"
    break;

  case 46: /* contvar: crearvar PALABRA IGUALM typevar  */
#line 480 "final.y"
                                           {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * auxvar2;
				auxvar2 = (char*)malloc ( 100*sizeof(char) );
				char * control;
				char * partes;
				
				strcpy(auxvar, (yyvsp[-3].string)); //Variable salida
				strcpy(auxvar2, (yyvsp[0].string));  //Variable con control de tipo
				partes = strtok((yyvsp[0].string), "-"); //Variable con el valor del tipo
				control = memchr(auxvar2, '-', strlen(auxvar2));
				control = strtok(control, "-");
				
				if (strcmp(control,auxvar) == 0){
					strcat(auxvar, (yyvsp[-2].string));
					strcat(auxvar, "=");
					strcat(auxvar, (yyvsp[0].string));
					(yyval.string) = auxvar;
				}else{
					sprintf(error, "Encontrado tipo: %s . Se esperaba tipo: %s", control, auxvar); 
					yyerror(error);
					YYABORT;
				}
				
				
			}
#line 1958 "final.tab.c"
    break;

  case 47: /* contvar: VESTATICA crearvar PALABRA IGUALM typevar  */
#line 507 "final.y"
                                                     {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * auxvar2;
				auxvar2 = (char*)malloc ( 100*sizeof(char) );
				char * control;
				char * partes;
				
				strcpy(auxvar, (yyvsp[-3].string)); //Variable salida
				strcpy(auxvar2, (yyvsp[0].string));  //Variable con control de tipo
				partes = strtok((yyvsp[0].string), "-"); //Variable con el valor del tipo
				control = memchr(auxvar2, '-', strlen(auxvar2));
				control = strtok(control, "-");
				
				if (strcmp(control,auxvar) == 0){
					strcat(auxvar, (yyvsp[-2].string));
					strcat(auxvar, "=");
					strcat(auxvar, (yyvsp[0].string));
					(yyval.string) = auxvar;
				}else{
					sprintf(error, "Encontrado tipo: %s . Se esperaba tipo: %s", control, auxvar); 
					yyerror(error);
					YYABORT;
				}
				}
#line 1988 "final.tab.c"
    break;

  case 48: /* contvar: VDINAMICA crearvar  */
#line 536 "final.y"
                               {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1998 "final.tab.c"
    break;

  case 49: /* contvar: crearvar  */
#line 541 "final.y"
                     {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 2008 "final.tab.c"
    break;

  case 50: /* contvar: VESTATICA crearvar  */
#line 546 "final.y"
                               {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 2018 "final.tab.c"
    break;

  case 51: /* contvar: VDINAMICA PALABRA  */
#line 553 "final.y"
                             {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 2028 "final.tab.c"
    break;

  case 52: /* contvar: PALABRA  */
#line 558 "final.y"
                    {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 2038 "final.tab.c"
    break;

  case 53: /* contvar: VESTATICA PALABRA  */
#line 563 "final.y"
                             {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 2048 "final.tab.c"
    break;

  case 54: /* crearvar: VNUMERO  */
#line 570 "final.y"
                   {(yyval.string) = "int ";}
#line 2054 "final.tab.c"
    break;

  case 55: /* crearvar: VSTRING  */
#line 571 "final.y"
                     {(yyval.string) = "char ";}
#line 2060 "final.tab.c"
    break;

  case 56: /* crearvar: VBOOL  */
#line 572 "final.y"
                   {(yyval.string) = "bool  ";}
#line 2066 "final.tab.c"
    break;

  case 57: /* typevar: VTRUE  */
#line 575 "final.y"
               {(yyval.string) = "true-bool ";}
#line 2072 "final.tab.c"
    break;

  case 58: /* typevar: VFALSE  */
#line 576 "final.y"
                  {(yyval.string) = "false-bool ";}
#line 2078 "final.tab.c"
    break;

  case 59: /* typevar: NUMERO  */
#line 577 "final.y"
                  {		char * auxtype;
				auxtype = (char*)malloc ( 50*sizeof(char) );
				strcpy(auxtype, (yyvsp[0].string));
				strcat(auxtype, "-int ");
				(yyval.string) = auxtype;
				}
#line 2089 "final.tab.c"
    break;

  case 60: /* typevar: PALABRA  */
#line 583 "final.y"
                   {		char * auxtype;
				auxtype = (char*)malloc ( 50*sizeof(char) );
				strcpy(auxtype, (yyvsp[0].string));
				strcat(auxtype, "-char ");
				(yyval.string) = auxtype;
				}
#line 2100 "final.tab.c"
    break;

  case 61: /* numarrayvar: numarrayvar NUMERO  */
#line 592 "final.y"
                                {
				char * auxnum;
				auxnum = (char*)malloc ( 100*sizeof(char) );
				auxnum[0] = '[';
				strcpy(auxnum, (yyvsp[-1].string));
				strcat(auxnum, "[");
				strcat(auxnum, (yyvsp[0].string));
				strcat(auxnum, "]");
				(yyval.string) = auxnum;
				}
#line 2115 "final.tab.c"
    break;

  case 62: /* numarrayvar: NUMERO  */
#line 603 "final.y"
                     {
	     			char * auxnum;
				auxnum = (char*)malloc ( 100*sizeof(char) );
				auxnum[0] = '[';
				strcat(auxnum, (yyvsp[0].string));
				strcat(auxnum, "]");
				(yyval.string) = auxnum;
				}
#line 2128 "final.tab.c"
    break;

  case 63: /* contmat2: contmat STOP  */
#line 615 "final.y"
                               {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "");
					strcat(aux, (yyvsp[-1].string));
					(yyval.string) = aux;
			}
#line 2140 "final.tab.c"
    break;

  case 64: /* contmat2: contmat EN PALABRA STOP  */
#line 622 "final.y"
                                              {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, " = "); 
					strcat(aux, (yyvsp[-3].string));
					(yyval.string) = aux;

		   }
#line 2155 "final.tab.c"
    break;

  case 65: /* contmat: operador2 parametro operador recConmat  */
#line 633 "final.y"
                                                  {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );

					if(strcmp((yyvsp[-3].string), "pow")==0 || strcmp((yyvsp[-3].string), "sqrt")==0){	
						strcpy(aux, (yyvsp[-3].string));
						strcat(aux, "(");
						strcat(aux, (yyvsp[-2].string));
						strcat(aux, ",");
						strcat(aux, (yyvsp[0].string));
						strcat(aux, ");\n");
					} else {
						if(strcmp((yyvsp[-3].string), (yyvsp[-1].string))==0) {
							strcpy(aux, (yyvsp[-2].string));
							strcat(aux, (yyvsp[-1].string));
							strcat(aux, (yyvsp[0].string));
							strcat(aux, ";\n");
						} else {
							sprintf(error, "Error, No se esta realizando la misma operación\n");
							yyerror(error);
							YYABORT;
						}
					}
					*op = 0;
					(yyval.string) = aux;
				}
#line 2186 "final.tab.c"
    break;

  case 66: /* contmat: operador2 parametro DE recConmat  */
#line 660 "final.y"
                                                   {
			char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
			
				strcpy(aux, (yyvsp[-3].string));
				strcat(aux, (yyvsp[-2].string));
				strcat(aux, "(");
				strcat(aux, (yyvsp[-1].string));
				strcat(aux, ",");
				strcat(aux, (yyvsp[0].string));
				strcat(aux, ");");
				*op = 0;
				(yyval.string) = aux;
		}
#line 2205 "final.tab.c"
    break;

  case 67: /* contmat: operador2 DE recConmat  */
#line 674 "final.y"
                                          {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				char * aux1;
				aux1 = (char*)malloc ( 100*sizeof(char) );
				char * aux2;
				aux2 = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, "");
			
				aux1 = strstr((yyvsp[0].string), " ");
			
				if(strcmp(aux1, " ")!=0) {
					strcat(aux, aux1);
					strcat(aux, " = ");
				} 
				strcat(aux, (yyvsp[-2].string));
				strcat(aux, "(");
				aux2 = strtok((yyvsp[0].string), " ");
				strcat(aux, aux2);
				strcat(aux, ");\n");
				*op = 0;
				(yyval.string) = aux;
			}
#line 2233 "final.tab.c"
    break;

  case 68: /* operador: SUMA  */
#line 700 "final.y"
                      {(yyval.string)="+";}
#line 2239 "final.tab.c"
    break;

  case 69: /* operador: RESTA  */
#line 701 "final.y"
                           {(yyval.string)="-";}
#line 2245 "final.tab.c"
    break;

  case 70: /* operador: MULT  */
#line 702 "final.y"
                          {(yyval.string)="*";}
#line 2251 "final.tab.c"
    break;

  case 71: /* operador: DIV  */
#line 703 "final.y"
                         {(yyval.string)="/";}
#line 2257 "final.tab.c"
    break;

  case 72: /* operador2: ESUMA  */
#line 707 "final.y"
                       {(yyval.string)="+";}
#line 2263 "final.tab.c"
    break;

  case 73: /* operador2: ERESTA  */
#line 708 "final.y"
                            {(yyval.string)="-";}
#line 2269 "final.tab.c"
    break;

  case 74: /* operador2: EMULT  */
#line 709 "final.y"
                           {(yyval.string)="*";}
#line 2275 "final.tab.c"
    break;

  case 75: /* operador2: EDIV  */
#line 710 "final.y"
                          {(yyval.string)="/";}
#line 2281 "final.tab.c"
    break;

  case 76: /* operador2: EXPONT  */
#line 711 "final.y"
                            {(yyval.string)="pow";}
#line 2287 "final.tab.c"
    break;

  case 77: /* operador2: RAIZ  */
#line 712 "final.y"
                          {(yyval.string)="sqrt";}
#line 2293 "final.tab.c"
    break;

  case 78: /* recConmat: recConmat operador parametro  */
#line 715 "final.y"
                                            {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, (yyvsp[-2].string));
				strcat(aux, (yyvsp[-1].string));
				strcat(aux, (yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 2306 "final.tab.c"
    break;

  case 79: /* recConmat: recConmat operador  */
#line 723 "final.y"
                                             {
				*op += 1;
				if(*op > 0) {
					sprintf(error, "Se estan escribiendo operadores consecutivos\n");
					yyerror(error);
					YYABORT;

				}
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, (yyvsp[-1].string));
				strcat(aux, (yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 2325 "final.tab.c"
    break;

  case 80: /* recConmat: recConmat operador2 parametro DE parametro  */
#line 738 "final.y"
                                                                     {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
			
				strcpy(aux, (yyvsp[-4].string));
				strcat(aux, (yyvsp[-3].string));
				strcat(aux, "(");
				strcat(aux, (yyvsp[-2].string));
				strcat(aux, ",");
				strcat(aux, (yyvsp[0].string));
				strcat(aux, ")");
				(yyval.string) = aux;

			}
#line 2344 "final.tab.c"
    break;

  case 81: /* recConmat: operador2 parametro DE parametro  */
#line 753 "final.y"
                                                            {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
			
				strcpy(aux, (yyvsp[-3].string));
				strcat(aux, "(");
				strcat(aux, (yyvsp[-2].string));
				strcat(aux, ",");
				strcat(aux, (yyvsp[0].string));
				strcat(aux, ")");
				(yyval.string) = aux;

			}
#line 2362 "final.tab.c"
    break;

  case 82: /* recConmat: parametro  */
#line 766 "final.y"
                                    {
				*op -= 1;
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, (yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 2374 "final.tab.c"
    break;

  case 83: /* parametro: PALABRA  */
#line 777 "final.y"
                      {
				char * auxp;
				auxp = (char*)malloc ( 100*sizeof(char) );
				char * esvariable;
				
				strcpy(auxp, "-");
				strcat(auxp, (yyvsp[0].string));
				strcat(auxp, "-");
				esvariable = strstr(variables, auxp);				
				
				if(esvariable != NULL){
					strcat(variables, auxp);		
					(yyval.string) = (yyvsp[0].string);
				}else{
					sprintf(error, "Variable '%s' no esta creada", (yyvsp[0].string)); 
					yyerror(error);
					YYABORT;				
				}
			}
#line 2398 "final.tab.c"
    break;

  case 84: /* parametro: NUMERO  */
#line 796 "final.y"
                             {(yyval.string)=(yyvsp[0].string);}
#line 2404 "final.tab.c"
    break;

  case 85: /* contfor: comprecursivo contenido ENDFOR  */
#line 800 "final.y"
                                         {	
 					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					
					strcpy(aux, "for(int i = 0;i < ");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ";i++){\n ");
					strcat(aux, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "};\n");
					(yyval.string) = aux;
					}
#line 2423 "final.tab.c"
    break;

  case 86: /* contfor: parametro comprecursivo contenido ENDFOR  */
#line 814 "final.y"
                                                    {
 	  				char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					
					strcpy(aux, "for(int i = ");
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, ";i < ");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ";i++){\n ");
					strcat(aux, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "};\n");
					(yyval.string) = aux;
					}
#line 2444 "final.tab.c"
    break;

  case 87: /* contwhile: comprecursivo contenido ENDWHILE  */
#line 834 "final.y"
                                             {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "while(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ")");
					strcat(aux, "{\n");
					strcat(aux, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "};\n");
					(yyval.string) = aux;
					}
#line 2463 "final.tab.c"
    break;

  case 88: /* contdowhile: comprecursivo contenido ENDDOWHILE  */
#line 850 "final.y"
                                                 {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "do{\n");
					strcat(aux, (yyvsp[-1].string));
					for (int i = 0; i < *tabulaciones-1; i++){
						strcat(aux, "\t");
					}
					strcat(aux, "}");
					strcat(aux, "while(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
					}
#line 2482 "final.tab.c"
    break;


#line 2486 "final.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 866 "final.y"

int main(int argc, char *argv[]) {
extern FILE *yyin;

	switch (argc) {
		case 1: yyin=stdin;
			variables = (char*)malloc ( 1000*1000*sizeof(char) );
			op = (int*)malloc ( 100*sizeof(char) );
			tabulaciones = (int*)malloc ( 10*sizeof(char) );
			*op = 0;
			*tabulaciones = 1;
			yyparse();
			break;
		case 2: yyin = fopen(argv[1], "r");
			if (yyin == NULL) {
				printf("ERROR: No se ha podido abrir el fichero.\n");
			}
			else {
				yyparse();
				fclose(yyin);
			}
			break;
		default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
	}

	return 0;
}
void yyerror (char const *message) {
  fprintf (stderr,"Sintaxis Pseudocodigo incorrecta. Error en línea %d: %s\n", yylineno, message);
    return;
}


