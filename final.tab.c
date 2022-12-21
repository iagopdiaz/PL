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

#line 81 "final.tab.c"

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
  YYSYMBOL_VARRAY = 16,                    /* VARRAY  */
  YYSYMBOL_SUMA = 17,                      /* SUMA  */
  YYSYMBOL_RESTA = 18,                     /* RESTA  */
  YYSYMBOL_MULT = 19,                      /* MULT  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_EXPONT = 21,                    /* EXPONT  */
  YYSYMBOL_RAIZ = 22,                      /* RAIZ  */
  YYSYMBOL_IGUALM = 23,                    /* IGUALM  */
  YYSYMBOL_DE = 24,                        /* DE  */
  YYSYMBOL_EN = 25,                        /* EN  */
  YYSYMBOL_VESTATICA = 26,                 /* VESTATICA  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_VDINAMICA = 29,                 /* VDINAMICA  */
  YYSYMBOL_MAYOR = 30,                     /* MAYOR  */
  YYSYMBOL_MENOR = 31,                     /* MENOR  */
  YYSYMBOL_IGUAL = 32,                     /* IGUAL  */
  YYSYMBOL_DISTINTO = 33,                  /* DISTINTO  */
  YYSYMBOL_MAYORIGUAL = 34,                /* MAYORIGUAL  */
  YYSYMBOL_MENORIGUAL = 35,                /* MENORIGUAL  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_CLOSEIF = 38,                   /* CLOSEIF  */
  YYSYMBOL_ELSEIF = 39,                    /* ELSEIF  */
  YYSYMBOL_NUMERO = 40,                    /* NUMERO  */
  YYSYMBOL_PALABRA = 41,                   /* PALABRA  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_S = 43,                         /* S  */
  YYSYMBOL_contenido = 44,                 /* contenido  */
  YYSYMBOL_contif = 45,                    /* contif  */
  YYSYMBOL_comprecursivo = 46,             /* comprecursivo  */
  YYSYMBOL_comparador = 47,                /* comparador  */
  YYSYMBOL_dimensionvar = 48,              /* dimensionvar  */
  YYSYMBOL_contvar = 49,                   /* contvar  */
  YYSYMBOL_crearvar = 50,                  /* crearvar  */
  YYSYMBOL_typevar = 51,                   /* typevar  */
  YYSYMBOL_numarrayvar = 52,               /* numarrayvar  */
  YYSYMBOL_contmat = 53,                   /* contmat  */
  YYSYMBOL_operador = 54,                  /* operador  */
  YYSYMBOL_recConmat = 55,                 /* recConmat  */
  YYSYMBOL_parametro = 56,                 /* parametro  */
  YYSYMBOL_contfor = 57,                   /* contfor  */
  YYSYMBOL_contwhile = 58,                 /* contwhile  */
  YYSYMBOL_contdowhile = 59                /* contdowhile  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    28,    28,    33,    34,    35,    36,    37,    38,    39,
      46,    54,    61,    68,    75,    89,   100,   114,   134,   150,
     158,   159,   160,   161,   162,   163,   164,   165,   170,   177,
     189,   197,   204,   213,   238,   265,   294,   299,   304,   311,
     316,   321,   328,   329,   330,   333,   334,   335,   341,   350,
     361,   373,   393,   405,   419,   429,   447,   448,   449,   450,
     451,   452,   455,   463,   473,   474,   479,   489,   505,   520
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
  "VBOOL", "VSTRING", "VTRUE", "VFALSE", "STOP", "VARRAY", "SUMA", "RESTA",
  "MULT", "DIV", "EXPONT", "RAIZ", "IGUALM", "DE", "EN", "VESTATICA",
  "ELSE", "IF", "VDINAMICA", "MAYOR", "MENOR", "IGUAL", "DISTINTO",
  "MAYORIGUAL", "MENORIGUAL", "AND", "OR", "CLOSEIF", "ELSEIF", "NUMERO",
  "PALABRA", "$accept", "S", "contenido", "contif", "comprecursivo",
  "comparador", "dimensionvar", "contvar", "crearvar", "typevar",
  "numarrayvar", "contmat", "operador", "recConmat", "parametro",
  "contfor", "contwhile", "contdowhile", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     265,   -36,   -35,   -32,     4,   -79,   -79,   -79,   -79,   -79,
     -79,   -17,    29,   285,   -79,    23,    22,   -79,   284,   -79,
     284,   -79,   -79,   -79,   -79,    26,    63,    75,   -79,   -79,
     -79,    -9,   -79,   -79,   149,   -79,   -36,   -35,   -32,     4,
     -17,   -79,   -29,   -79,   -79,   305,   265,   184,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     5,     8,    13,   -79,
      15,   -79,    16,    31,    79,    18,   -79,   -79,   -79,   -79,
     -79,   -12,   -29,   -29,   204,   -79,   265,   265,   -79,    20,
      45,    46,    98,   265,   -79,   -17,   -79,   -79,    30,    -8,
     -79,   142,   -79,   224,   245,   -79,    98,    98,   -79,   -79,
     -79,   -79,   -79,   105,   149,    55,   -79,    35,   -79,   -29,
     -79,   -79,   -79,   -79,   -79,   127,   -79,    62,   -79,   -79,
     -79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
      61,     0,     0,     2,     5,     0,     0,     6,     0,     7,
       0,     8,    42,    44,    43,     0,     0,     0,    40,     3,
      28,    37,    19,     4,     0,     1,     0,     0,     0,     0,
       0,    11,     0,    65,    64,     0,     0,     0,    20,    21,
      22,    23,    26,    27,    24,    25,     0,     0,     0,    41,
      38,    39,    36,    31,     0,     0,    12,    13,    14,     9,
      10,     0,     0,     0,     0,    66,     0,     0,    50,    29,
      32,    30,     0,     0,    15,     0,    18,    54,     0,     0,
      51,     0,    67,     0,     0,    49,     0,     0,    45,    46,
      47,    48,    34,     0,     0,     0,    52,     0,    63,     0,
      68,    69,    35,    33,    16,     0,    55,     0,    62,    17,
      53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -79,   -79,   -11,    38,    -6,   -10,    50,    66,    -5,   -78,
     -79,   -13,   -43,   -15,   -14,    56,    58,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    12,    13,    33,    34,    65,    29,    30,    31,   102,
      79,    14,    15,    90,    91,    17,    19,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      41,    45,    73,    87,    16,    47,    18,   106,    56,    20,
      57,    43,    44,    88,    22,    23,    24,   107,   112,   113,
      25,    60,    62,    64,    32,     1,     2,     3,    71,    35,
      26,     4,    63,    27,    41,    74,    22,    23,    24,     5,
       6,     7,     8,     9,    10,    28,    76,    42,   109,    77,
      11,    41,    26,    78,    82,    27,    80,    81,    89,    86,
      95,    41,    46,    43,    44,    93,    94,    28,    96,    97,
     116,   105,   103,    22,    23,    24,   117,   120,    70,   104,
      41,    41,    36,    37,    38,    22,    23,    24,    39,    69,
      41,    58,    66,   115,   118,    67,     5,     6,     7,     8,
       9,    10,    41,    68,    59,     0,    83,    40,    36,    37,
      38,    98,    99,     0,    39,     0,    61,    84,    85,     0,
       0,     0,     5,     6,     7,     8,     9,    10,     0,     0,
      36,    37,    38,    40,     0,     0,    39,     0,   100,   101,
       0,     0,     0,   114,     5,     6,     7,     8,     9,    10,
       0,     0,     1,     2,     3,    40,     0,   108,     4,     5,
       6,     7,     8,     9,    10,   119,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,     0,    11,     0,    48,
      49,    50,    51,    52,    53,    54,    55,    36,    37,    38,
      75,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    36,    37,    38,
      92,     0,    40,    39,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,    36,    37,    38,
       0,   110,    40,    39,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,    10,     0,    36,    37,
      38,     0,    40,   111,    39,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,     1,     2,
       3,     0,     0,    40,     4,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    36,    37,
      38,     0,     0,    11,    39,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,    40,    48,    49,    50,    51,    52,    53,
      54,    55,     5,     6,     7,     8,     9,    10,     0,    72
};

static const yytype_int8 yycheck[] =
{
      13,    15,    45,    15,    40,    16,    41,    15,    18,    41,
      20,    40,    41,    25,    10,    11,    12,    25,    96,    97,
      16,    26,    27,    34,    41,     3,     4,     5,    42,     0,
      26,     9,    41,    29,    47,    46,    10,    11,    12,    17,
      18,    19,    20,    21,    22,    41,    41,    24,    91,    41,
      28,    64,    26,    40,    23,    29,    41,    41,    72,    41,
      40,    74,    40,    40,    41,    76,    77,    41,    23,    23,
      15,    41,    83,    10,    11,    12,    41,    15,    40,    85,
      93,    94,     3,     4,     5,    10,    11,    12,     9,    39,
     103,    25,    36,   104,   109,    37,    17,    18,    19,    20,
      21,    22,   115,    38,    41,    -1,    27,    28,     3,     4,
       5,    13,    14,    -1,     9,    -1,    41,    38,    39,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
       3,     4,     5,    28,    -1,    -1,     9,    -1,    40,    41,
      -1,    -1,    -1,    38,    17,    18,    19,    20,    21,    22,
      -1,    -1,     3,     4,     5,    28,    -1,    15,     9,    17,
      18,    19,    20,    21,    22,    38,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,     3,     4,     5,
       6,    -1,    28,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,     3,     4,     5,
      -1,     7,    28,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,     3,     4,
       5,    -1,    28,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,     3,     4,
       5,    -1,    -1,    28,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,     3,     4,
       5,    -1,    -1,    28,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    28,    30,    31,    32,    33,    34,    35,
      36,    37,    17,    18,    19,    20,    21,    22,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    17,    18,    19,    20,    21,
      22,    28,    43,    44,    53,    54,    40,    57,    41,    58,
      41,    59,    10,    11,    12,    16,    26,    29,    41,    48,
      49,    50,    41,    45,    46,     0,     3,     4,     5,     9,
      28,    53,    24,    40,    41,    56,    40,    44,    30,    31,
      32,    33,    34,    35,    36,    37,    47,    47,    49,    41,
      50,    41,    50,    41,    44,    47,    57,    58,    59,    48,
      45,    56,    24,    54,    44,     6,    41,    41,    40,    52,
      41,    41,    23,    27,    38,    39,    41,    15,    25,    56,
      55,    56,     6,    44,    44,    40,    23,    23,    13,    14,
      40,    41,    51,    44,    46,    41,    15,    25,    15,    54,
       7,     8,    51,    51,    38,    44,    15,    41,    55,    38,
      15
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    45,    45,    45,    46,    46,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    50,    50,    51,    51,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     2,     2,     2,     3,
       3,     2,     3,     3,     3,     3,     5,     6,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     5,     4,     5,     2,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     4,     5,     7,     4,     6,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     4,     5,     5
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
  case 2: /* S: contenido  */
