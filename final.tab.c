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
  YYSYMBOL_VSTRING = 11,                   /* VSTRING  */
  YYSYMBOL_VARRAY = 12,                    /* VARRAY  */
  YYSYMBOL_SUMA = 13,                      /* SUMA  */
  YYSYMBOL_RESTA = 14,                     /* RESTA  */
  YYSYMBOL_MULT = 15,                      /* MULT  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_EXPONT = 17,                    /* EXPONT  */
  YYSYMBOL_RAIZ = 18,                      /* RAIZ  */
  YYSYMBOL_IGUALM = 19,                    /* IGUALM  */
  YYSYMBOL_EN = 20,                        /* EN  */
  YYSYMBOL_DE = 21,                        /* DE  */
  YYSYMBOL_VESTATICA = 22,                 /* VESTATICA  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_IF = 24,                        /* IF  */
  YYSYMBOL_VDINAMICA = 25,                 /* VDINAMICA  */
  YYSYMBOL_MAYOR = 26,                     /* MAYOR  */
  YYSYMBOL_MENOR = 27,                     /* MENOR  */
  YYSYMBOL_IGUAL = 28,                     /* IGUAL  */
  YYSYMBOL_DISTINTO = 29,                  /* DISTINTO  */
  YYSYMBOL_MAYORIGUAL = 30,                /* MAYORIGUAL  */
  YYSYMBOL_MENORIGUAL = 31,                /* MENORIGUAL  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_CLOSEIF = 34,                   /* CLOSEIF  */
  YYSYMBOL_ELSEIF = 35,                    /* ELSEIF  */
  YYSYMBOL_NUMERO = 36,                    /* NUMERO  */
  YYSYMBOL_PALABRA = 37,                   /* PALABRA  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_S = 39,                         /* S  */
  YYSYMBOL_recursivo = 40,                 /* recursivo  */
  YYSYMBOL_funcion = 41,                   /* funcion  */
  YYSYMBOL_contenido = 42,                 /* contenido  */
  YYSYMBOL_contif = 43,                    /* contif  */
  YYSYMBOL_comprecursivo = 44,             /* comprecursivo  */
  YYSYMBOL_comparador = 45,                /* comparador  */
  YYSYMBOL_dimensionvar = 46,              /* dimensionvar  */
  YYSYMBOL_contvar = 47,                   /* contvar  */
  YYSYMBOL_crearvar = 48,                  /* crearvar  */
  YYSYMBOL_numarrayvar = 49,               /* numarrayvar  */
  YYSYMBOL_contmat = 50,                   /* contmat  */
  YYSYMBOL_operador = 51,                  /* operador  */
  YYSYMBOL_contfor = 52,                   /* contfor  */
  YYSYMBOL_contwhile = 53,                 /* contwhile  */
  YYSYMBOL_contdowhile = 54                /* contdowhile  */
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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   268

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  109

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    28,    28,    31,    37,    44,    45,    46,    47,    48,
      49,    53,    54,    55,    56,    57,    58,    60,    67,    75,
      82,    89,    96,   108,   160,   167,   174,   184,   185,   186,
     187,   188,   189,   190,   191,   196,   203,   215,   223,   230,
     239,   240,   243,   254,   267,   287,   301,   315,   325,   338,
     339,   340,   341,   342,   343,   344,   349,   359,   375,   390
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
  "VSTRING", "VARRAY", "SUMA", "RESTA", "MULT", "DIV", "EXPONT", "RAIZ",
  "IGUALM", "EN", "DE", "VESTATICA", "ELSE", "IF", "VDINAMICA", "MAYOR",
  "MENOR", "IGUAL", "DISTINTO", "MAYORIGUAL", "MENORIGUAL", "AND", "OR",
  "CLOSEIF", "ELSEIF", "NUMERO", "PALABRA", "$accept", "S", "recursivo",
  "funcion", "contenido", "contif", "comprecursivo", "comparador",
  "dimensionvar", "contvar", "crearvar", "numarrayvar", "contmat",
  "operador", "contfor", "contwhile", "contdowhile", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     214,    -7,   -18,     8,    -1,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     9,   243,    48,   214,   -44,   -44,   -17,    79,
     -44,     4,   -44,     4,   -44,   -44,   -44,     3,     6,     6,
     -44,   -44,    14,     4,   -44,    54,    16,   -44,   -44,    17,
      31,    -7,   -18,     8,    -1,     9,   231,   104,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,    18,    19,    24,
      25,    27,   -44,    28,     9,     9,   121,   -44,    41,    37,
     -44,   -44,   -44,   -44,   -44,   147,    -7,   -18,     8,   -44,
      -1,     9,   -44,   231,   231,   -44,    40,   -44,   -44,   -44,
     -10,   -10,   -44,    42,    57,   -44,   -44,   -44,   -44,   -44,
     -44,   172,   189,   -44,   -44,    43,   -44,   -44,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    49,    50,    51,    52,    54,
      55,    53,     0,     0,     0,     2,     4,     7,     0,     0,
       8,     0,     9,     0,    10,    40,    41,     0,     0,     0,
       5,    35,     0,     0,     6,     0,     0,     1,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    27,
      28,    29,    30,    33,    34,    31,    32,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,    44,    47,     0,
      14,    15,    16,    11,    12,     0,     0,     0,     0,    56,
       0,     0,    19,     0,     0,    43,    36,    39,    37,    26,
      24,    25,    23,     0,    45,    57,    20,    21,    22,    17,
      18,     0,     0,    42,    48,     0,    58,    59,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,    66,   -34,   -43,   -38,   -15,   -41,    58,
      15,   -44,     0,    76,   -36,   -35,   -37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    14,    15,    16,    47,    34,    35,    57,    30,    31,
      32,    86,    48,    18,    20,    22,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      17,    66,    74,    73,    39,    70,    72,    71,    58,    25,
      26,    27,    75,    25,    26,    17,    25,    26,    63,    21,
      40,    28,    64,    65,    29,    28,    90,    91,    29,    19,
      49,    50,    51,    52,    53,    54,    55,    56,   100,    99,
      96,    98,    97,    60,    61,    23,    33,    82,    37,   101,
     102,    62,    69,    67,    68,    83,    84,    41,    42,    43,
      85,    93,    87,    44,    88,    89,    82,     5,     6,     7,
       8,     9,    10,    11,    94,    82,   103,   105,    45,   104,
     108,    38,    41,    42,    43,    59,    64,    65,    44,    36,
       0,    13,     5,     6,     7,     8,     9,    10,    11,     0,
       0,    82,    82,    45,     0,     0,     0,    76,    77,    78,
      79,     0,     0,    80,     0,    46,    13,     5,     6,     7,
       8,     9,    10,    11,    76,    77,    78,     0,    81,     0,
      80,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    13,     0,     0,     0,    81,     0,     0,     0,     0,
      76,    77,    78,    95,     0,    92,    80,     0,    13,     0,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,    81,     0,     0,     0,    76,    77,    78,     0,   106,
       0,    80,     0,     0,    13,     5,     6,     7,     8,     9,
      10,    11,    76,    77,    78,     0,    81,   107,    80,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    13,
       0,     0,     0,    81,     0,     0,     0,     1,     2,     3,
       0,     0,     0,     4,     0,     0,    13,     5,     6,     7,
       8,     9,    10,    11,    41,    42,    43,     0,    12,     0,
      44,     0,     0,     0,     5,     6,     7,     8,     9,    10,
      11,    13,     0,     0,     0,    45,     5,     6,     7,     8,
       9,    10,    11,     0,     0,     0,     0,     0,    13
};

