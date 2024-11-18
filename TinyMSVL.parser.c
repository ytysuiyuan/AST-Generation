/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "D:\\bianyiyuanli\\TinyMSVL.y"

#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "msvl_ast.h"
#include "common.h"

extern int yylex(void);
extern int yyparse(void);
struct ast *ast_root = NULL;

#line 83 "D:\\bianyiyuanli/TinyMSVL.parser.c"

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

#include "TinyMSVL.parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_SKIP = 5,                       /* SKIP  */
  YYSYMBOL_THEN = 6,                       /* THEN  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_OPENPAR = 8,                    /* OPENPAR  */
  YYSYMBOL_CLOSEPAR = 9,                   /* CLOSEPAR  */
  YYSYMBOL_OPENBPAR = 10,                  /* OPENBPAR  */
  YYSYMBOL_CLOSEBPAR = 11,                 /* CLOSEBPAR  */
  YYSYMBOL_RETURN = 12,                    /* RETURN  */
  YYSYMBOL_END = 13,                       /* END  */
  YYSYMBOL_COMMA = 14,                     /* COMMA  */
  YYSYMBOL_CHOP = 15,                      /* CHOP  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_ASSP = 18,                      /* ASSP  */
  YYSYMBOL_ASSN = 19,                      /* ASSN  */
  YYSYMBOL_BOOLOR = 20,                    /* BOOLOR  */
  YYSYMBOL_BOOLAND = 21,                   /* BOOLAND  */
  YYSYMBOL_NE = 22,                        /* NE  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_ADD = 28,                       /* ADD  */
  YYSYMBOL_SUB = 29,                       /* SUB  */
  YYSYMBOL_MUL = 30,                       /* MUL  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_NEGATION = 32,                  /* NEGATION  */
  YYSYMBOL_ID = 33,                        /* ID  */
  YYSYMBOL_INTLITERAL = 34,                /* INTLITERAL  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_statement = 37,                 /* statement  */
  YYSYMBOL_declaration = 38,               /* declaration  */
  YYSYMBOL_asgnstmt = 39,                  /* asgnstmt  */
  YYSYMBOL_ifstmt = 40,                    /* ifstmt  */
  YYSYMBOL_optelsestmt = 41,               /* optelsestmt  */
  YYSYMBOL_exp = 42,                       /* exp  */
  YYSYMBOL_unaryExp = 43,                  /* unaryExp  */
  YYSYMBOL_primaryExp = 44,                /* primaryExp  */
  YYSYMBOL_constExp = 45                   /* constExp  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   145

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  75

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    78,    86,    91,    99,   104,   106,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   126,   127,   128,   132,   133,   134,   138
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "SKIP",
  "THEN", "INT", "OPENPAR", "CLOSEPAR", "OPENBPAR", "CLOSEBPAR", "RETURN",
  "END", "COMMA", "CHOP", "OR", "AND", "ASSP", "ASSN", "BOOLOR", "BOOLAND",
  "NE", "EQ", "GE", "LE", "GT", "LT", "ADD", "SUB", "MUL", "DIV",
  "NEGATION", "ID", "INTLITERAL", "$accept", "program", "statement",
  "declaration", "asgnstmt", "ifstmt", "optelsestmt", "exp", "unaryExp",
  "primaryExp", "constExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
#endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      46,    28,   -31,   -30,    46,   -31,    28,    28,   -17,   -31,
      20,     8,   -31,   -31,   -31,   -12,   -31,   -31,   -31,    28,
     -31,    61,   -31,    17,    84,   -31,   -31,    28,    28,   -31,
     -31,    46,    46,    46,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    84,    40,   -31,   -31,
     -12,   -12,   -11,    18,   -31,    95,    72,   103,   103,   114,
     114,   114,   114,    25,    25,   -31,   -31,    46,    54,    48,
      56,   -31,    46,   124,   -31
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     9,     0,     0,    12,     0,     0,    36,    38,
       0,     0,     7,     8,    10,     6,    19,    32,    35,     0,
      36,     0,    13,     0,     6,    33,    34,     0,     0,     1,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    37,
      14,    15,     5,     4,     3,    20,    21,    23,    22,    25,
      27,    24,    26,    28,    29,    30,    31,     0,     0,    18,
       0,    16,     0,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,    -4,   -31,   -31,   -31,   -31,     3,    66,   -31,
     -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    14,    71,    15,    16,    17,
      18
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    27,    28,    22,    21,    32,    33,    24,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      29,    30,    46,    31,    32,    33,    48,    52,    53,    54,
      50,    51,    31,    32,    33,    33,    19,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     1,
      67,     2,    70,     3,     4,    44,    45,     6,     0,     5,
       7,    20,     9,    68,     0,    69,    72,    47,    73,    31,
      32,    33,    25,    26,     0,     6,     0,     0,     7,     8,
       9,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    49,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    38,    39,    40,
      41,    42,    43,    44,    45,    74,     0,     0,     0,    31,
      32,    33,    42,    43,    44,    45
};

static const yytype_int8 yycheck[] =
{
       4,    18,    19,    33,     1,    16,    17,     4,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    13,    19,    15,    16,    17,     9,    31,    32,    33,
      27,    28,    15,    16,    17,    17,     8,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     3,
      10,     5,     4,     7,     8,    30,    31,    29,    -1,    13,
      32,    33,    34,    67,    -1,    11,    10,     6,    72,    15,
      16,    17,     6,     7,    -1,    29,    -1,    -1,    32,    33,
      34,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     9,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    24,    25,    26,
      27,    28,    29,    30,    31,    11,    -1,    -1,    -1,    15,
      16,    17,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     8,    13,    29,    32,    33,    34,
      36,    37,    38,    39,    40,    42,    43,    44,    45,     8,
      33,    42,    33,    37,    42,    43,    43,    18,    19,     0,
      13,    15,    16,    17,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    42,     6,     9,     9,
      42,    42,    37,    37,    37,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    10,    37,    11,
       4,    41,    10,    37,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    38,    39,    39,    40,    41,    41,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    43,    43,    43,    44,    44,    44,    45
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     3,     7,     4,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     1,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* program: statement END  */
#line 54 "D:\\bianyiyuanli\\TinyMSVL.y"
                    {
        ast_root = newast(PROGROOT, (yyvsp[-1].node), NULL);
        // 使用 YYACCEPT 表示解析成功完成
        YYACCEPT;
    }