#line 28 "final.y"
              {printf("%s",(yyvsp[0].string));}
#line 1245 "final.tab.c"
    break;

  case 3: /* contenido: VARIABLE dimensionvar  */
#line 33 "final.y"
                                     {(yyval.string) = (yyvsp[0].string);}
#line 1251 "final.tab.c"
    break;

  case 4: /* contenido: IF contif  */
#line 34 "final.y"
                            {(yyval.string) = (yyvsp[0].string);}
#line 1257 "final.tab.c"
    break;

  case 5: /* contenido: contmat  */
#line 35 "final.y"
                                  {(yyval.string) = (yyvsp[0].string);}
#line 1263 "final.tab.c"
    break;

  case 6: /* contenido: FOR contfor  */
#line 36 "final.y"
                                      {(yyval.string) = (yyvsp[0].string);}
#line 1269 "final.tab.c"
    break;

  case 7: /* contenido: WHILE contwhile  */
#line 37 "final.y"
                                          {(yyval.string) = (yyvsp[0].string);}
#line 1275 "final.tab.c"
    break;

  case 8: /* contenido: DOWHILE contdowhile  */
#line 38 "final.y"
                                              {(yyval.string) = (yyvsp[0].string);}
#line 1281 "final.tab.c"
    break;

  case 9: /* contenido: contenido VARIABLE dimensionvar  */
