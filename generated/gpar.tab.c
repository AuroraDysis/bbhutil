/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         gparparse
#define yylex           gparlex
#define yyerror         gparerror
#define yydebug         gpardebug
#define yynerrs         gparnerrs
#define yylval          gparlval
#define yychar          gparchar

/* First part of user prologue.  */
#line 1 "gpar.y"

/* grammar for get_param */
/* $Header: /home/cvs/rnpl/src/gpar.y,v 1.1.1.1 2013/07/09 00:38:27 cvs Exp $ */
/* Copyright (c) 1998 by Robert L. Marsa */

/* Modifications 2008-05 to implement get_param_{int,real,str}_v, which return */
/* an arbitrary number of {int's, real's,str's} from a parameter file (vector */
/* specification assumed). */

/* Modifications 2008-05 to rationalize error return codes for get_param_... */
/* routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gpar.h"

assignment myasgn;

ivel_list * new_ivel_list();
fvel_list * new_fvel_list();
value_list * new_value_list();
int gotit;


#line 104 "gpar.tab.c"

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

#include "gpar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STR = 3,                        /* STR  */
  YYSYMBOL_IDEN = 4,                       /* IDEN  */
  YYSYMBOL_FNAME = 5,                      /* FNAME  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_INUM = 7,                       /* INUM  */
  YYSYMBOL_ASSIGNOP = 8,                   /* ASSIGNOP  */
  YYSYMBOL_EQUALS = 9,                     /* EQUALS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_TIMES = 11,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 12,                    /* DIVIDE  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_OBRACK = 14,                    /* OBRACK  */
  YYSYMBOL_CBRACK = 15,                    /* CBRACK  */
  YYSYMBOL_LONG = 16,                      /* LONG  */
  YYSYMBOL_DOUBLE = 17,                    /* DOUBLE  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_IVEC = 19,                      /* IVEC  */
  YYSYMBOL_FVEC = 20,                      /* FVEC  */
  YYSYMBOL_VECTOR = 21,                    /* VECTOR  */
  YYSYMBOL_SCALAR = 22,                    /* SCALAR  */
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_assignment = 24,                /* assignment  */
  YYSYMBOL_becomes = 25,                   /* becomes  */
  YYSYMBOL_inumber = 26,                   /* inumber  */
  YYSYMBOL_number = 27,                    /* number  */
  YYSYMBOL_string = 28,                    /* string  */
  YYSYMBOL_ivec = 29,                      /* ivec  */
  YYSYMBOL_fvec = 30,                      /* fvec  */
  YYSYMBOL_file = 31,                      /* file  */
  YYSYMBOL_inumber_list = 32,              /* inumber_list  */
  YYSYMBOL_number_list = 33,               /* number_list  */
  YYSYMBOL_string_list = 34,               /* string_list  */
  YYSYMBOL_ival = 35,                      /* ival  */
  YYSYMBOL_fval = 36                       /* fval  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   90

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    54,    57,    60,    63,    66,    72,    78,
      84,    90,    96,   102,   108,   114,   120,   126,   132,   138,
     146,   146,   149,   153,   159,   163,   167,   171,   177,   183,
     191,   199,   207,   216,   225,   236,   244,   252,   261,   272,
     278,   283,   291,   296,   304,   309,   317,   320,   325,   328,
     331,   334
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
  "\"end of file\"", "error", "\"invalid token\"", "STR", "IDEN", "FNAME",
  "NUM", "INUM", "ASSIGNOP", "EQUALS", "MINUS", "TIMES", "DIVIDE", "COMMA",
  "OBRACK", "CBRACK", "LONG", "DOUBLE", "STRING", "IVEC", "FVEC", "VECTOR",
  "SCALAR", "$accept", "assignment", "becomes", "inumber", "number",
  "string", "ivec", "fvec", "file", "inumber_list", "number_list",
  "string_list", "ival", "fval", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      32,     5,    19,    29,    34,    36,    28,    68,    68,    68,
      68,    68,   -55,   -55,   -55,    22,     8,     7,    30,    37,
     -55,   -55,    60,    65,   -55,   -55,   -55,   -55,    39,    47,
     -55,   -55,   -55,    70,   -55,   -55,   -55,   -55,    61,   -55,
      69,   -55,   -55,    54,    67,   -55,    71,   -55,   -55,     1,
     -55,   -55,   -55,    24,   -55,     2,    51,    51,   -55,   -55,
      49,    49,   -55,   -55,   -55,   -55,   -55,   -55,    72,    66,
      73,    74,    51,    77,    49,    78,    75,   -55,    76,   -55,
      82,    83,   -55,   -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     2,     3,     4,     5,     6,     0,     0,     0,     0,
       0,     0,     1,    20,    21,     0,     0,     0,     0,     0,
      39,    22,     0,     0,     7,    12,    24,    26,     0,     0,
       8,    13,    28,     0,     9,    14,    46,    47,    10,    15,
      29,    48,    50,     0,    11,    16,    35,    23,    40,     0,
      25,    27,    42,     0,    44,     0,     0,     0,    49,    51,
       0,     0,    17,    41,    18,    43,    19,    45,    32,    30,
      37,     0,     0,     0,     0,     0,    33,    31,     0,    36,
       0,     0,    34,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,    55,   -23,   -28,   -31,   -55,   -55,    52,   -55,
     -55,   -55,   -53,   -54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,    15,    24,    30,    34,    38,    44,    25,    49,
      53,    55,    40,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    52,    54,    68,    69,    32,    70,    71,    21,     7,
      32,    22,    20,    20,    26,    27,    62,    66,    28,    76,
      78,    33,    29,     8,    67,    65,    63,    20,    12,    21,
      26,    27,    22,     9,    28,    20,    23,    36,    10,    64,
      11,    37,    20,    41,    42,    50,    51,    43,     1,     2,
       3,     4,     5,    26,    27,    41,    42,    28,    36,    43,
      58,    59,    37,    16,    17,    18,    19,    47,    31,    35,
      39,    45,    21,    32,    56,    22,    13,    14,    73,    57,
      60,    61,    72,    74,    77,    79,    75,    80,    81,    82,
      83
};

static const yytype_int8 yycheck[] =
{
      23,    29,    33,    56,    57,     3,    60,    61,     7,     4,
       3,    10,     5,     5,     6,     7,    15,    15,    10,    72,
      74,    14,    14,     4,    55,    53,    49,     5,     0,     7,
       6,     7,    10,     4,    10,     5,    14,     7,     4,    15,
       4,    11,     5,     6,     7,     6,     7,    10,    16,    17,
      18,    19,    20,     6,     7,     6,     7,    10,     7,    10,
       6,     7,    11,     8,     9,    10,    11,     7,    16,    17,
      18,    19,     7,     3,    13,    10,     8,     9,    12,    10,
      13,    10,    10,    10,     7,     7,    12,    12,    12,     7,
       7
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    17,    18,    19,    20,    24,     4,     4,     4,
       4,     4,     0,     8,     9,    25,    25,    25,    25,    25,
       5,     7,    10,    14,    26,    31,     6,     7,    10,    14,
      27,    31,     3,    14,    28,    31,     7,    11,    29,    31,
      35,     6,     7,    10,    30,    31,    36,     7,    26,    32,
       6,     7,    27,    33,    28,    34,    13,    10,     6,     7,
      13,    10,    15,    26,    15,    27,    15,    28,    35,    35,
      36,    36,    10,    12,    10,    12,    35,     7,    36,     7,
      12,    12,     7,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      25,    25,    26,    26,    27,    27,    27,    27,    28,    29,
      29,    29,    29,    29,    29,    30,    30,    30,    30,    31,
      32,    32,    33,    33,    34,    34,    35,    35,    36,    36,
      36,    36
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     6,     6,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     1,
       3,     5,     3,     5,     7,     1,     5,     3,     7,     1,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     2,
       1,     2
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
  case 2: /* assignment: LONG  */