#line 1171 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 3: /* statement: statement AND statement  */
#line 64 "D:\\bianyiyuanli\\TinyMSVL.y"
                              { (yyval.node) = newast(ANDSTA, (yyvsp[-2].node), (yyvsp[0].node)); printf("AND statement: $$->nid=%d, $1->nid=%d, $3->nid=%d\n", (yyval.node)->nid, (yyvsp[-2].node)->nid, (yyvsp[0].node)->nid); }
#line 1177 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 4: /* statement: statement OR statement  */
#line 65 "D:\\bianyiyuanli\\TinyMSVL.y"
                             { (yyval.node) = newast(ORSTA, (yyvsp[-2].node), (yyvsp[0].node)); printf("OR statement: $$->nid=%d, $1->nid=%d, $3->nid=%d\n", (yyval.node)->nid, (yyvsp[-2].node)->nid, (yyvsp[0].node)->nid); }
#line 1183 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 5: /* statement: statement CHOP statement  */
#line 66 "D:\\bianyiyuanli\\TinyMSVL.y"
                               { (yyval.node) = newast(CHOPSTA, (yyvsp[-2].node), (yyvsp[0].node)); printf("CHOP statement: $$->nid=%d, $1->nid=%d, $3->nid=%d\n", (yyval.node)->nid, (yyvsp[-2].node)->nid, (yyvsp[0].node)->nid); }