#line 39 "final.y"
                                               {
     	     	 			char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1293 "final.tab.c"
    break;

  case 10: /* contenido: contenido IF contif  */
#line 46 "final.y"
                                   {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					
					(yyval.string) = auxcont;}
#line 1306 "final.tab.c"
    break;

  case 11: /* contenido: contenido contmat  */
#line 54 "final.y"
                                 {
     	     		char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-1].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1318 "final.tab.c"
    break;

  case 12: /* contenido: contenido FOR contfor  */
#line 61 "final.y"
                                     {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1330 "final.tab.c"
    break;

  case 13: /* contenido: contenido WHILE contwhile  */
#line 68 "final.y"
                                         {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1342 "final.tab.c"
    break;

  case 14: /* contenido: contenido DOWHILE contdowhile  */
#line 75 "final.y"
                                             {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1354 "final.tab.c"
    break;

  case 15: /* contif: comprecursivo contenido CLOSEIF  */
#line 89 "final.y"
                                          {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ")");
					strcat(aux, "{\n\t");
			;
					(yyval.string) = aux;
					}
#line 1370 "final.tab.c"
    break;

  case 16: /* contif: comprecursivo contenido ELSE contenido CLOSEIF  */
#line 100 "final.y"
                                                                   {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, ")");
					strcat(aux, "{\n");
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, "\n\t} else {\n\t\t");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t};\n");
					(yyval.string) = aux;
					}