static const yytype_int8 yycheck[] =
{
       0,    35,    45,    44,    21,    41,    43,    42,    23,    10,
      11,    12,    46,    10,    11,    15,    10,    11,    33,    37,
      37,    22,    32,    33,    25,    22,    64,    65,    25,    36,
      26,    27,    28,    29,    30,    31,    32,    33,    81,    80,
      76,    78,    77,    28,    29,    37,    37,    47,     0,    83,
      84,    37,    21,    37,    37,    37,    37,     3,     4,     5,
      36,    20,    37,     9,    37,    37,    66,    13,    14,    15,
      16,    17,    18,    19,    37,    75,    36,    20,    24,    37,
      37,    15,     3,     4,     5,    27,    32,    33,     9,    13,
      -1,    37,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,   101,   102,    24,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    36,    37,    13,    14,    15,
      16,    17,    18,    19,     3,     4,     5,    -1,    24,    -1,
       9,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    37,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    34,     9,    -1,    37,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    -1,    -1,    37,    13,    14,    15,    16,    17,
      18,    19,     3,     4,     5,    -1,    24,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    37,
      -1,    -1,    -1,    24,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    -1,    37,    13,    14,    15,
      16,    17,    18,    19,     3,     4,     5,    -1,    24,    -1,
       9,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    37,    -1,    -1,    -1,    24,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     9,    13,    14,    15,    16,    17,
      18,    19,    24,    37,    39,    40,    41,    50,    51,    36,
      52,    37,    53,    37,    54,    10,    11,    12,    22,    25,
      46,    47,    48,    37,    43,    44,    51,     0,    41,    21,
      37,     3,     4,     5,     9,    24,    36,    42,    50,    26,
      27,    28,    29,    30,    31,    32,    33,    45,    45,    47,
      48,    48,    37,    45,    32,    33,    42,    37,    37,    21,
      52,    53,    54,    46,    43,    42,     3,     4,     5,     6,
       9,    24,    50,    37,    37,    36,    49,    37,    37,    37,
      44,    44,    34,    20,    37,     6,    52,    53,    54,    46,
      43,    42,    42,    36,    37,    20,     7,     8,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    41,    41,
      41,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    43,    44,    44,    44,    45,    45,    45,
      45,    45,    45,    45,    45,    46,    46,    47,    47,    47,
      48,    48,    49,    49,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    53,    54
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     3,
       1,     1,     2,     1,     3,     4,     6,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     5,     5
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
  case 2: /* S: recursivo  */
#line 28 "final.y"
              {printf("%s",(yyvsp[0].string));}
#line 1218 "final.tab.c"
    break;

  case 3: /* recursivo: recursivo funcion  */
#line 31 "final.y"
                              {char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, (yyvsp[-1].string));
				strcat(aux, (yyvsp[0].string));
				(yyval.string) = aux;
				}