#line 1189 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 6: /* statement: exp  */
#line 67 "D:\\bianyiyuanli\\TinyMSVL.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1195 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 7: /* statement: declaration  */
#line 68 "D:\\bianyiyuanli\\TinyMSVL.y"
                  { (yyval.node) = (yyvsp[0].node);}
#line 1201 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 8: /* statement: asgnstmt  */
#line 69 "D:\\bianyiyuanli\\TinyMSVL.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1207 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 9: /* statement: SKIP  */
#line 70 "D:\\bianyiyuanli\\TinyMSVL.y"
           { (yyval.node) = newempty(SKIPSTA); printf("SKIP statement\n");}
#line 1213 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 10: /* statement: ifstmt  */
#line 71 "D:\\bianyiyuanli\\TinyMSVL.y"
             { (yyval.node) = (yyvsp[0].node); }
#line 1219 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 11: /* statement: OPENPAR statement CLOSEPAR  */
#line 72 "D:\\bianyiyuanli\\TinyMSVL.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 1225 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 12: /* statement: END  */
#line 73 "D:\\bianyiyuanli\\TinyMSVL.y"
          { (yyval.node) = NULL; }
#line 1231 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 13: /* declaration: INT ID  */
#line 78 "D:\\bianyiyuanli\\TinyMSVL.y"
            {
        (yyval.node) = newsym(SYMDEF, (yyvsp[0].s));
        printf("Declaration: INT %s\n", (yyvsp[0].s)->name);
	
    }
#line 1241 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 14: /* asgnstmt: ID ASSP exp  */
#line 86 "D:\\bianyiyuanli\\TinyMSVL.y"
                 {
        struct ast* id = newsym(SYMUSE, (yyvsp[-2].s));
        (yyval.node) = newasgn((struct sym*)id, (yyvsp[0].node));
        printf("Assignment: %s := ...\n", (yyvsp[-2].s)->name);
    }
#line 1251 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 15: /* asgnstmt: ID ASSN exp  */
#line 91 "D:\\bianyiyuanli\\TinyMSVL.y"
                 {
        struct ast* id = newsym(SYMUSE, (yyvsp[-2].s));
        (yyval.node) = newasgn((struct sym*)id, (yyvsp[0].node));
        printf("Assignment: %s := ...\n", (yyvsp[-2].s)->name);
    }