#line 1389 "final.tab.c"
    break;

  case 17: /* contif: comprecursivo contenido ELSEIF comprecursivo contenido CLOSEIF  */
#line 114 "final.y"
                                                                          {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, (yyvsp[-5].string));
					strcat(aux, ")");
					strcat(aux, "{\n\t\t");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, "\n\t} else if(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ") {\n\t\t");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t};\n");
					(yyval.string) = aux;
					}
#line 1410 "final.tab.c"
    break;

  case 18: /* comprecursivo: comprecursivo comparador PALABRA  */
#line 134 "final.y"
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
#line 1431 "final.tab.c"
    break;

  case 19: /* comprecursivo: PALABRA  */
#line 150 "final.y"
                          {
	       		char * aux;
				aux = (char*)malloc ( 20*sizeof(char) );
				strcpy(aux, (yyvsp[0].string));
				(yyval.string) = aux;
	      }
#line 1442 "final.tab.c"
    break;

  case 20: /* comparador: MAYOR  */
#line 158 "final.y"
                   {(yyval.string)=">";}
#line 1448 "final.tab.c"
    break;

  case 21: /* comparador: MENOR  */
#line 159 "final.y"
                           {(yyval.string)="<";}
#line 1454 "final.tab.c"
    break;

  case 22: /* comparador: IGUAL  */
#line 160 "final.y"
                           {(yyval.string)="==";}
#line 1460 "final.tab.c"
    break;

  case 23: /* comparador: DISTINTO  */
#line 161 "final.y"
                              {(yyval.string)="!=";}