#line 1229 "final.tab.c"
    break;

  case 4: /* recursivo: funcion  */
#line 37 "final.y"
                       {	
	     
				(yyval.string) = (yyvsp[0].string);
				}
#line 1238 "final.tab.c"
    break;

  case 5: /* funcion: VARIABLE dimensionvar  */
#line 44 "final.y"
                                    {(yyval.string) = (yyvsp[0].string);}
#line 1244 "final.tab.c"
    break;

  case 6: /* funcion: IF contif  */
#line 45 "final.y"
                            {(yyval.string) = (yyvsp[0].string);}
#line 1250 "final.tab.c"
    break;

  case 7: /* funcion: contmat  */
#line 46 "final.y"
                          {(yyval.string) = (yyvsp[0].string);}
#line 1256 "final.tab.c"
    break;

  case 8: /* funcion: FOR contfor  */
#line 47 "final.y"
                              {(yyval.string) = (yyvsp[0].string);}
#line 1262 "final.tab.c"
    break;

  case 9: /* funcion: WHILE contwhile  */
#line 48 "final.y"
                                  {(yyval.string) = (yyvsp[0].string);}
#line 1268 "final.tab.c"
    break;

  case 10: /* funcion: DOWHILE contdowhile  */
#line 49 "final.y"
                                      {(yyval.string) = (yyvsp[0].string);}
#line 1274 "final.tab.c"
    break;

  case 11: /* contenido: VARIABLE dimensionvar  */
#line 53 "final.y"
                                   {(yyval.string) = (yyvsp[0].string);}
#line 1280 "final.tab.c"
    break;

  case 12: /* contenido: IF contif  */
#line 54 "final.y"
                         {(yyval.string) = (yyvsp[0].string);}
#line 1286 "final.tab.c"
    break;

  case 13: /* contenido: contmat  */
#line 55 "final.y"
                       {(yyval.string) = (yyvsp[0].string);}
#line 1292 "final.tab.c"
    break;

  case 14: /* contenido: FOR contfor  */
#line 56 "final.y"
                           {(yyval.string) = (yyvsp[0].string);}
#line 1298 "final.tab.c"
    break;

  case 15: /* contenido: WHILE contwhile  */
#line 57 "final.y"
                               {(yyval.string) = (yyvsp[0].string);}
#line 1304 "final.tab.c"
    break;

  case 16: /* contenido: DOWHILE contdowhile  */
#line 58 "final.y"
                                   {(yyval.string) = (yyvsp[0].string);}
#line 1310 "final.tab.c"
    break;

  case 17: /* contenido: contenido VARIABLE dimensionvar  */