#line 51 "gpar.y"
                  { 
              gotit=0; 
            }
#line 1180 "gpar.tab.c"
    break;

  case 3: /* assignment: DOUBLE  */
#line 54 "gpar.y"
            { 
      gotit=0; 
    }
#line 1188 "gpar.tab.c"
    break;

  case 4: /* assignment: STRING  */
#line 57 "gpar.y"
            { 
      gotit=0; 
    }
#line 1196 "gpar.tab.c"
    break;

  case 5: /* assignment: IVEC  */
#line 60 "gpar.y"
          { 
      gotit=0; 
    }
#line 1204 "gpar.tab.c"
    break;

  case 6: /* assignment: FVEC  */
#line 63 "gpar.y"
          { 
      gotit=0; 
    }
#line 1212 "gpar.tab.c"
    break;

  case 7: /* assignment: LONG IDEN becomes inumber  */
#line 66 "gpar.y"
                               {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1223 "gpar.tab.c"
    break;

  case 8: /* assignment: DOUBLE IDEN becomes number  */
#line 72 "gpar.y"
                                {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1234 "gpar.tab.c"
    break;

  case 9: /* assignment: STRING IDEN becomes string  */
#line 78 "gpar.y"
                                {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1245 "gpar.tab.c"
    break;

  case 10: /* assignment: IVEC IDEN becomes ivec  */
#line 84 "gpar.y"
                            {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1256 "gpar.tab.c"
    break;

  case 11: /* assignment: FVEC IDEN becomes fvec  */
#line 90 "gpar.y"
                            {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1267 "gpar.tab.c"
    break;

  case 12: /* assignment: LONG IDEN becomes file  */
#line 96 "gpar.y"
                            {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1278 "gpar.tab.c"
    break;

  case 13: /* assignment: DOUBLE IDEN becomes file  */
#line 102 "gpar.y"
                              {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1289 "gpar.tab.c"
    break;

  case 14: /* assignment: STRING IDEN becomes file  */
#line 108 "gpar.y"
                              {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1300 "gpar.tab.c"
    break;

  case 15: /* assignment: IVEC IDEN becomes file  */
#line 114 "gpar.y"
                            {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1311 "gpar.tab.c"
    break;

  case 16: /* assignment: FVEC IDEN becomes file  */
#line 120 "gpar.y"
                            {
      myasgn.name=(yyvsp[-2].str);
      myasgn.val=(yyvsp[0].val);
      myasgn.type=SCALAR;
      gotit=1;
    }
#line 1322 "gpar.tab.c"
    break;

  case 17: /* assignment: LONG IDEN becomes OBRACK inumber_list CBRACK  */
#line 126 "gpar.y"
                                                  {
      myasgn.name=(yyvsp[-4].str);
      myasgn.vl=(yyvsp[-1].vl);
      myasgn.type=VECTOR;
      gotit=1;
    }
#line 1333 "gpar.tab.c"
    break;

  case 18: /* assignment: DOUBLE IDEN becomes OBRACK number_list CBRACK  */
#line 132 "gpar.y"
                                                   {
      myasgn.name=(yyvsp[-4].str);
      myasgn.vl=(yyvsp[-1].vl);
      myasgn.type=VECTOR;
      gotit=1;
    }
#line 1344 "gpar.tab.c"
    break;

  case 19: /* assignment: STRING IDEN becomes OBRACK string_list CBRACK  */
#line 138 "gpar.y"
                                                   {
      myasgn.name=(yyvsp[-4].str);
      myasgn.vl=(yyvsp[-1].vl);
      myasgn.type=VECTOR;
      gotit=1;
    }
#line 1355 "gpar.tab.c"
    break;

  case 22: /* inumber: INUM  */
#line 149 "gpar.y"
               {
          (yyval.val).type=INUM;
          (yyval.val).data.inum=(yyvsp[0].inum);
        }
#line 1364 "gpar.tab.c"
    break;

  case 23: /* inumber: MINUS INUM  */
#line 153 "gpar.y"
                {
      (yyval.val).type=INUM;
      (yyval.val).data.inum=-(yyvsp[0].inum);
    }
#line 1373 "gpar.tab.c"
    break;

  case 24: /* number: NUM  */
#line 159 "gpar.y"
              {
          (yyval.val).type=NUM;
          (yyval.val).data.num=(yyvsp[0].num);
        }
#line 1382 "gpar.tab.c"
    break;

  case 25: /* number: MINUS NUM  */
#line 163 "gpar.y"
               {
      (yyval.val).type=NUM;
      (yyval.val).data.num=-(yyvsp[0].num);
    }
#line 1391 "gpar.tab.c"
    break;

  case 26: /* number: INUM  */
#line 167 "gpar.y"
          {
      (yyval.val).type=NUM;
      (yyval.val).data.num=(double)(yyvsp[0].inum);
    }
#line 1400 "gpar.tab.c"
    break;

  case 27: /* number: MINUS INUM  */
#line 171 "gpar.y"
                {
      (yyval.val).type=NUM;
      (yyval.val).data.num=(double)(-(yyvsp[0].inum));
    }
#line 1409 "gpar.tab.c"
    break;

  case 28: /* string: STR  */
#line 177 "gpar.y"
             {
          (yyval.val).type=STR;
          (yyval.val).data.str=(yyvsp[0].str);
        }
#line 1418 "gpar.tab.c"
    break;

  case 29: /* ivec: ival  */
#line 183 "gpar.y"
            {
        (yyval.val).type=IVEC;
        (yyval.val).data.ivec=new_ivel_list();
        (yyval.val).data.ivec->ivel[0]=(yyvsp[0].inum);
        (yyval.val).data.ivec->ivel[1]=-2;
        (yyval.val).data.ivec->ivel[2]=1;
        (yyval.val).data.ivec->len=1;
      }
#line 1431 "gpar.tab.c"
    break;

  case 30: /* ivec: ival MINUS ival  */
#line 191 "gpar.y"
                     {
      (yyval.val).type=IVEC;
      (yyval.val).data.ivec=new_ivel_list();
      (yyval.val).data.ivec->ivel[0]=(yyvsp[-2].inum);
      (yyval.val).data.ivec->ivel[1]=(yyvsp[0].inum);
      (yyval.val).data.ivec->ivel[2]=1;
      (yyval.val).data.ivec->len=1;
    }
#line 1444 "gpar.tab.c"
    break;

  case 31: /* ivec: ival MINUS ival DIVIDE INUM  */
#line 199 "gpar.y"
                                 {
      (yyval.val).type=IVEC;
      (yyval.val).data.ivec=new_ivel_list();
      (yyval.val).data.ivec->ivel[0]=(yyvsp[-4].inum);
      (yyval.val).data.ivec->ivel[1]=(yyvsp[-2].inum);
      (yyval.val).data.ivec->ivel[2]=(yyvsp[0].inum);
      (yyval.val).data.ivec->len=1;
    }
#line 1457 "gpar.tab.c"
    break;

  case 32: /* ivec: ivec COMMA ival  */
#line 207 "gpar.y"
                     {
      (yyval.val).type=IVEC;
      (yyval.val).data.ivec=new_ivel_list();
      (yyval.val).data.ivec->ivel[0]=(yyvsp[0].inum);
      (yyval.val).data.ivec->ivel[1]=-2;
      (yyval.val).data.ivec->ivel[2]=1;
      (yyval.val).data.ivec->next=(yyvsp[-2].val).data.ivec;
      (yyval.val).data.ivec->len=1+(yyvsp[-2].val).data.ivec->len;
    }
#line 1471 "gpar.tab.c"
    break;

  case 33: /* ivec: ivec COMMA ival MINUS ival  */
#line 216 "gpar.y"
                                {
      (yyval.val).type=IVEC;
      (yyval.val).data.ivec=new_ivel_list();
      (yyval.val).data.ivec->ivel[0]=(yyvsp[-2].inum);
      (yyval.val).data.ivec->ivel[1]=(yyvsp[0].inum);
      (yyval.val).data.ivec->ivel[2]=1;
      (yyval.val).data.ivec->next=(yyvsp[-4].val).data.ivec;
      (yyval.val).data.ivec->len=1+(yyvsp[-4].val).data.ivec->len;
    }
#line 1485 "gpar.tab.c"
    break;

  case 34: /* ivec: ivec COMMA ival MINUS ival DIVIDE INUM  */
#line 225 "gpar.y"
                                            {
      (yyval.val).type=IVEC;
      (yyval.val).data.ivec=new_ivel_list();
      (yyval.val).data.ivec->ivel[0]=(yyvsp[-4].inum);
      (yyval.val).data.ivec->ivel[1]=(yyvsp[-2].inum);
      (yyval.val).data.ivec->ivel[2]=(yyvsp[0].inum);
      (yyval.val).data.ivec->next=(yyvsp[-6].val).data.ivec;
      (yyval.val).data.ivec->len=1+(yyvsp[-6].val).data.ivec->len;
    }
#line 1499 "gpar.tab.c"
    break;

  case 35: /* fvec: fval  */
#line 236 "gpar.y"
            {
        (yyval.val).type=FVEC;
        (yyval.val).data.fvec=new_fvel_list();
        (yyval.val).data.fvec->fvel[0]=(yyvsp[0].num);
        (yyval.val).data.fvec->fvel[1]=(yyvsp[0].num);
        (yyval.val).data.fvec->fvel[2]=1;
        (yyval.val).data.fvec->len=1;
      }
#line 1512 "gpar.tab.c"
    break;

  case 36: /* fvec: fval MINUS fval DIVIDE INUM  */
#line 244 "gpar.y"
                                 {
      (yyval.val).type=FVEC;
      (yyval.val).data.fvec=new_fvel_list();
      (yyval.val).data.fvec->fvel[0]=(yyvsp[-4].num);
      (yyval.val).data.fvec->fvel[1]=(yyvsp[-2].num);
      (yyval.val).data.fvec->fvel[2]=(yyvsp[0].inum);
      (yyval.val).data.fvec->len=1;
    }
#line 1525 "gpar.tab.c"
    break;

  case 37: /* fvec: fvec COMMA fval  */
#line 252 "gpar.y"
                    {
      (yyval.val).type=FVEC;
      (yyval.val).data.fvec=new_fvel_list();
      (yyval.val).data.fvec->fvel[0]=(yyvsp[0].num);
      (yyval.val).data.fvec->fvel[1]=(yyvsp[0].num);
      (yyval.val).data.fvec->fvel[2]=1;
      (yyval.val).data.fvec->next=(yyvsp[-2].val).data.fvec;
      (yyval.val).data.fvec->len=1+(yyvsp[-2].val).data.fvec->len;
    }
#line 1539 "gpar.tab.c"
    break;

  case 38: /* fvec: fvec COMMA fval MINUS fval DIVIDE INUM  */
#line 261 "gpar.y"
                                            {
      (yyval.val).type=FVEC;
      (yyval.val).data.fvec=new_fvel_list();
      (yyval.val).data.fvec->fvel[0]=(yyvsp[-4].num);
      (yyval.val).data.fvec->fvel[1]=(yyvsp[-2].num);
      (yyval.val).data.fvec->fvel[2]=(yyvsp[0].inum);
      (yyval.val).data.fvec->next=(yyvsp[-6].val).data.fvec;
      (yyval.val).data.fvec->len=1+(yyvsp[-6].val).data.fvec->len;
    }
#line 1553 "gpar.tab.c"
    break;

  case 39: /* file: FNAME  */
#line 272 "gpar.y"
            {
        (yyval.val).type=FNAME;
        (yyval.val).data.str=(yyvsp[0].str);
      }
#line 1562 "gpar.tab.c"
    break;

  case 40: /* inumber_list: inumber  */
#line 278 "gpar.y"
                       {
                (yyval.vl)=new_value_list();
                (yyval.vl)->val=(yyvsp[0].val);
                (yyval.vl)->len=1;
              }
#line 1572 "gpar.tab.c"
    break;

  case 41: /* inumber_list: inumber_list inumber  */
#line 283 "gpar.y"
                         {
      (yyval.vl)=new_value_list();
      (yyval.vl)->val=(yyvsp[0].val);
      (yyval.vl)->next=(yyvsp[-1].vl);
      (yyval.vl)->len=1+(yyvsp[-1].vl)->len;
    }
#line 1583 "gpar.tab.c"
    break;

  case 42: /* number_list: number  */
#line 291 "gpar.y"
                     {
                (yyval.vl)=new_value_list();
                (yyval.vl)->val=(yyvsp[0].val);
                (yyval.vl)->len=1;
              }
#line 1593 "gpar.tab.c"
    break;

  case 43: /* number_list: number_list number  */
#line 296 "gpar.y"
                       {
      (yyval.vl)=new_value_list();
      (yyval.vl)->val=(yyvsp[0].val);
      (yyval.vl)->next=(yyvsp[-1].vl);
      (yyval.vl)->len=1+(yyvsp[-1].vl)->len;
    }
#line 1604 "gpar.tab.c"
    break;

  case 44: /* string_list: string  */
#line 304 "gpar.y"
                     {
                (yyval.vl)=new_value_list();
                (yyval.vl)->val=(yyvsp[0].val);
                (yyval.vl)->len=1;
              }
#line 1614 "gpar.tab.c"
    break;

  case 45: /* string_list: string_list string  */
#line 309 "gpar.y"
                       {
      (yyval.vl)=new_value_list();
      (yyval.vl)->val=(yyvsp[0].val);
      (yyval.vl)->next=(yyvsp[-1].vl);
      (yyval.vl)->len=1+(yyvsp[-1].vl)->len;
    }
#line 1625 "gpar.tab.c"
    break;

  case 46: /* ival: INUM  */
#line 317 "gpar.y"
           {
        (yyval.inum)=(yyvsp[0].inum);
      }
#line 1633 "gpar.tab.c"
    break;

  case 47: /* ival: TIMES  */
#line 320 "gpar.y"
           {
      (yyval.inum)=-1;
    }
#line 1641 "gpar.tab.c"
    break;

  case 48: /* fval: NUM  */
#line 325 "gpar.y"
            {
          (yyval.num)=(yyvsp[0].num);
        }
#line 1649 "gpar.tab.c"
    break;

  case 49: /* fval: MINUS NUM  */
#line 328 "gpar.y"
               {
      (yyval.num)=-(yyvsp[0].num);
    }
#line 1657 "gpar.tab.c"
    break;

  case 50: /* fval: INUM  */
#line 331 "gpar.y"
          {
      (yyval.num)=(double)(yyvsp[0].inum);
    }
#line 1665 "gpar.tab.c"
    break;

  case 51: /* fval: MINUS INUM  */
#line 334 "gpar.y"
                {
      (yyval.num)=(double)(-(yyvsp[0].inum));
    }
#line 1673 "gpar.tab.c"
    break;


#line 1677 "gpar.tab.c"

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

#line 339 "gpar.y"


ivel_list * new_ivel_list()
{
  ivel_list *iv;
  
  iv=(ivel_list *)malloc(sizeof(ivel_list));
  if(iv==NULL){
    fprintf(stderr,"new_ivel_list: can't get memory.\n");
    exit(0);
  }
  iv->next=NULL;
  iv->len=0;
  return iv;
}

fvel_list * new_fvel_list()
{
  fvel_list *iv;
  
  iv=(fvel_list *)malloc(sizeof(fvel_list));
  if(iv==NULL){
    fprintf(stderr,"new_fvel_list: can't get memory.\n");
    exit(0);
  }
  iv->next=NULL;
  iv->len=0;
  return iv;
}

value_list * new_value_list()
{
  value_list *vl;
  
  vl=(value_list *)malloc(sizeof(value_list));
  if(vl==NULL){
    fprintf(stderr,"new_value_list: can't get memory.\n");
    exit(0);
  }
  vl->next=NULL;
  vl->len=0;
  return vl;
}

#define IVEL 4
#define FVEL 4

char *sg_param_buf;
char *sg_param_ptr;
char *sg_param_end;
int sg_param_type,first_tok;
int inputerror;

/* Set size < 1 to determine size from parameter definition (vector assumed), which 
   is returned in prsize ... */

int sget_param(const char *string, const char *name,
               char *type, int size, void *p, int cs) 
{
   int *q;
   double *r;
   value_list *vl;
   ivel_list *il;
   fvel_list *fl;
   int found=0,i;
   int typeerr=0;
   int ltrace=0;
   int varsize;

   int l_size;
  
   if(ltrace) {
      fprintf(stderr,"string=<%s> name=<%s> type=<%s> size=%d cs=%d\n",
         string,name,type,size,cs);
	}

   if( size < 0 ) {
      l_size = -size;
      varsize = 1;
   } else {
      varsize = 0;
   }
   l_size = (size >= 0 ) ? size : -size;
            
   sg_param_buf=(char *)string;
   sg_param_ptr=sg_param_buf;
   sg_param_end=sg_param_buf+strlen(string);

   if(!strcmp(type,"long"))
      sg_param_type=LONG;
   else if(!strcmp(type,"double"))
      sg_param_type=DOUBLE;
   else if(!strcmp(type,"string"))
      sg_param_type=STRING;
   else if(!strcmp(type,"ivec"))
      sg_param_type=IVEC;
   else if(!strcmp(type,"fvec"))
      sg_param_type=FVEC;
   else {
      fprintf(stderr,"sget_param: error: unknown type <%s>\n",type);
      return(-1);
   }

   first_tok=1;
   inputerror=0;
   gotit=0;
   gparparse();
  
   if(ltrace)
      fprintf(stderr,"sget_param: gotit=%d inputerror=%d\n",gotit,inputerror);
  
   if(!inputerror && gotit){
      if(ltrace)
         fprintf(stderr,"sget_param: myasgn.name=<%s> name=<%s>\n",myasgn.name,name);
      if((cs && !strcmp(myasgn.name,name)) || (!cs && !strcmp_nc(myasgn.name,name))){
         if(ltrace)
            fprintf(stderr,"sget_param: found <%s>\n",name);
         found=1;
         switch(myasgn.type){
         case SCALAR:
            if(myasgn.val.type!=FNAME && l_size!=1 && (sg_param_type==LONG || 
               sg_param_type==DOUBLE || sg_param_type==STRING)){
               fprintf(stderr,"sget_param: expecting a vector value for <%s>\n",name);
               return(-1);
            }
            if(ltrace) fprintf(stderr,"sget_param: l_size=%d\n",l_size);
            switch(sg_param_type){
            case LONG:
               if(myasgn.val.type==INUM)
                  *((int *)p)=myasgn.val.data.inum;
               else if(myasgn.val.type==FNAME)
                  return(read_ascii_int(myasgn.val.data.str,(int *)p,l_size));
               else typeerr=1;
               break;
            case DOUBLE:
               if(myasgn.val.type==INUM)
                  *((double *)p)=(double)myasgn.val.data.inum;
               else if(myasgn.val.type==NUM)
                  *((double *)p)=myasgn.val.data.num;
               else if(myasgn.val.type==FNAME){
                  if(ltrace)
                     fprintf(stderr,"sget_param: FNAME=<%s>\n",myasgn.val.data.str);
                  return(read_ascii_double(myasgn.val.data.str,(double *)p,l_size));
               }else typeerr=1;
               break;
            case STRING:
               if(myasgn.val.type==STR){
                  if(*((char **)p))
                     free(*((char **)p));
                  *((char **)p)=cvec_alloc(strlen(myasgn.val.data.str)+1);
                  strcpy(*((char **)p),myasgn.val.data.str);
                  free(myasgn.val.data.str);
               }else if(myasgn.val.type==FNAME){
                  return(read_ascii_string(myasgn.val.data.str,(char **)p,l_size));
               }else typeerr=1;
               break;
            case IVEC:
               if(ltrace)
                  fprintf(stderr,"sget_param: looking for IVEC\n");
               if(myasgn.val.type==IVEC){
                  if(ltrace) fprintf(stderr,"sget_param: found IVEC\n");
                  if(cs){
                     if(ltrace)
                        fprintf(stderr,"sget_param: len=%d\n",myasgn.val.data.ivec->len);
                     if(l_size<IVEL*myasgn.val.data.ivec->len+1){
                        if(*((int **)p)!=NULL) free(*((int **)p));
								if(ltrace) fprintf(stderr,"sget_param: Allocating IVEC storage\n");
                        *((int **)p)=ivec_alloc(IVEL*myasgn.val.data.ivec->len+1);
                     }
                     q=(int *)*((int **)p);
                  }else{
                     if(l_size<IVEL*myasgn.val.data.ivec->len+1){
                        fprintf(stderr,"sget_param: ivec too long for FORTRAN data type.\n");
                        return(-1);
                     }
                     q=(int *)p;
                  }
                  if(ltrace)
                     fprintf(stderr,"sget_param: setting ivec len to %d\n",
                        myasgn.val.data.ivec->len);
                  q[0]=myasgn.val.data.ivec->len;
                  for(i=myasgn.val.data.ivec->len-1,il=myasgn.val.data.ivec;i>=0;i--,il=il->next){
                     rivcpy(q+i*IVEL+1,il->ivel,3);
                     q[IVEL*i+1+3]=0;
                  }
               }else if(myasgn.val.type==FNAME){
                  return(read_ascii_ivec(myasgn.val.data.str,(int **)p,l_size,cs));
               }else typeerr=1;
               break;
            case FVEC:
               if(myasgn.val.type==FVEC){
                  if(cs){
                     if(l_size<FVEL*myasgn.val.data.fvec->len+1){
                        if(*((double **)p)!=NULL) free(*((double **)p));
                        *((double **)p)=vec_alloc(FVEL*myasgn.val.data.fvec->len+1);
                     }
                     r=(double *)*((double **)p);
                  }else{
                     if(l_size<FVEL*myasgn.val.data.fvec->len+1){
                        fprintf(stderr,"sget_param: fvec too long for FORTRAN data type.\n");
                        return(-1);
                     }
                     r=(double *)p;
                  }
                  r[0]=(double)myasgn.val.data.fvec->len;
                  for(i=myasgn.val.data.fvec->len-1,fl=myasgn.val.data.fvec;i>=0;i--,fl=fl->next){
                     rdvcpy(r+i*FVEL+1,fl->fvel,3);
                     r[FVEL*i+1+3]=0;
                  }
               }else if(myasgn.val.type==FNAME){
                  return(read_ascii_fvec(myasgn.val.data.str,(double **)p,l_size,cs));
               }else typeerr=1;
               break;
            }
            break;
         case VECTOR:
            if( varsize ) {
               switch(sg_param_type){
               case LONG:
                  *Gpar_prsize = myasgn.vl->len;
                  for(vl=myasgn.vl,i=*Gpar_prsize-1;i>=0;i--,vl=vl->next){
                     if(vl->val.type!=INUM) {
                        typeerr = 1;
                        break;
                     }
                  }
                  if( !typeerr ) {
                     if( *Gpar_pr = (void *) malloc(*Gpar_prsize * sizeof(int)) ) {
                        for( vl=myasgn.vl, i=*Gpar_prsize-1; i>=0; i--, vl=vl->next ) {
                           if( ltrace ) fprintf(stderr,"Assigning v[%d]=%d\n",i,vl->val.data.inum);
                           ((int *) (*Gpar_pr))[i] = vl->val.data.inum;
                        }
                     } else {
                        fprintf(stderr,"sget_param: Error allocating %d int's.\n",*Gpar_prsize);
                        *Gpar_prsize = 0;
                     }
                  } else {
                     fprintf(stderr,"sget_param: Error parsing int in vector assignment.\n");
                     *Gpar_prsize = 0;
                  }
                  break;
               case DOUBLE:
                  *Gpar_prsize = myasgn.vl->len;
                  for(vl=myasgn.vl,i=*Gpar_prsize-1;i>=0;i--,vl=vl->next){
                     if(vl->val.type!=NUM && vl->val.type!=INUM) {
                        typeerr = 1;
                        break;
                     }
                  }
                  if( !typeerr ) {
                     if( *Gpar_pr = (void *) malloc(*Gpar_prsize * sizeof(double)) ) {
                        for( vl=myasgn.vl, i=*Gpar_prsize-1; i>=0; i--, vl=vl->next ) {
                           if(vl->val.type==NUM) {
                              if( ltrace ) fprintf(stderr,"Assigning v[%d]=%g\n",i,vl->val.data.num);
                              ((double *) (*Gpar_pr))[i] = vl->val.data.num;
                           } else if(vl->val.type==INUM) {
                              if( ltrace ) fprintf(stderr,"Assigning v[%d]=%d\n",i,vl->val.data.inum);
                              ((double *) (*Gpar_pr))[i] = vl->val.data.inum;
                           }
                        }
                     } else {
                        fprintf(stderr,"sget_param: Error allocating %d double's.\n",*Gpar_prsize);
                        *Gpar_prsize = 0;
                     }
                  } else {
                     fprintf(stderr,"sget_param: Error parsing double in vector assignment.\n");
                     *Gpar_prsize = 0;
                  }
                  break;
               case STRING:
                  *Gpar_prsize = myasgn.vl->len;
                  for(vl=myasgn.vl,i=*Gpar_prsize-1;i>=0;i--,vl=vl->next){
                     if(vl->val.type!=NUM && vl->val.type!=STR) {
                        typeerr = 1;
                        break;
                     }
                  }
                  if( !typeerr ) {
                     if( *Gpar_pr = (void *) malloc(*Gpar_prsize * sizeof(char *)) ) {
                        for( vl=myasgn.vl, i=*Gpar_prsize-1; i>=0; i--, vl=vl->next ) {
                           if( ltrace ) fprintf(stderr,"Assigning v[%d]='%s'\n",i,vl->val.data.str);
                           ((char **) (*Gpar_pr))[i] = strdup(vl->val.data.str);
                        }
                     } else {
                        fprintf(stderr,"sget_param: Error allocating %d char *'s.\n",*Gpar_prsize);
                        *Gpar_prsize = 0;
                     }
                  } else {
                     fprintf(stderr,"sget_param: Error parsing string in vector assignment.\n");
                     *Gpar_prsize = 0;
                  }
                  break;
               }
            } else {
               switch(sg_param_type){
               case LONG:
                  if(l_size!=myasgn.vl->len){
                     fprintf(stderr,"sget_param: expecting length %d, but read %d\n",l_size,myasgn.vl->len);
                     return(-2);
                  }
                  for(vl=myasgn.vl,i=l_size-1;i>=0;i--,vl=vl->next){
                     if(vl->val.type==INUM)
                        ((int *)p)[i]=vl->val.data.inum;
                     else typeerr=1;
                  }
                  break;
               case DOUBLE:
                  if(l_size!=myasgn.vl->len){
                     fprintf(stderr,"sget_param: expecting length %d, but read %d\n",l_size,myasgn.vl->len);
                     return(-2);
                  }
                  for(vl=myasgn.vl,i=l_size-1;i>=0;i--,vl=vl->next){
                     if(vl->val.type==NUM)
                        ((double *)p)[i]=vl->val.data.num;
                     else if(vl->val.type==INUM)
                        ((double *)p)[i]=(double)(vl->val.data.inum);
                     else typeerr=1;
                  }
                  break;
               case STRING:
                  if(l_size!=myasgn.vl->len){
                     fprintf(stderr,"sget_param: expecting length %d, but read %d\n",l_size,myasgn.vl->len);
                     return(-2);
                  }
                  for(vl=myasgn.vl,i=l_size-1;i>=0;i--,vl=vl->next){
                     if(vl->val.type==STR){
                        if(*((char **)p+i)!=NULL)
                           free(*((char **)p+i));
                        *((char**)p+i)=cvec_alloc(strlen(vl->val.data.str)+1);
                        strcpy(*((char**)p+i),vl->val.data.str);
                     }else typeerr=1;
                  }
                  break;
               }
            }
            break;
         }
         if(typeerr){
            fprintf(stderr,"sget_param: read bad value for <%s>.  Expected %s\n",name,type);
            return(-1);
         }
      }
   }
   if(!found)
      return(0);
   return(1);
}