#line 1466 "final.tab.c"
    break;

  case 24: /* comparador: AND  */
#line 162 "final.y"
                         {(yyval.string)="&&";}
#line 1472 "final.tab.c"
    break;

  case 25: /* comparador: OR  */
#line 163 "final.y"
                        {(yyval.string)="||";}
#line 1478 "final.tab.c"
    break;

  case 26: /* comparador: MAYORIGUAL  */
#line 164 "final.y"
                                {(yyval.string)=">=";}
#line 1484 "final.tab.c"
    break;

  case 27: /* comparador: MENORIGUAL  */
#line 165 "final.y"
                                {(yyval.string)="<=";}
#line 1490 "final.tab.c"
    break;

  case 28: /* dimensionvar: contvar  */
#line 170 "final.y"
                      {		char * auxdim;
					auxdim = (char*)malloc ( 100*sizeof(char) );
					strcpy(auxdim, "\t");
					strcat(auxdim, (yyvsp[0].string));
					strcat(auxdim, ";\n");
					(yyval.string) = auxdim;
					}
#line 1502 "final.tab.c"
    break;

  case 29: /* dimensionvar: VARRAY contvar numarrayvar  */
#line 177 "final.y"
                                          {
					char * auxdim;
					auxdim = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxdim, "\t");
					strcat(auxdim, (yyvsp[-1].string));
					strcat(auxdim, " ");
					strcat(auxdim, (yyvsp[0].string));
					strcat(auxdim, ";\n");
					(yyval.string) = auxdim;
	       			}
#line 1517 "final.tab.c"
    break;

  case 30: /* contvar: VDINAMICA crearvar PALABRA  */
#line 189 "final.y"
                                    {
				char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, (yyvsp[-1].string));
				strcat(auxvar, "* ");
				strcat(auxvar, (yyvsp[0].string));
				(yyval.string) = auxvar;
				}
#line 1530 "final.tab.c"
    break;

  case 31: /* contvar: crearvar PALABRA  */
#line 197 "final.y"
                            {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, (yyvsp[-1].string));
				strcat(auxvar, (yyvsp[0].string));
				(yyval.string) = auxvar;
				}
#line 1542 "final.tab.c"
    break;

  case 32: /* contvar: VESTATICA crearvar PALABRA  */
#line 204 "final.y"
                                      {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, (yyvsp[-2].string));
				strcat(auxvar, (yyvsp[-1].string));
				(yyval.string) = auxvar;
				}
#line 1554 "final.tab.c"
    break;

  case 33: /* contvar: VDINAMICA crearvar PALABRA IGUALM typevar  */
#line 213 "final.y"
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
#line 1584 "final.tab.c"
    break;

  case 34: /* contvar: crearvar PALABRA IGUALM typevar  */
#line 238 "final.y"
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
#line 1616 "final.tab.c"
    break;

  case 35: /* contvar: VESTATICA crearvar PALABRA IGUALM typevar  */
#line 265 "final.y"
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
#line 1646 "final.tab.c"
    break;

  case 36: /* contvar: VDINAMICA crearvar  */