#line 1261 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 16: /* ifstmt: IF exp THEN OPENBPAR statement CLOSEBPAR optelsestmt  */
#line 100 "D:\\bianyiyuanli\\TinyMSVL.y"
        { (yyval.node) = newflow((yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); printf("If statement\n"); }
#line 1267 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 17: /* optelsestmt: ELSE OPENBPAR statement CLOSEBPAR  */
#line 105 "D:\\bianyiyuanli\\TinyMSVL.y"
        { (yyval.node) = newunode(ELSEEXP, (yyvsp[-1].node)); printf("Else statement\n"); }
#line 1273 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 18: /* optelsestmt: %empty  */
#line 106 "D:\\bianyiyuanli\\TinyMSVL.y"
      { (yyval.node) = NULL; }
#line 1279 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 19: /* exp: unaryExp  */
#line 110 "D:\\bianyiyuanli\\TinyMSVL.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 1285 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 20: /* exp: exp BOOLOR exp  */
#line 111 "D:\\bianyiyuanli\\TinyMSVL.y"
                     { (yyval.node) = newast(BOREXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary OR Expression\n"); }
#line 1291 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 21: /* exp: exp BOOLAND exp  */
#line 112 "D:\\bianyiyuanli\\TinyMSVL.y"
                     { (yyval.node) = newast(BANDEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary AND Expression\n"); }
#line 1297 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 22: /* exp: exp EQ exp  */
#line 113 "D:\\bianyiyuanli\\TinyMSVL.y"
                 { (yyval.node) = newast(EQEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary EQ Expression\n"); }
#line 1303 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 23: /* exp: exp NE exp  */
#line 114 "D:\\bianyiyuanli\\TinyMSVL.y"
                 { (yyval.node) = newast(NEEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary NE Expression\n"); }
#line 1309 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 24: /* exp: exp GT exp  */
#line 115 "D:\\bianyiyuanli\\TinyMSVL.y"
                { (yyval.node) = newast(GTEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary GT Expression\n"); }
#line 1315 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 25: /* exp: exp GE exp  */
#line 116 "D:\\bianyiyuanli\\TinyMSVL.y"
                { (yyval.node) = newast(GEEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary GE Expression\n"); }
#line 1321 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 26: /* exp: exp LT exp  */
#line 117 "D:\\bianyiyuanli\\TinyMSVL.y"
                { (yyval.node) = newast(LTEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary LT Expression\n"); }
#line 1327 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 27: /* exp: exp LE exp  */
#line 118 "D:\\bianyiyuanli\\TinyMSVL.y"
                { (yyval.node) = newast(LEEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary LE Expression\n"); }
#line 1333 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 28: /* exp: exp ADD exp  */
#line 119 "D:\\bianyiyuanli\\TinyMSVL.y"
                 { (yyval.node) = newast(ADDEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary ADD Expression\n"); }
#line 1339 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 29: /* exp: exp SUB exp  */
#line 120 "D:\\bianyiyuanli\\TinyMSVL.y"
                 { (yyval.node) = newast(SUBEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary SUB Expression\n"); }
#line 1345 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 30: /* exp: exp MUL exp  */
#line 121 "D:\\bianyiyuanli\\TinyMSVL.y"
                 { (yyval.node) = newast(MULEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary MUL Expression\n"); }
#line 1351 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 31: /* exp: exp DIV exp  */
#line 122 "D:\\bianyiyuanli\\TinyMSVL.y"
                 { (yyval.node) = newast(DIVEXP, (yyvsp[-2].node), (yyvsp[0].node)); printf("Binary DIV Expression\n"); }
#line 1357 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 32: /* unaryExp: primaryExp  */
#line 126 "D:\\bianyiyuanli\\TinyMSVL.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1363 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 33: /* unaryExp: SUB unaryExp  */
#line 127 "D:\\bianyiyuanli\\TinyMSVL.y"
                  { (yyval.node) = newunode(USUBEXP, (yyvsp[0].node)); printf("Unary SUB Expression\n"); }
#line 1369 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 34: /* unaryExp: NEGATION unaryExp  */
#line 128 "D:\\bianyiyuanli\\TinyMSVL.y"
                       { (yyval.node) = newunode(NEGEXP, (yyvsp[0].node)); printf("Unary NEGATION Expression\n"); }
#line 1375 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 35: /* primaryExp: constExp  */
#line 132 "D:\\bianyiyuanli\\TinyMSVL.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 1381 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 36: /* primaryExp: ID  */
#line 133 "D:\\bianyiyuanli\\TinyMSVL.y"
        { (yyval.node) = newsym(SYMUSE, (yyvsp[0].s)); printf("Identifier: %s\n", (yyvsp[0].s)->name);printf("$$->nid=%d\n",(yyval.node)->nid); }
#line 1387 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 37: /* primaryExp: OPENPAR exp CLOSEPAR  */
#line 134 "D:\\bianyiyuanli\\TinyMSVL.y"
                          { (yyval.node) = (yyvsp[-1].node); }
#line 1393 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;

  case 38: /* constExp: INTLITERAL  */
#line 138 "D:\\bianyiyuanli\\TinyMSVL.y"
                { (yyval.node) = newnum((yyvsp[0].val)); printf("Integer Literal: %d\n", (yyvsp[0].val)); }
#line 1399 "D:\\bianyiyuanli/TinyMSVL.parser.c"
    break;


#line 1403 "D:\\bianyiyuanli/TinyMSVL.parser.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 140 "D:\\bianyiyuanli\\TinyMSVL.y"