#line 60 "final.y"
                                               {
     	     	 			char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1322 "final.tab.c"
    break;

  case 18: /* contenido: contenido IF contif  */
#line 67 "final.y"
                                   {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					
					(yyval.string) = auxcont;}
#line 1335 "final.tab.c"
    break;

  case 19: /* contenido: contenido contmat  */
#line 75 "final.y"
                                 {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-1].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1347 "final.tab.c"
    break;

  case 20: /* contenido: contenido FOR contfor  */
#line 82 "final.y"
                                     {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1359 "final.tab.c"
    break;

  case 21: /* contenido: contenido WHILE contwhile  */
#line 89 "final.y"
                                         {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1371 "final.tab.c"
    break;

  case 22: /* contenido: contenido DOWHILE contdowhile  */
#line 96 "final.y"
                                             {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, "\t");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1383 "final.tab.c"
    break;

  case 23: /* contif: comprecursivo contenido CLOSEIF  */
#line 108 "final.y"
                                         {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ")");
					strcat(aux, "{\n\t");
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, "\t};\n");
					(yyval.string) = aux;
					}
#line 1400 "final.tab.c"
    break;

  case 24: /* comprecursivo: comprecursivo AND comprecursivo  */
#line 160 "final.y"
                                              {
					char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, " && ");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1412 "final.tab.c"
    break;

  case 25: /* comprecursivo: comprecursivo OR comprecursivo  */
#line 167 "final.y"
                                              {
					char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, (yyvsp[-2].string));
					strcat(auxcont, " || ");
					strcat(auxcont, (yyvsp[0].string));
					(yyval.string) = auxcont;}
#line 1424 "final.tab.c"
    break;

  case 26: /* comprecursivo: PALABRA comparador PALABRA  */
#line 174 "final.y"
                                           {
	       			char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, (yyvsp[-2].string));
					strcat(aux, (yyvsp[-1].string));
					strcat(aux, (yyvsp[0].string));
					(yyval.string) = aux;
					}
#line 1437 "final.tab.c"
    break;

  case 27: /* comparador: MAYOR  */
#line 184 "final.y"
                   {(yyval.string)=">";}
#line 1443 "final.tab.c"
    break;

  case 28: /* comparador: MENOR  */
#line 185 "final.y"
                           {(yyval.string)="<";}
#line 1449 "final.tab.c"
    break;

  case 29: /* comparador: IGUAL  */
#line 186 "final.y"
                           {(yyval.string)="==";}
#line 1455 "final.tab.c"
    break;

  case 30: /* comparador: DISTINTO  */
#line 187 "final.y"
                              {(yyval.string)="!=";}
#line 1461 "final.tab.c"
    break;

  case 31: /* comparador: AND  */
#line 188 "final.y"
                         {(yyval.string)="&&";}
#line 1467 "final.tab.c"
    break;

  case 32: /* comparador: OR  */
#line 189 "final.y"
                        {(yyval.string)="||";}
#line 1473 "final.tab.c"
    break;

  case 33: /* comparador: MAYORIGUAL  */
#line 190 "final.y"
                                {(yyval.string)=">=";}
#line 1479 "final.tab.c"
    break;

  case 34: /* comparador: MENORIGUAL  */
#line 191 "final.y"
                                {(yyval.string)="<=";}
#line 1485 "final.tab.c"
    break;

  case 35: /* dimensionvar: contvar  */
#line 196 "final.y"
                      {		char * auxdim;
					auxdim = (char*)malloc ( 100*sizeof(char) );
					strcpy(auxdim, "\t");
					strcat(auxdim, (yyvsp[0].string));
					strcat(auxdim, ";\n");
					(yyval.string) = auxdim;
					}
#line 1497 "final.tab.c"
    break;

  case 36: /* dimensionvar: VARRAY contvar numarrayvar  */
#line 203 "final.y"
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
#line 1512 "final.tab.c"
    break;

  case 37: /* contvar: VDINAMICA crearvar PALABRA  */
#line 215 "final.y"
                                    {
				char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, (yyvsp[-1].string));
				strcat(auxvar, "* ");
				strcat(auxvar, (yyvsp[0].string));
				(yyval.string) = auxvar;
				}
#line 1525 "final.tab.c"
    break;

  case 38: /* contvar: crearvar PALABRA  */
#line 223 "final.y"
                           {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, (yyvsp[-1].string));
				strcat(auxvar, (yyvsp[0].string));
				(yyval.string) = auxvar;
				}
#line 1537 "final.tab.c"
    break;

  case 39: /* contvar: VESTATICA crearvar PALABRA  */