#line 294 "final.y"
                               {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1656 "final.tab.c"
    break;

  case 37: /* contvar: crearvar  */
#line 299 "final.y"
                     {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1666 "final.tab.c"
    break;

  case 38: /* contvar: VESTATICA crearvar  */
#line 304 "final.y"
                               {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1676 "final.tab.c"
    break;

  case 39: /* contvar: VDINAMICA PALABRA  */
#line 311 "final.y"
                             {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1686 "final.tab.c"
    break;

  case 40: /* contvar: PALABRA  */
#line 316 "final.y"
                    {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1696 "final.tab.c"
    break;

  case 41: /* contvar: VESTATICA PALABRA  */
#line 321 "final.y"
                             {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
#line 1706 "final.tab.c"
    break;

  case 42: /* crearvar: VNUMERO  */
#line 328 "final.y"
                   {(yyval.string) = "int ";}
#line 1712 "final.tab.c"
    break;

  case 43: /* crearvar: VSTRING  */
#line 329 "final.y"
                     {(yyval.string) = "char ";}
#line 1718 "final.tab.c"
    break;

  case 44: /* crearvar: VBOOL  */
#line 330 "final.y"
                   {(yyval.string) = "bool  ";}
#line 1724 "final.tab.c"
    break;

  case 45: /* typevar: VTRUE  */
#line 333 "final.y"
               {(yyval.string) = "true-bool ";}
#line 1730 "final.tab.c"
    break;

  case 46: /* typevar: VFALSE  */
#line 334 "final.y"
                  {(yyval.string) = "false-bool ";}
#line 1736 "final.tab.c"
    break;

  case 47: /* typevar: NUMERO  */
#line 335 "final.y"
                  {		char * auxtype;
				auxtype = (char*)malloc ( 50*sizeof(char) );
				strcpy(auxtype, (yyvsp[0].string));
				strcat(auxtype, "-int ");
				(yyval.string) = auxtype;
				}
#line 1747 "final.tab.c"
    break;

  case 48: /* typevar: PALABRA  */
#line 341 "final.y"
                   {		char * auxtype;
				auxtype = (char*)malloc ( 50*sizeof(char) );
				strcpy(auxtype, (yyvsp[0].string));
				strcat(auxtype, "-char ");
				(yyval.string) = auxtype;
				}
#line 1758 "final.tab.c"
    break;

  case 49: /* numarrayvar: numarrayvar NUMERO  */
#line 350 "final.y"
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
#line 1773 "final.tab.c"
    break;

  case 50: /* numarrayvar: NUMERO  */
#line 361 "final.y"
                     {
	     			char * auxnum;
				auxnum = (char*)malloc ( 100*sizeof(char) );
				auxnum[0] = '[';
				strcat(auxnum, (yyvsp[0].string));
				strcat(auxnum, "]");
				(yyval.string) = auxnum;
				}
#line 1786 "final.tab.c"
    break;

  case 51: /* contmat: operador parametro operador recConmat  */
#line 373 "final.y"
                                                {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					if(strcmp((yyvsp[-1].string), "pow")==0 || strcmp((yyvsp[-1].string), "sqrt")==0){	
						strcat(aux, (yyvsp[-1].string));
						strcat(aux, "(");
						strcat(aux, (yyvsp[-2].string));
						strcat(aux, ",");
						strcat(aux, (yyvsp[0].string));
						strcat(aux, ");\n");
					} else {
						strcat(aux, (yyvsp[-2].string));
						strcat(aux, (yyvsp[-1].string));
						strcat(aux, (yyvsp[0].string));
						strcat(aux, ";\n");
					}
					(yyval.string) = aux;
				}
#line 1810 "final.tab.c"
    break;

  case 52: /* contmat: operador parametro DE parametro STOP  */
#line 393 "final.y"
                                                       {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, "(");
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, ",");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
				}
#line 1827 "final.tab.c"
    break;

  case 53: /* contmat: operador parametro DE parametro EN PALABRA STOP  */
#line 405 "final.y"
                                                                  {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, " = ");
					strcat(aux, (yyvsp[-6].string));
					strcat(aux, "(");
					strcat(aux, (yyvsp[-5].string));
					strcat(aux, ",");
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
				}
#line 1846 "final.tab.c"
    break;

  case 54: /* contmat: operador DE parametro STOP  */
#line 419 "final.y"
                                              {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, "\t");
				strcat(aux, (yyvsp[-3].string));
				strcat(aux, "(");
				strcat(aux, (yyvsp[-1].string));
				strcat(aux, ");\n");
				(yyval.string) = aux;
			}
#line 1861 "final.tab.c"
    break;

  case 55: /* contmat: operador DE parametro EN PALABRA STOP  */
#line 429 "final.y"
                                                         {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, "\t");
				strcat(aux, (yyvsp[-1].string));
				strcat(aux, " = ");
				strcat(aux, (yyvsp[-5].string));
				strcat(aux, "(");
				strcat(aux, (yyvsp[-3].string));
				strcat(aux, ");\n");
				(yyval.string) = aux;
			}
#line 1878 "final.tab.c"
    break;

  case 56: /* operador: SUMA  */
#line 447 "final.y"
                      {(yyval.string)="+";}
#line 1884 "final.tab.c"
    break;

  case 57: /* operador: RESTA  */
#line 448 "final.y"
                           {(yyval.string)="-";}
#line 1890 "final.tab.c"
    break;

  case 58: /* operador: MULT  */
#line 449 "final.y"
                          {(yyval.string)="*";}
#line 1896 "final.tab.c"
    break;

  case 59: /* operador: DIV  */
#line 450 "final.y"
                         {(yyval.string)="/";}
#line 1902 "final.tab.c"
    break;

  case 60: /* operador: EXPONT  */
#line 451 "final.y"
                            {(yyval.string)="pow";}
#line 1908 "final.tab.c"
    break;

  case 61: /* operador: RAIZ  */
#line 452 "final.y"
                          {(yyval.string)="sqrt";}
#line 1914 "final.tab.c"
    break;

  case 62: /* recConmat: parametro operador recConmat  */
#line 455 "final.y"
                                           {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, (yyvsp[-2].string));
				strcat(aux, (yyvsp[-1].string));
				strcat(aux, (yyvsp[0].string));
				(yyval.string) = aux;
			}
#line 1927 "final.tab.c"
    break;

  case 63: /* recConmat: parametro STOP  */
#line 463 "final.y"
                                        {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, (yyvsp[-1].string));
				(yyval.string) = aux;
			}
#line 1938 "final.tab.c"
    break;

  case 64: /* parametro: PALABRA  */
#line 473 "final.y"
                      {(yyval.string)=(yyvsp[0].string);}
#line 1944 "final.tab.c"
    break;

  case 65: /* parametro: NUMERO  */
#line 474 "final.y"
                             {(yyval.string)=(yyvsp[0].string);}
#line 1950 "final.tab.c"
    break;

  case 66: /* contfor: NUMERO contenido ENDFOR  */
#line 479 "final.y"
                                  {	
 					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tfor(int i = 0;i < ");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ";i++){\n\t ");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t};\n");
					(yyval.string) = aux;
					}
#line 1965 "final.tab.c"
    break;

  case 67: /* contfor: NUMERO NUMERO contenido ENDFOR  */
#line 489 "final.y"
                                          {
 	  				char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tfor(int i = ");
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, ";i < ");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ";i++){\n\t ");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t};\n");
					(yyval.string) = aux;
					}
#line 1982 "final.tab.c"
    break;

  case 68: /* contwhile: PALABRA comparador PALABRA contenido ENDWHILE  */
#line 505 "final.y"
                                                          {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\twhile(");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ")");
					strcat(aux, "{\n\t");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t};\n");
					(yyval.string) = aux;
					}
#line 2000 "final.tab.c"
    break;

  case 69: /* contdowhile: PALABRA comparador PALABRA contenido ENDDOWHILE  */
#line 520 "final.y"
                                                              {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tdo{\n\t");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t}");
					strcat(aux, "while(");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ")\n");
					(yyval.string) = aux;
					}
#line 2018 "final.tab.c"
    break;


#line 2022 "final.tab.c"

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

#line 534 "final.y"

int main(int argc, char *argv[]) {
extern FILE *yyin;

	switch (argc) {
		case 1: yyin=stdin;
			printf("#include <stdio.h>\n#include <math.h>\n\nint main() {\n\n");
			yyparse();
			printf("\n}\n");
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