#line 230 "final.y"
                                     {
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, (yyvsp[-2].string));
				strcat(auxvar, (yyvsp[-1].string));
				(yyval.string) = auxvar;
				}
#line 1549 "final.tab.c"
    break;

  case 40: /* crearvar: VNUMERO  */
#line 239 "final.y"
                   {(yyval.string) = "int ";}
#line 1555 "final.tab.c"
    break;

  case 41: /* crearvar: VSTRING  */
#line 240 "final.y"
                           {(yyval.string) = "char ";}
#line 1561 "final.tab.c"
    break;

  case 42: /* numarrayvar: numarrayvar NUMERO  */
#line 243 "final.y"
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
#line 1576 "final.tab.c"
    break;

  case 43: /* numarrayvar: NUMERO  */
#line 254 "final.y"
                     {
	     			char * auxnum;
				auxnum = (char*)malloc ( 100*sizeof(char) );
				auxnum[0] = '[';
				strcat(auxnum, (yyvsp[0].string));
				strcat(auxnum, "]");
				(yyval.string) = auxnum;
				}
#line 1589 "final.tab.c"
    break;

  case 44: /* contmat: PALABRA operador PALABRA  */
#line 267 "final.y"
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
#line 1613 "final.tab.c"
    break;

  case 45: /* contmat: operador PALABRA DE PALABRA  */
#line 287 "final.y"
                                              {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					/*strcat(aux, $1);
					strcat(aux, " = ");*/
					strcat(aux, (yyvsp[-3].string));
					strcat(aux, "(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ",");
					strcat(aux, (yyvsp[0].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
				}
#line 1632 "final.tab.c"
    break;

  case 46: /* contmat: operador PALABRA DE PALABRA EN PALABRA  */
#line 301 "final.y"
                                                         {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, (yyvsp[0].string));
					strcat(aux, " = ");
					strcat(aux, (yyvsp[-5].string));
					strcat(aux, "(");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, ",");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
				}
#line 1651 "final.tab.c"
    break;

  case 47: /* contmat: operador DE PALABRA  */
#line 315 "final.y"
                                      {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, "(");
					strcat(aux, (yyvsp[0].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
				}
#line 1666 "final.tab.c"
    break;

  case 48: /* contmat: operador DE PALABRA EN PALABRA  */
#line 325 "final.y"
                                                 {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, (yyvsp[0].string));
					strcat(aux, " = ");
					strcat(aux, (yyvsp[-4].string));
					strcat(aux, "(");
					strcat(aux, (yyvsp[-2].string));
					strcat(aux, ");\n");
					(yyval.string) = aux;
				}
#line 1683 "final.tab.c"
    break;

  case 49: /* operador: SUMA  */
#line 338 "final.y"
                      {(yyval.string)="+";}
#line 1689 "final.tab.c"
    break;

  case 50: /* operador: RESTA  */
#line 339 "final.y"
                           {(yyval.string)="-";}
#line 1695 "final.tab.c"
    break;

  case 51: /* operador: MULT  */
#line 340 "final.y"
                          {(yyval.string)="*";}
#line 1701 "final.tab.c"
    break;

  case 52: /* operador: DIV  */
#line 341 "final.y"
                         {(yyval.string)="/";}
#line 1707 "final.tab.c"
    break;

  case 53: /* operador: IGUALM  */
#line 342 "final.y"
                            {(yyval.string)="=";}
#line 1713 "final.tab.c"
    break;

  case 54: /* operador: EXPONT  */
#line 343 "final.y"
                            {(yyval.string)="pow";}
#line 1719 "final.tab.c"
    break;

  case 55: /* operador: RAIZ  */
#line 344 "final.y"
                          {(yyval.string)="sqrt";}
#line 1725 "final.tab.c"
    break;

  case 56: /* contfor: NUMERO contenido ENDFOR  */
#line 349 "final.y"
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
#line 1740 "final.tab.c"
    break;

  case 57: /* contfor: NUMERO NUMERO contenido ENDFOR  */
#line 359 "final.y"
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
#line 1757 "final.tab.c"
    break;

  case 58: /* contwhile: PALABRA comparador PALABRA contenido ENDWHILE  */
#line 375 "final.y"
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
#line 1775 "final.tab.c"
    break;

  case 59: /* contdowhile: PALABRA comparador PALABRA contenido ENDDOWHILE  */
#line 390 "final.y"
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
#line 1793 "final.tab.c"
    break;


#line 1797 "final.tab.c"

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

#line 404 "final.y"

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


