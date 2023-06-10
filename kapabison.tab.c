/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "kapabison.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kapabison.tab.h"
#define MAX_STR_CONST 1025

extern FILE *yyin;
extern int yylex();
extern char* yytext;
extern int yyparse();
extern int line_num;
extern char str_buf[MAX_STR_CONST];    
extern char*str_buf_ptr;
int line=1;
int error_count=0; 
int flag_err_type=0; // 0: Token Error (YYTEXT) || 1: String Error (STRBUF)
int scope=0;
extern int yylex(void);
void yyerror(const char* message);
extern char *yytext;
extern void yyterminate();



#line 96 "kapabison.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_KAPABISON_TAB_H_INCLUDED
# define YY_YY_KAPABISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COLON = 258,
    OBRACKETS = 259,
    CBRACKETS = 260,
    OBRACES = 261,
    CBRACES = 262,
    COMMA = 263,
    last = 264,
    gameId = 265,
    drawId = 266,
    drawTime = 267,
    status = 268,
    drawBreak = 269,
    visualDraw = 270,
    pricePoints = 271,
    winningNumbers = 272,
    prizeCategories = 273,
    wagerStatistics = 274,
    list = 275,
    bonus = 276,
    active = 277,
    id = 278,
    divident = 279,
    winners = 280,
    distributed = 281,
    jackpot = 282,
    fixed = 283,
    categoryType = 284,
    gameType = 285,
    minimumDistributed = 286,
    columns = 287,
    addOn = 288,
    drawId_at = 289,
    gameId_at = 290,
    amount = 291,
    wagers = 292,
    content = 293,
    totalPages = 294,
    totalElements = 295,
    numberOfElements = 296,
    sort = 297,
    direction = 298,
    property = 299,
    ignoreCase = 300,
    nullHandling = 301,
    descending = 302,
    ascending = 303,
    first = 304,
    size = 305,
    number = 306,
    INT = 307,
    STRING = 308,
    FLOAT = 309,
    BOOLEAN = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "kapabison.y"

	int intval;
	float floatval;
	char charval;
	char* strval;
	
	

#line 213 "kapabison.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAPABISON_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  514

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    98,    98,    98,   100,   100,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   109,   109,
     109,   109,   112,   112,   112,   112,   115,   115,   115,   115,
     118,   118,   118,   118,   121,   121,   121,   121,   121,   121,
     121,   124,   124,   124,   124,   127,   127,   127,   127,   130,
     130,   130,   130,   133,   133,   133,   133,   136,   136,   136,
     136,   139,   139,   139,   142,   142,   142,   142,   145,   145,
     145,   145,   148,   148,   148,   151,   151,   151,   151,   151,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   156,   156,   156,   156,   156,   159,
     159,   159,   159,   159,   162,   162,   162,   162,   165,   165,
     165,   165,   168,   168,   168,   168,   171,   171,   171,   171,
     173,   173,   173,   173,   175,   175,   175,   175,   178,   178,
     179,   178,   182,   182,   182,   182,   185,   185,   185,   185,
     185,   188,   188,   188,   191,   191,   191,   191,   191,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   197,   197,   197,   197,   197,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   204,   204,
     204,   204,   204,   204,   204,   204,   207,   207,   210,   210,
     210,   210,   213,   213,   213,   213,   216,   216,   216,   216,
     219,   219,   219,   219,   223,   223,   223,   223,   226,   226,
     226,   226,   229,   229,   229,   229,   232,   232,   232,   236,
     236,   236,   239,   239,   239,   239,   242,   242,   242,   242,
     245,   245,   245,   245,   248,   248,   248,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"colon (:)\"", "\"obrackets ({)\"",
  "\"cbrackets (})\"", "\"obraces ([)\"", "\"cbraces (])\"",
  "\"comma (,)\"", "\"last\"", "\"gemId\"", "\"drawId\"", "\"drawTime\"",
  "\"status\"", "\"drawBreak\"", "\"visualDraw\"", "\"pricePoints\"",
  "\"winningNumbers\"", "\"prizeCategories\"", "\"wagerStatistics\"",
  "\"list\"", "\"bonus\"", "\"active\"", "\"id\"", "\"divident\"",
  "\"winners\"", "\"distributed\"", "\"jackpot\"", "\"fixed\"",
  "\"categoryType\"", "\"gameType\"", "\"minimumDistributed\"",
  "\"columns\"", "\"addOn\"", "\"drawId_at\"", "\"gameId_at\"",
  "\"amount\"", "\"wagers\"", "\"content\"", "\"totalPages\"",
  "\"totalElements\"", "\"numberOfElements\"", "\"sort\"", "\"direction\"",
  "\"property\"", "\"ignoreCase\"", "\"nullHandling\"", "\"descending\"",
  "\"ascending\"", "\"first\"", "\"size\"", "\"number\"", "\"INT\"",
  "\"STRING\"", "\"FLOAT\"", "\"BOOLEAN\"", "$accept", "JSON", "$@1",
  "rulePROGRAM", "ruleFOTIA", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "ruleCONTENT", "$@10", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "ruleTOTALPAGES",
  "$@22", "$@23", "$@24", "ruleTOTALELEMENTS", "$@25", "$@26", "$@27",
  "ruleLASTRANGE", "$@28", "$@29", "$@30", "ruleNUMBEROFELEMENTS", "$@31",
  "$@32", "$@33", "ruleSORT", "$@34", "$@35", "$@36", "$@37", "$@38",
  "$@39", "ruleDIRECTION", "$@40", "$@41", "$@42", "rulePROPERTY", "$@43",
  "$@44", "$@45", "ruleIGNORECASE", "$@46", "$@47", "$@48",
  "ruleNULLHANDLING", "$@49", "$@50", "$@51", "ruleDESCENDING", "$@52",
  "$@53", "$@54", "ruleASCENDING", "$@55", "$@56", "ruleFIRST", "$@57",
  "$@58", "$@59", "ruleSIZE", "$@60", "$@61", "$@62", "ruleNUMBER", "$@63",
  "$@64", "ruleWINNINGNUMBERSRANGE", "$@65", "$@66", "$@67", "$@68",
  "ruleLISTR", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75",
  "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "ruleBONUSR", "$@82",
  "$@83", "$@84", "$@85", "ruleLAST", "$@86", "$@87", "$@88", "$@89",
  "ruleACTIVE", "$@90", "$@91", "$@92", "ruleGAMEID", "$@93", "$@94",
  "$@95", "ruleDRAWID", "$@96", "$@97", "$@98", "ruleDRAWTIME", "$@99",
  "$@100", "$@101", "ruleSTATUS", "$@102", "$@103", "$@104", "ruleSTATUSA",
  "$@105", "$@106", "$@107", "ruleDRAWBREAK", "$@108", "$@109", "$@110",
  "ruleVISUALDRAW", "$@111", "$@112", "$@113", "rulePRICEPOINTS", "$@114",
  "$@115", "$@116", "$@117", "ruleAMOUNT", "$@118", "$@119",
  "ruleWINNINGNUMBERS", "$@120", "$@121", "$@122", "$@123", "ruleLIST",
  "$@124", "$@125", "$@126", "$@127", "$@128", "$@129", "$@130", "$@131",
  "$@132", "$@133", "$@134", "$@135", "$@136", "ruleBONUS", "$@137",
  "$@138", "$@139", "$@140", "rulePRIZECATEGORIESID", "$@141", "$@142",
  "$@143", "$@144", "$@145", "$@146", "$@147", "$@148", "$@149",
  "rulePRIZECATEGORIES", "$@150", "$@151", "$@152", "$@153", "$@154",
  "$@155", "$@156", "ruleNERO", "$@157", "ruleID", "$@158", "$@159",
  "$@160", "ruleDIVIDENT", "$@161", "$@162", "$@163", "ruleWINNERS",
  "$@164", "$@165", "$@166", "ruleDISTRIBUTED", "$@167", "$@168", "$@169",
  "ruleJACKPOT", "$@170", "$@171", "$@172", "ruleFIXED", "$@173", "$@174",
  "$@175", "ruleCATEGORYTYPE", "$@176", "$@177", "$@178", "ruleGAMETYPE",
  "$@179", "$@180", "ruleMINIMUMDISTRIBUTED", "$@181", "$@182",
  "ruleWAGERSTATISTICS", "$@183", "$@184", "$@185", "ruleCOLUMNS", "$@186",
  "$@187", "$@188", "ruleWAGERS", "$@189", "$@190", "$@191", "ruleADDON",
  "$@192", "$@193", "$@194", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF (-147)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,  -147,    13,    -1,  -147,  -147,  -147,     9,  -147,    -7,
      14,    15,  -147,  -147,  -147,  -147,  -147,    16,    12,    17,
    -147,  -147,  -147,    20,    10,    21,  -147,  -147,    18,  -147,
      19,    10,    23,  -147,    22,  -147,  -147,    18,  -147,    25,
    -147,    26,    10,    21,    22,   -31,  -147,    27,  -147,    24,
    -147,    28,    30,  -147,   -21,  -147,    37,  -147,    29,    18,
    -147,  -147,    24,    33,  -147,   -19,  -147,    42,  -147,    32,
    -147,    21,    43,    29,  -147,    41,  -147,    -3,  -147,    48,
    -147,    35,    22,    45,  -147,    32,  -147,    46,  -147,     3,
    -147,    53,  -147,    39,  -147,  -147,    36,    39,  -147,    51,
    -147,    11,  -147,    57,  -147,    58,    26,    21,  -147,    58,
    -147,    56,  -147,    61,  -147,    63,  -147,    49,    59,  -147,
      54,    62,    49,  -147,    64,  -147,    65,  -147,    50,  -147,
      69,  -147,    24,  -147,  -147,    70,  -147,    44,  -147,    71,
    -147,    55,    75,  -147,    58,  -147,    73,  -147,  -147,    77,
      66,  -147,    80,  -147,    60,  -147,    76,    79,    29,  -147,
      85,  -147,  -147,    68,    87,  -147,    89,  -147,    67,    90,
    -147,  -147,  -147,    72,  -147,    88,    92,  -147,    93,  -147,
      52,  -147,    94,  -147,    74,  -147,    58,    32,  -147,    78,
      81,  -147,  -147,    97,  -147,    50,  -147,    82,  -147,    99,
    -147,    84,    83,    95,  -147,   102,  -147,    98,  -147,   103,
    -147,   100,    55,   105,  -147,    86,  -147,   107,  -147,    91,
    -147,    96,  -147,   104,  -147,   111,  -147,   101,  -147,   110,
    -147,    60,  -147,   109,  -147,   106,  -147,   116,  -147,   113,
     119,  -147,   108,    58,  -147,  -147,   112,  -147,   120,  -147,
     114,   115,  -147,    67,  -147,   117,  -147,   118,  -147,   121,
    -147,   122,  -147,   123,  -147,   124,   126,   125,    39,  -147,
     127,  -147,   128,  -147,   129,  -147,   130,    74,  -147,   131,
    -147,   132,  -147,   134,  -147,   133,  -147,   137,  -147,  -147,
    -147,  -147,   136,  -147,   135,  -147,   142,  -147,   138,   139,
    -147,    84,  -147,   140,  -147,   141,  -147,  -147,   143,  -147,
      58,   145,    58,  -147,   144,  -147,   146,  -147,   147,  -147,
     148,  -147,   150,    91,  -147,   151,  -147,   149,   153,  -147,
     152,   154,  -147,  -147,  -147,   155,  -147,   159,  -147,   165,
    -147,  -147,   156,  -147,   157,  -147,   161,  -147,  -147,   162,
    -147,  -147,   160,    49,  -147,   163,  -147,   158,  -147,   170,
    -147,  -147,  -147,  -147,   168,    58,  -147,   171,   172,  -147,
     177,  -147,   164,  -147,   175,   173,  -147,   176,   186,  -147,
     189,  -147,  -147,   183,  -147,   166,  -147,  -147,  -147,  -147,
     193,  -147,   167,  -147,   192,  -147,   174,   169,    58,   191,
    -147,   195,  -147,   179,  -147,  -147,  -147,   194,  -147,   198,
    -147,   203,  -147,   180,   199,   201,  -147,   178,  -147,  -147,
     208,  -147,   181,  -147,  -147,   204,  -147,   182,   184,  -147,
     211,  -147,   188,   187,   197,  -147,   207,  -147,  -147,   185,
    -147,   214,  -147,   196,  -147,  -147,   215,  -147,   212,   216,
    -147,   190,  -147,   226,  -147,   228,   223,   233,  -147,   200,
    -147,  -147,   232,  -147,   202,  -147,   238,  -147,  -147,  -147,
     234,  -147,  -147,   235,  -147,   205,  -147,   239,   206,   209,
    -147,   240,  -147,   241,  -147,   210,  -147,  -147,  -147,  -147,
    -147,   242,  -147,   243,   246,   217,  -147,  -147,  -147,  -147,
     248,   249,  -147,  -147,   218,  -147,   251,  -147,   219,  -147,
     254,  -147,   256,  -147
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,   109,     6,     0,     5,     0,
       0,     0,     3,   114,     4,   110,     7,     0,     0,     0,
     115,   111,     8,     0,     0,     0,   116,   118,     0,    15,
       0,     0,     0,   122,     0,    16,     9,     0,   119,     0,
     126,     0,     0,     0,     0,     0,   123,     0,   130,     0,
      17,     0,     0,   120,     0,   127,     0,   138,     0,     0,
      10,   134,     0,     0,   124,     0,   131,     0,   142,     0,
      18,     0,     0,     0,   121,     0,   128,     0,   139,     0,
     146,     0,     0,     0,   135,     0,   125,     0,   132,     0,
     143,     0,   154,     0,    19,    11,     0,     0,   129,     0,
     140,     0,   147,     0,   178,     0,     0,     0,   136,     0,
     133,     0,   144,     0,   155,     0,   196,     0,     0,    20,
       0,     0,     0,   141,     0,   148,     0,   179,     0,   232,
       0,   188,     0,    12,   137,     0,   145,     0,   156,     0,
     198,     0,     0,   112,     0,    21,     0,   117,   151,     0,
       0,   180,     0,   202,     0,   233,     0,     0,     0,    13,
       0,   149,   159,     0,     0,   199,     0,   206,     0,     0,
     113,   189,    22,     0,   152,     0,     0,   173,     0,   181,
       0,   203,     0,   210,     0,   234,     0,     0,    28,     0,
       0,   150,   160,     0,   157,     0,   200,     0,   207,     0,
     214,     0,     0,     0,    23,     0,    32,     0,   153,     0,
     174,     0,     0,     0,   204,     0,   211,     0,   218,     0,
     236,     0,   190,     0,    29,     0,    36,     0,   161,     0,
     158,     0,   201,     0,   208,     0,   215,     0,   222,     0,
       0,   240,     0,     0,    85,    24,     0,    33,     0,    40,
       0,     0,   175,     0,   205,     0,   212,     0,   219,     0,
     226,     0,   237,     0,   244,     0,     0,     0,     0,    30,
       0,    37,     0,    44,     0,   162,     0,     0,   209,     0,
     216,     0,   223,     0,   197,     0,   241,     0,   235,   191,
      86,    25,     0,    34,     0,    41,     0,    74,     0,     0,
     176,     0,   213,     0,   220,     0,   227,   238,     0,   245,
       0,     0,     0,    31,     0,    38,     0,    45,     0,    78,
       0,   163,     0,     0,   217,     0,   224,     0,     0,   242,
       0,     0,    87,    26,    35,     0,    42,     0,    75,     0,
      82,    14,     0,   177,     0,   221,     0,   228,   239,     0,
     246,   192,     0,     0,    39,     0,    46,     0,    79,     0,
     164,   182,   225,   243,     0,     0,    90,     0,     0,    43,
       0,    76,     0,    83,     0,     0,   247,     0,     0,   104,
       0,    27,    47,     0,    80,     0,   165,   183,   193,    91,
       0,    88,     0,    77,     0,    84,     0,     0,     0,     0,
     105,     0,    51,     0,    81,   166,   184,     0,    92,     0,
      89,     0,    55,     0,     0,     0,   194,     0,   106,    52,
       0,    59,     0,   167,   185,     0,    93,     0,     0,    56,
       0,    63,     0,     0,     0,   195,     0,   107,    53,     0,
      60,     0,    67,     0,   168,   229,     0,    94,     0,     0,
      57,     0,    64,     0,    71,     0,     0,     0,   186,     0,
     108,    54,     0,    61,     0,    68,     0,    48,   169,   230,
       0,    95,    58,     0,    65,     0,    72,     0,     0,     0,
     187,     0,    62,     0,    69,     0,    49,   170,   231,    96,
      66,     0,    73,     0,     0,     0,    70,    50,   171,    97,
       0,     0,   172,    98,     0,    99,     0,   100,     0,   101,
       0,   102,     0,   103
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,   -36,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,   -20,  -147,  -147,  -147,
     -27,  -147,  -147,  -147,   -35,  -147,  -147,  -147,    40,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,   -56,  -147,  -147,  -147,
     -68,  -147,  -147,  -147,   -81,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,   -94,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -107,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -144,  -147,   -65,  -147,  -147,  -147,
     -80,  -147,  -147,  -147,   -78,  -147,  -147,  -147,  -102,  -147,
    -147,  -147,  -123,  -147,  -147,  -147,  -146,  -147,  -147,  -147,
     -76,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -121,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    11,    19,    25,    43,    71,
     107,   146,   173,    30,    35,    42,    59,    82,   106,   132,
     158,   187,   223,   268,   312,   353,   189,   205,   246,   292,
     207,   225,   270,   314,   227,   248,   294,   335,   250,   272,
     316,   355,   274,   296,   337,   370,   392,   477,   493,   403,
     411,   428,   449,   413,   420,   439,   462,   422,   430,   451,
     473,   432,   441,   464,   483,   443,   453,   475,   491,   455,
     466,   485,   298,   318,   357,   383,   320,   339,   372,   394,
     341,   359,   385,   245,   267,   311,   352,   401,   367,   378,
     399,   417,   436,   459,   481,   495,   501,   504,   506,   508,
     510,   512,   380,   390,   409,   427,   448,     9,    10,    18,
      24,   156,    14,    17,    23,    31,    28,    32,    45,    63,
      34,    39,    54,    75,    41,    47,    65,    87,    49,    56,
      77,    99,    62,    72,    96,   121,    58,    67,    89,   111,
      69,    79,   101,   124,    81,    91,   113,   137,   175,   149,
     160,   190,    93,   103,   126,   150,   211,   163,   176,   209,
     251,   299,   342,   374,   396,   414,   433,   456,   478,   494,
     500,   178,   193,   229,   276,   322,   105,   115,   139,   164,
     195,   375,   397,   415,   434,   470,   117,   144,   186,   243,
     310,   365,   398,   425,   118,   128,   141,   152,   180,   213,
     154,   166,   197,   233,   168,   182,   215,   255,   184,   199,
     235,   279,   201,   217,   257,   303,   219,   237,   281,   325,
     239,   259,   305,   346,   261,   283,   327,   446,   457,   479,
     130,   142,   169,   202,   221,   240,   285,   328,   242,   263,
     308,   349,   265,   287,   330,   364
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     157,   135,   122,   109,    97,    85,    73,    51,     5,    52,
      44,    37,     1,     4,    12,    13,    21,    15,    16,    20,
      27,    53,    50,    22,    26,    29,    38,    36,    46,    33,
      55,    64,    70,    76,    40,    83,    60,     6,    57,    48,
      66,    74,   203,    61,    68,    78,    84,    94,    80,    86,
      88,    90,    92,    95,    98,   100,   102,   104,   108,   110,
     114,   133,   116,   112,   123,   125,   127,   131,   129,   138,
     134,   120,   136,   140,   143,   147,   145,   151,   155,   153,
     148,   159,   161,   165,   170,   167,   162,   171,   174,   177,
     172,   179,   181,   183,   185,   192,   191,   198,   194,   266,
     210,   200,   216,   222,   196,   224,   204,   226,   230,   228,
     236,   188,   218,   232,   247,   220,   252,   254,   206,   258,
     238,   244,   262,   271,   282,   278,   286,   284,   290,   288,
     212,   295,   231,   241,   289,   208,   214,   306,   234,   302,
     309,   264,   249,   260,   313,   317,   119,   321,   324,   332,
     338,   277,   334,   253,   301,   323,   273,   343,   350,   345,
     256,   348,   351,   354,   269,   356,   331,   275,   358,   362,
     363,   369,   280,   373,   291,   376,   387,   381,   297,   293,
     366,   382,   300,   386,   388,   307,   304,   361,   319,   389,
     315,   393,   379,   326,   391,   329,   400,   408,   336,   340,
     404,   416,   347,   410,   418,   333,   419,   423,   360,   424,
     402,   429,   435,   371,   440,   447,   384,   452,   395,   460,
     458,   377,   406,   412,   461,   421,   405,   431,   445,   465,
     426,   468,   368,   467,   437,   442,   469,   438,   450,   444,
     472,   476,   480,   482,   454,   463,   486,   344,   489,   490,
     496,   497,   471,   498,   407,   474,   502,   503,   487,   507,
     484,   511,     0,   488,   513,   492,     0,     0,     0,   499,
     505,   509
};

static const yytype_int16 yycheck[] =
{
     144,   122,   109,    97,    85,    73,    62,    43,     9,    44,
      37,    31,     4,     0,     5,    22,     4,     3,     3,     3,
      10,    52,    42,     6,     4,     4,     3,     8,     3,    11,
       3,    52,    59,    52,    12,    71,     8,    38,    14,    13,
       3,     8,   186,    13,    15,     3,     3,    82,    16,     8,
      53,     3,    17,     8,     8,    52,     3,    18,    22,     8,
       3,     7,     4,    52,     8,     4,     3,     8,    19,     4,
       8,   107,     8,    23,     5,     5,   132,     6,     3,    24,
      36,     8,     5,     3,     8,    25,    20,     8,     3,    21,
     158,     4,     3,    26,     4,     3,     8,     3,     5,   243,
       3,    27,     3,     8,    52,     3,   187,     9,     8,     6,
       3,    39,    28,     8,     3,    32,     6,     8,    40,     3,
      29,    17,     3,     3,     3,     8,     3,     5,     3,     5,
     195,     3,   212,    37,     8,    54,    54,     3,    52,     8,
       3,    33,    41,    30,     8,     3,   106,     8,     8,     4,
       3,   253,     8,   231,   277,   301,    42,     7,     6,     8,
      54,     8,     8,     8,    52,     6,   310,    52,     3,     8,
       8,     8,    54,     3,   268,     7,     3,     5,    49,    52,
      20,     4,    52,     8,     8,    52,    54,    30,    50,     3,
      55,     8,    21,    52,     5,    52,     3,     6,    52,    51,
       8,     7,    53,     8,     6,   312,     3,     8,    52,     8,
      43,     3,     8,    55,     3,     8,    52,     3,    52,     7,
       5,   365,    53,    44,     8,    45,    52,    46,    31,     3,
      52,     8,   353,     5,    52,    47,     3,    53,    53,    52,
       8,     3,     8,     8,    48,    55,     7,   323,     8,     8,
       8,     8,    52,     7,   398,    53,     8,     8,    52,     8,
      55,     7,    -1,    54,     8,    55,    -1,    -1,    -1,    52,
      52,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     4,    57,    58,     0,     9,    38,    59,    60,   163,
     164,    61,     5,    22,   168,     3,     3,   169,   165,    62,
       3,     4,     6,   170,   166,    63,     4,    10,   172,     4,
      69,   171,   173,    11,   176,    70,     8,   172,     3,   177,
      12,   180,    71,    64,   176,   174,     3,   181,    13,   184,
     172,    69,   180,    52,   178,     3,   185,    14,   192,    72,
       8,    13,   188,   175,    52,   182,     3,   193,    15,   196,
     176,    65,   189,   192,     8,   179,    52,   186,     3,   197,
      16,   200,    73,    69,     3,   196,     8,   183,    53,   194,
       3,   201,    17,   208,   180,     8,   190,   200,     8,   187,
      52,   198,     3,   209,    18,   232,    74,    66,    22,   232,
       8,   195,    52,   202,     3,   233,     4,   242,   250,   184,
      69,   191,   242,     8,   199,     4,   210,     3,   251,    19,
     286,     8,    75,     7,     8,   286,     8,   203,     4,   234,
      23,   252,   287,     5,   243,   192,    67,     5,    36,   205,
     211,     6,   253,    24,   256,     3,   167,   250,    76,     8,
     206,     5,    20,   213,   235,     3,   257,    25,   260,   288,
       8,     8,   196,    68,     3,   204,   214,    21,   227,     4,
     254,     3,   261,    26,   264,     4,   244,    77,    39,    82,
     207,     8,     3,   228,     5,   236,    52,   258,     3,   265,
      27,   268,   289,   250,   200,    83,    40,    86,    54,   215,
       3,   212,   252,   255,    54,   262,     3,   269,    28,   272,
      32,   290,     8,    78,     3,    87,     9,    90,     6,   229,
       8,   256,     8,   259,    52,   266,     3,   273,    29,   276,
     291,    37,   294,   245,    17,   139,    84,     3,    91,    41,
      94,   216,     6,   260,     8,   263,    54,   270,     3,   277,
      30,   280,     3,   295,    33,   298,   250,   140,    79,    52,
      88,     3,    95,    42,    98,    52,   230,   264,     8,   267,
      54,   274,     3,   281,     5,   292,     3,   299,     5,     8,
       3,   232,    85,    52,    92,     3,    99,    49,   128,   217,
      52,   268,     8,   271,    54,   278,     3,    52,   296,     3,
     246,   141,    80,     8,    89,    55,    96,     3,   129,    50,
     132,     8,   231,   272,     8,   275,    52,   282,   293,    52,
     300,   250,     4,   242,     8,    93,    52,   100,     3,   133,
      51,   136,   218,     7,   276,     8,   279,    53,     8,   297,
       6,     8,   142,    81,     8,    97,     6,   130,     3,   137,
      52,    30,     8,     8,   301,   247,    20,   144,   286,     8,
     101,    55,   134,     3,   219,   237,     7,   250,   145,    21,
     158,     5,     4,   131,    52,   138,     8,     3,     8,     3,
     159,     5,   102,     8,   135,    52,   220,   238,   248,   146,
       3,   143,    43,   105,     8,    52,    53,   250,     6,   160,
       8,   106,    44,   109,   221,   239,     7,   147,     6,     3,
     110,    45,   113,     8,     8,   249,    52,   161,   107,     3,
     114,    46,   117,   222,   240,     8,   148,    52,    53,   111,
       3,   118,    47,   121,    52,    31,   283,     8,   162,   108,
      53,   115,     3,   122,    48,   125,   223,   284,     5,   149,
       7,     8,   112,    55,   119,     3,   126,     5,     8,     3,
     241,    52,     8,   116,    53,   123,     3,   103,   224,   285,
       8,   150,     8,   120,    55,   127,     7,    52,    54,     8,
       8,   124,    55,   104,   225,   151,     8,     8,     7,    52,
     226,   152,     8,     8,   153,    52,   154,     8,   155,    52,
     156,     7,   157,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,    56,    58,    57,    59,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    60,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    69,    83,    84,
      85,    82,    87,    88,    89,    86,    91,    92,    93,    90,
      95,    96,    97,    94,    99,   100,   101,   102,   103,   104,
      98,   106,   107,   108,   105,   110,   111,   112,   109,   114,
     115,   116,   113,   118,   119,   120,   117,   122,   123,   124,
     121,   126,   127,   125,   129,   130,   131,   128,   133,   134,
     135,   132,   137,   138,   136,   140,   141,   142,   143,   139,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   144,   159,   160,   161,   162,   158,   164,
     165,   166,   167,   163,   169,   170,   171,   168,   173,   174,
     175,   172,   177,   178,   179,   176,   181,   182,   183,   180,
     185,   186,   187,   184,   189,   190,   191,   188,   193,   194,
     195,   192,   197,   198,   199,   196,   201,   202,   203,   204,
     200,   206,   207,   205,   209,   210,   211,   212,   208,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   213,   228,   229,   230,   231,   227,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   232,   243,   244,
     245,   246,   247,   248,   249,   242,   251,   250,   253,   254,
     255,   252,   257,   258,   259,   256,   261,   262,   263,   260,
     265,   266,   267,   264,   269,   270,   271,   268,   273,   274,
     275,   272,   277,   278,   279,   276,   281,   282,   280,   284,
     285,   283,   287,   288,   289,   286,   291,   292,   293,   290,
     295,   296,   297,   294,   299,   300,   301,   298
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     2,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     7,     0,     0,     0,     7,     0,     0,     0,     7,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     7,     0,     0,     0,     7,     0,
       0,     0,     7,     0,     0,     0,     7,     0,     0,     0,
       7,     0,     0,     5,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     0,     5,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    20,     0,     0,     0,    17,     0,     0,
       0,     7,     0,     0,     0,     7,     0,     0,     0,     7,
       0,     0,     0,     7,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     0,     0,     7,     0,     0,     0,     0,
      10,     0,     0,     5,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,    22,     0,    11,     0,     0,
       0,     7,     0,     0,     0,     7,     0,     0,     0,     7,
       0,     0,     0,     7,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     0,     0,     7,     0,     0,     5,     0,
       0,     5,     0,     0,     0,    10,     0,     0,     0,     7,
       0,     0,     0,     7,     0,     0,     0,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 98 "kapabison.y"
                  {printf("{\n");}
#line 1761 "kapabison.tab.c"
    break;

  case 3:
#line 98 "kapabison.y"
                                                         {printf("\n}");}
#line 1767 "kapabison.tab.c"
    break;

  case 6:
#line 103 "kapabison.y"
                        {printf("\t\"content\"");}
#line 1773 "kapabison.tab.c"
    break;

  case 7:
#line 103 "kapabison.y"
                                                         {printf(":");}
#line 1779 "kapabison.tab.c"
    break;

  case 8:
#line 103 "kapabison.y"
                                                                                {printf("[\n");}
#line 1785 "kapabison.tab.c"
    break;

  case 9:
#line 103 "kapabison.y"
                                                                                                                   {printf(",\n");}
#line 1791 "kapabison.tab.c"
    break;

  case 10:
#line 103 "kapabison.y"
                                                                                                                                                      {printf(",\n");}
#line 1797 "kapabison.tab.c"
    break;

  case 11:
#line 103 "kapabison.y"
                                                                                                                                                                                         {printf(",\n");}
#line 1803 "kapabison.tab.c"
    break;

  case 12:
#line 103 "kapabison.y"
                                                                                                                                                                                                                              {printf("\n]");}
#line 1809 "kapabison.tab.c"
    break;

  case 13:
#line 103 "kapabison.y"
                                                                                                                                                                                                                                                     {printf(",\n");}
#line 1815 "kapabison.tab.c"
    break;

  case 15:
#line 106 "kapabison.y"
                         {printf("\t\t{\n");}
#line 1821 "kapabison.tab.c"
    break;

  case 16:
#line 106 "kapabison.y"
                                              {printf("\t");}
#line 1827 "kapabison.tab.c"
    break;

  case 17:
#line 106 "kapabison.y"
                                                                         {printf("\t");}
#line 1833 "kapabison.tab.c"
    break;

  case 18:
#line 106 "kapabison.y"
                                                                                                    {printf("\t");}
#line 1839 "kapabison.tab.c"
    break;

  case 19:
#line 106 "kapabison.y"
                                                                                                                                 {printf("\t");}
#line 1845 "kapabison.tab.c"
    break;

  case 20:
#line 106 "kapabison.y"
                                                                                                                                                            {printf("\t");}
#line 1851 "kapabison.tab.c"
    break;

  case 21:
#line 106 "kapabison.y"
                                                                                                                                                                                          {printf("\t");}
#line 1857 "kapabison.tab.c"
    break;

  case 22:
#line 106 "kapabison.y"
                                                                                                                                                                                                                         {printf("\t");}
#line 1863 "kapabison.tab.c"
    break;

  case 23:
#line 106 "kapabison.y"
                                                                                                                                                                                                                                                         {printf("\t");}
#line 1869 "kapabison.tab.c"
    break;

  case 24:
#line 106 "kapabison.y"
                                                                                                                                                                                                                                                                                                 {printf("\t");}
#line 1875 "kapabison.tab.c"
    break;

  case 25:
#line 106 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                       {printf("\t");}
#line 1881 "kapabison.tab.c"
    break;

  case 26:
#line 106 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                                           {printf("\t");}
#line 1887 "kapabison.tab.c"
    break;

  case 27:
#line 106 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                        {printf("\n\t}");}
#line 1893 "kapabison.tab.c"
    break;

  case 28:
#line 109 "kapabison.y"
                             {printf("\t\"totalPages\"");}
#line 1899 "kapabison.tab.c"
    break;

  case 29:
#line 109 "kapabison.y"
                                                                 {printf(":");}
#line 1905 "kapabison.tab.c"
    break;

  case 30:
#line 109 "kapabison.y"
                                                                                    {printf("%s",yytext);}
#line 1911 "kapabison.tab.c"
    break;

  case 31:
#line 109 "kapabison.y"
                                                                                                                 {printf(",\n");}
#line 1917 "kapabison.tab.c"
    break;

  case 32:
#line 112 "kapabison.y"
                                 {printf("\t\"totalElements\"");}
#line 1923 "kapabison.tab.c"
    break;

  case 33:
#line 112 "kapabison.y"
                                                                        {printf(":");}
#line 1929 "kapabison.tab.c"
    break;

  case 34:
#line 112 "kapabison.y"
                                                                                           {printf("%s",yytext);}
#line 1935 "kapabison.tab.c"
    break;

  case 35:
#line 112 "kapabison.y"
                                                                                                                        {printf(",\n");}
#line 1941 "kapabison.tab.c"
    break;

  case 36:
#line 115 "kapabison.y"
                    {printf("\t\"last\"");}
#line 1947 "kapabison.tab.c"
    break;

  case 37:
#line 115 "kapabison.y"
                                                  {printf(":");}
#line 1953 "kapabison.tab.c"
    break;

  case 38:
#line 115 "kapabison.y"
                                                                         {printf("\%s",yytext);}
#line 1959 "kapabison.tab.c"
    break;

  case 39:
#line 115 "kapabison.y"
                                                                                                       {printf(",\n");}
#line 1965 "kapabison.tab.c"
    break;

  case 40:
#line 118 "kapabison.y"
                                       {printf("\t\"numberOfElements\"");}
#line 1971 "kapabison.tab.c"
    break;

  case 41:
#line 118 "kapabison.y"
                                                                                 {printf(":");}
#line 1977 "kapabison.tab.c"
    break;

  case 42:
#line 118 "kapabison.y"
                                                                                                    {printf("\%s",yytext);}
#line 1983 "kapabison.tab.c"
    break;

  case 43:
#line 118 "kapabison.y"
                                                                                                                                  {printf(",\n");}
#line 1989 "kapabison.tab.c"
    break;

  case 44:
#line 121 "kapabison.y"
               {printf("\t\"sort\"");}
#line 1995 "kapabison.tab.c"
    break;

  case 45:
#line 121 "kapabison.y"
                                             {printf(":");}
#line 2001 "kapabison.tab.c"
    break;

  case 46:
#line 121 "kapabison.y"
                                                                    {printf("[\n");}
#line 2007 "kapabison.tab.c"
    break;

  case 47:
#line 121 "kapabison.y"
                                                                                               {printf("{\n");}
#line 2013 "kapabison.tab.c"
    break;

  case 48:
#line 121 "kapabison.y"
                                                                                                                                                                                                                   {printf("\n}");}
#line 2019 "kapabison.tab.c"
    break;

  case 49:
#line 121 "kapabison.y"
                                                                                                                                                                                                                                            {printf("\n]");}
#line 2025 "kapabison.tab.c"
    break;

  case 50:
#line 121 "kapabison.y"
                                                                                                                                                                                                                                                                   {printf(",\n");}
#line 2031 "kapabison.tab.c"
    break;

  case 51:
#line 124 "kapabison.y"
                         {printf("\t\t\"direction\"");}
#line 2037 "kapabison.tab.c"
    break;

  case 52:
#line 124 "kapabison.y"
                                                              {printf(":");}
#line 2043 "kapabison.tab.c"
    break;

  case 53:
#line 124 "kapabison.y"
                                                                                    {printf("\%s",yytext);}
#line 2049 "kapabison.tab.c"
    break;

  case 54:
#line 124 "kapabison.y"
                                                                                                                  {printf(",\n");}
#line 2055 "kapabison.tab.c"
    break;

  case 55:
#line 127 "kapabison.y"
                       {printf("\t\t\"property\"");}
#line 2061 "kapabison.tab.c"
    break;

  case 56:
#line 127 "kapabison.y"
                                                           {printf(":");}
#line 2067 "kapabison.tab.c"
    break;

  case 57:
#line 127 "kapabison.y"
                                                                                 {printf("\%s",yytext);}
#line 2073 "kapabison.tab.c"
    break;

  case 58:
#line 127 "kapabison.y"
                                                                                                               {printf(",\n");}
#line 2079 "kapabison.tab.c"
    break;

  case 59:
#line 130 "kapabison.y"
                            {printf("\t\t\"ignoreCase\"");}
#line 2085 "kapabison.tab.c"
    break;

  case 60:
#line 130 "kapabison.y"
                                                                  {printf(":");}
#line 2091 "kapabison.tab.c"
    break;

  case 61:
#line 130 "kapabison.y"
                                                                                         {printf("\%s",yytext);}
#line 2097 "kapabison.tab.c"
    break;

  case 62:
#line 130 "kapabison.y"
                                                                                                                       {printf(",\n");}
#line 2103 "kapabison.tab.c"
    break;

  case 63:
#line 133 "kapabison.y"
                               {printf("\t\t\"nullHandling\"");}
#line 2109 "kapabison.tab.c"
    break;

  case 64:
#line 133 "kapabison.y"
                                                                       {printf(":");}
#line 2115 "kapabison.tab.c"
    break;

  case 65:
#line 133 "kapabison.y"
                                                                                             {printf("\%s",yytext);}
#line 2121 "kapabison.tab.c"
    break;

  case 66:
#line 133 "kapabison.y"
                                                                                                                           {printf(",\n");}
#line 2127 "kapabison.tab.c"
    break;

  case 67:
#line 136 "kapabison.y"
                           {printf("\t\t\"descending\"");}
#line 2133 "kapabison.tab.c"
    break;

  case 68:
#line 136 "kapabison.y"
                                                                 {printf(":");}
#line 2139 "kapabison.tab.c"
    break;

  case 69:
#line 136 "kapabison.y"
                                                                                        {printf("\%s",yytext);}
#line 2145 "kapabison.tab.c"
    break;

  case 70:
#line 136 "kapabison.y"
                                                                                                                      {printf(",\n");}
#line 2151 "kapabison.tab.c"
    break;

  case 71:
#line 139 "kapabison.y"
                         {printf("\t\t\"ascending\"");}
#line 2157 "kapabison.tab.c"
    break;

  case 72:
#line 139 "kapabison.y"
                                                              {printf(":");}
#line 2163 "kapabison.tab.c"
    break;

  case 73:
#line 139 "kapabison.y"
                                                                                     {printf("\%s",yytext);}
#line 2169 "kapabison.tab.c"
    break;

  case 74:
#line 142 "kapabison.y"
                 {printf("\t\"first\"");}
#line 2175 "kapabison.tab.c"
    break;

  case 75:
#line 142 "kapabison.y"
                                                {printf(":");}
#line 2181 "kapabison.tab.c"
    break;

  case 76:
#line 142 "kapabison.y"
                                                                       {printf("\%s",yytext);}
#line 2187 "kapabison.tab.c"
    break;

  case 77:
#line 142 "kapabison.y"
                                                                                                     {printf(",\n");}
#line 2193 "kapabison.tab.c"
    break;

  case 78:
#line 145 "kapabison.y"
               {printf("\t\"size\"");}
#line 2199 "kapabison.tab.c"
    break;

  case 79:
#line 145 "kapabison.y"
                                             {printf(":");}
#line 2205 "kapabison.tab.c"
    break;

  case 80:
#line 145 "kapabison.y"
                                                                {printf("\%s",yytext);}
#line 2211 "kapabison.tab.c"
    break;

  case 81:
#line 145 "kapabison.y"
                                                                                              {printf(",\n");}
#line 2217 "kapabison.tab.c"
    break;

  case 82:
#line 148 "kapabison.y"
                   {printf("\t\"number\"");}
#line 2223 "kapabison.tab.c"
    break;

  case 83:
#line 148 "kapabison.y"
                                                   {printf(":");}
#line 2229 "kapabison.tab.c"
    break;

  case 84:
#line 148 "kapabison.y"
                                                                      {printf("\%s",yytext);}
#line 2235 "kapabison.tab.c"
    break;

  case 85:
#line 151 "kapabison.y"
                                        {printf("\t\"winningNumbers\"");}
#line 2241 "kapabison.tab.c"
    break;

  case 86:
#line 151 "kapabison.y"
                                                                                {printf(":");}
#line 2247 "kapabison.tab.c"
    break;

  case 87:
#line 151 "kapabison.y"
                                                                                                         {printf(" {");}
#line 2253 "kapabison.tab.c"
    break;

  case 88:
#line 151 "kapabison.y"
                                                                                                                                                        {printf("\n\t\t}");}
#line 2259 "kapabison.tab.c"
    break;

  case 89:
#line 151 "kapabison.y"
                                                                                                                                                                                   {printf(",\n");}
#line 2265 "kapabison.tab.c"
    break;

  case 90:
#line 153 "kapabison.y"
                {printf("\n\t\t\t\"list\"");}
#line 2271 "kapabison.tab.c"
    break;

  case 91:
#line 153 "kapabison.y"
                                                    {printf(":");}
#line 2277 "kapabison.tab.c"
    break;

  case 92:
#line 153 "kapabison.y"
                                                                           {printf("[");}
#line 2283 "kapabison.tab.c"
    break;

  case 93:
#line 153 "kapabison.y"
                                                                                              {printf("\%s",yytext);}
#line 2289 "kapabison.tab.c"
    break;

  case 94:
#line 153 "kapabison.y"
                                                                                                                            {printf(",");}
#line 2295 "kapabison.tab.c"
    break;

  case 95:
#line 153 "kapabison.y"
                                                                                                                                               {printf("\%s",yytext);}
#line 2301 "kapabison.tab.c"
    break;

  case 96:
#line 153 "kapabison.y"
                                                                                                                                                                             {printf(",");}
#line 2307 "kapabison.tab.c"
    break;

  case 97:
#line 153 "kapabison.y"
                                                                                                                                                                                                {printf("\%s",yytext);}
#line 2313 "kapabison.tab.c"
    break;

  case 98:
#line 153 "kapabison.y"
                                                                                                                                                                                                                              {printf(",");}
#line 2319 "kapabison.tab.c"
    break;

  case 99:
#line 153 "kapabison.y"
                                                                                                                                                                                                                                                 {printf("\%s",yytext);}
#line 2325 "kapabison.tab.c"
    break;

  case 100:
#line 153 "kapabison.y"
                                                                                                                                                                                                                                                                               {printf(",");}
#line 2331 "kapabison.tab.c"
    break;

  case 101:
#line 153 "kapabison.y"
                                                                                                                                                                                                                                                                                                  {printf("\%s",yytext);}
#line 2337 "kapabison.tab.c"
    break;

  case 102:
#line 153 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                   {printf("]");}
#line 2343 "kapabison.tab.c"
    break;

  case 103:
#line 153 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                        {printf(",\n");}
#line 2349 "kapabison.tab.c"
    break;

  case 104:
#line 156 "kapabison.y"
                      {printf("\t\t\t\"bonus\"");}
#line 2355 "kapabison.tab.c"
    break;

  case 105:
#line 156 "kapabison.y"
                                                         {printf(": ");}
#line 2361 "kapabison.tab.c"
    break;

  case 106:
#line 156 "kapabison.y"
                                                                                 {printf("[");}
#line 2367 "kapabison.tab.c"
    break;

  case 107:
#line 156 "kapabison.y"
                                                                                                    {printf("\%s",yytext);}
#line 2373 "kapabison.tab.c"
    break;

  case 108:
#line 156 "kapabison.y"
                                                                                                                                    {printf("]\n");}
#line 2379 "kapabison.tab.c"
    break;

  case 109:
#line 159 "kapabison.y"
                     {printf("\t\"last\"");}
#line 2385 "kapabison.tab.c"
    break;

  case 110:
#line 159 "kapabison.y"
                                                   {printf(":");}
#line 2391 "kapabison.tab.c"
    break;

  case 111:
#line 159 "kapabison.y"
                                                                                 {printf("{\n");}
#line 2397 "kapabison.tab.c"
    break;

  case 112:
#line 159 "kapabison.y"
                                                                                                                                                                                                                                                                                       {printf("\n\t}");}
#line 2403 "kapabison.tab.c"
    break;

  case 113:
#line 159 "kapabison.y"
                                                                                                                                                                                                                                                                                                                {printf(",\n");}
#line 2409 "kapabison.tab.c"
    break;

  case 114:
#line 162 "kapabison.y"
                       {printf("\t\"active\"");}
#line 2415 "kapabison.tab.c"
    break;

  case 115:
#line 162 "kapabison.y"
                                                       {printf(":");}
#line 2421 "kapabison.tab.c"
    break;

  case 116:
#line 162 "kapabison.y"
                                                                                {printf("{\n");}
#line 2427 "kapabison.tab.c"
    break;

  case 117:
#line 162 "kapabison.y"
                                                                                                                                                                                                                                                                    {printf("\n\t}");}
#line 2433 "kapabison.tab.c"
    break;

  case 118:
#line 165 "kapabison.y"
                       {printf("\t\"gameId\"");}
#line 2439 "kapabison.tab.c"
    break;

  case 119:
#line 165 "kapabison.y"
                                                       {printf(":");}
#line 2445 "kapabison.tab.c"
    break;

  case 120:
#line 165 "kapabison.y"
                                                                          {printf("\%s",yytext);}
#line 2451 "kapabison.tab.c"
    break;

  case 121:
#line 165 "kapabison.y"
                                                                                                        {printf(",\n");}
#line 2457 "kapabison.tab.c"
    break;

  case 122:
#line 168 "kapabison.y"
                       {printf("\t\"drawId\"");}
#line 2463 "kapabison.tab.c"
    break;

  case 123:
#line 168 "kapabison.y"
                                                       {printf(":");}
#line 2469 "kapabison.tab.c"
    break;

  case 124:
#line 168 "kapabison.y"
                                                                          {printf("\%s",yytext);}
#line 2475 "kapabison.tab.c"
    break;

  case 125:
#line 168 "kapabison.y"
                                                                                                        {printf(",\n");}
#line 2481 "kapabison.tab.c"
    break;

  case 126:
#line 171 "kapabison.y"
                         {printf("\t\"drawTime\"");}
#line 2487 "kapabison.tab.c"
    break;

  case 127:
#line 171 "kapabison.y"
                                                           {printf(":");}
#line 2493 "kapabison.tab.c"
    break;

  case 128:
#line 171 "kapabison.y"
                                                                              {printf("\%s",yytext);}
#line 2499 "kapabison.tab.c"
    break;

  case 129:
#line 171 "kapabison.y"
                                                                                                            {printf(",\n");}
#line 2505 "kapabison.tab.c"
    break;

  case 130:
#line 173 "kapabison.y"
                       {printf("\t\"status\"");}
#line 2511 "kapabison.tab.c"
    break;

  case 131:
#line 173 "kapabison.y"
                                                       {printf(":");}
#line 2517 "kapabison.tab.c"
    break;

  case 132:
#line 173 "kapabison.y"
                                                                             {printf("\%s",yytext);}
#line 2523 "kapabison.tab.c"
    break;

  case 133:
#line 173 "kapabison.y"
                                                                                                           {printf(",\n");}
#line 2529 "kapabison.tab.c"
    break;

  case 134:
#line 175 "kapabison.y"
                       {printf("\t\"status\"");}
#line 2535 "kapabison.tab.c"
    break;

  case 135:
#line 175 "kapabison.y"
                                                       {printf(":");}
#line 2541 "kapabison.tab.c"
    break;

  case 136:
#line 175 "kapabison.y"
                                                                             {printf("\%s",yytext);}
#line 2547 "kapabison.tab.c"
    break;

  case 137:
#line 175 "kapabison.y"
                                                                                                           {printf(",\n");}
#line 2553 "kapabison.tab.c"
    break;

  case 138:
#line 178 "kapabison.y"
                          {printf("\t\"drawBreak\"");}
#line 2559 "kapabison.tab.c"
    break;

  case 139:
#line 178 "kapabison.y"
                                                             {printf(":");}
#line 2565 "kapabison.tab.c"
    break;

  case 140:
#line 179 "kapabison.y"
    {printf("\%s",yytext);}
#line 2571 "kapabison.tab.c"
    break;

  case 141:
#line 179 "kapabison.y"
                                  {printf(",\n");}
#line 2577 "kapabison.tab.c"
    break;

  case 142:
#line 182 "kapabison.y"
                           {printf("\t\"visualDraw\"");}
#line 2583 "kapabison.tab.c"
    break;

  case 143:
#line 182 "kapabison.y"
                                                               {printf(":");}
#line 2589 "kapabison.tab.c"
    break;

  case 144:
#line 182 "kapabison.y"
                                                                                  {printf("\%s",yytext);}
#line 2595 "kapabison.tab.c"
    break;

  case 145:
#line 182 "kapabison.y"
                                                                                                                {printf(",\n");}
#line 2601 "kapabison.tab.c"
    break;

  case 146:
#line 185 "kapabison.y"
                                    {printf("\t\"pricePoints\"");}
#line 2607 "kapabison.tab.c"
    break;

  case 147:
#line 185 "kapabison.y"
                                                                         {printf(":");}
#line 2613 "kapabison.tab.c"
    break;

  case 148:
#line 185 "kapabison.y"
                                                                                                  {printf("{");}
#line 2619 "kapabison.tab.c"
    break;

  case 149:
#line 185 "kapabison.y"
                                                                                                                                       {printf("\t\t }");}
#line 2625 "kapabison.tab.c"
    break;

  case 150:
#line 185 "kapabison.y"
                                                                                                                                                                 {printf(",\n");}
#line 2631 "kapabison.tab.c"
    break;

  case 151:
#line 188 "kapabison.y"
                       {printf("\n\t\t\t\"amount\"");}
#line 2637 "kapabison.tab.c"
    break;

  case 152:
#line 188 "kapabison.y"
                                                             {printf(":");}
#line 2643 "kapabison.tab.c"
    break;

  case 153:
#line 188 "kapabison.y"
                                                                                  {printf("\%s\n",yytext);}
#line 2649 "kapabison.tab.c"
    break;

  case 154:
#line 191 "kapabison.y"
                                       {printf("\t\"winningNumbers\"");}
#line 2655 "kapabison.tab.c"
    break;

  case 155:
#line 191 "kapabison.y"
                                                                               {printf(":");}
#line 2661 "kapabison.tab.c"
    break;

  case 156:
#line 191 "kapabison.y"
                                                                                                        {printf(" {");}
#line 2667 "kapabison.tab.c"
    break;

  case 157:
#line 191 "kapabison.y"
                                                                                                                                                     {printf("\n\t\t} ");}
#line 2673 "kapabison.tab.c"
    break;

  case 158:
#line 191 "kapabison.y"
                                                                                                                                                                                 {printf(",\n");}
#line 2679 "kapabison.tab.c"
    break;

  case 159:
#line 194 "kapabison.y"
               {printf("\n\t\t\"list\"");}
#line 2685 "kapabison.tab.c"
    break;

  case 160:
#line 194 "kapabison.y"
                                                 {printf(":");}
#line 2691 "kapabison.tab.c"
    break;

  case 161:
#line 194 "kapabison.y"
                                                                        {printf("[");}
#line 2697 "kapabison.tab.c"
    break;

  case 162:
#line 194 "kapabison.y"
                                                                                           {printf("\n\t\t\t\t\%s",yytext);}
#line 2703 "kapabison.tab.c"
    break;

  case 163:
#line 194 "kapabison.y"
                                                                                                                                   {printf(",");}
#line 2709 "kapabison.tab.c"
    break;

  case 164:
#line 194 "kapabison.y"
                                                                                                                                                      {printf("\n\t\t\t\t\%s",yytext);}
#line 2715 "kapabison.tab.c"
    break;

  case 165:
#line 194 "kapabison.y"
                                                                                                                                                                                              {printf(",");}
#line 2721 "kapabison.tab.c"
    break;

  case 166:
#line 194 "kapabison.y"
                                                                                                                                                                                                                 {printf("\n\t\t\t\t\%s",yytext);}
#line 2727 "kapabison.tab.c"
    break;

  case 167:
#line 194 "kapabison.y"
                                                                                                                                                                                                                                                         {printf(",");}
#line 2733 "kapabison.tab.c"
    break;

  case 168:
#line 194 "kapabison.y"
                                                                                                                                                                                                                                                                            {printf("\n\t\t\t\t\%s",yytext);}
#line 2739 "kapabison.tab.c"
    break;

  case 169:
#line 194 "kapabison.y"
                                                                                                                                                                                                                                                                                                                    {printf(",");}
#line 2745 "kapabison.tab.c"
    break;

  case 170:
#line 194 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                       {printf("\n\t\t\t\t\%s",yytext);}
#line 2751 "kapabison.tab.c"
    break;

  case 171:
#line 194 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                                                  {printf("\n\t\t\t]");}
#line 2757 "kapabison.tab.c"
    break;

  case 172:
#line 194 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                                                                               {printf(",\n");}
#line 2763 "kapabison.tab.c"
    break;

  case 173:
#line 197 "kapabison.y"
                      {printf("\t\t \"bonus\"");}
#line 2769 "kapabison.tab.c"
    break;

  case 174:
#line 197 "kapabison.y"
                                                        {printf(": ");}
#line 2775 "kapabison.tab.c"
    break;

  case 175:
#line 197 "kapabison.y"
                                                                                {printf("[\n");}
#line 2781 "kapabison.tab.c"
    break;

  case 176:
#line 197 "kapabison.y"
                                                                                                     {printf("\t\t\%s \n",yytext);}
#line 2787 "kapabison.tab.c"
    break;

  case 177:
#line 197 "kapabison.y"
                                                                                                                                            {printf("\t\t]\n");}
#line 2793 "kapabison.tab.c"
    break;

  case 178:
#line 200 "kapabison.y"
                                       {printf("\t\"prizeCategories\"");}
#line 2799 "kapabison.tab.c"
    break;

  case 179:
#line 200 "kapabison.y"
                                                                                {printf(":");}
#line 2805 "kapabison.tab.c"
    break;

  case 180:
#line 200 "kapabison.y"
                                                                                                       {printf("[\n");}
#line 2811 "kapabison.tab.c"
    break;

  case 181:
#line 200 "kapabison.y"
                                                                                                                                  {printf("\t\t{ \n");}
#line 2817 "kapabison.tab.c"
    break;

  case 182:
#line 200 "kapabison.y"
                                                                                                                                                                                                                                                        {printf("\t\t\"gameType\"");}
#line 2823 "kapabison.tab.c"
    break;

  case 183:
#line 200 "kapabison.y"
                                                                                                                                                                                                                                                                                            {printf(":");}
#line 2829 "kapabison.tab.c"
    break;

  case 184:
#line 200 "kapabison.y"
                                                                                                                                                                                                                                                                                                                  {printf("\%s",yytext);}
#line 2835 "kapabison.tab.c"
    break;

  case 185:
#line 200 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                {printf(",\n");}
#line 2841 "kapabison.tab.c"
    break;

  case 186:
#line 200 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                                                                  {printf("\n\t\t\t}");}
#line 2847 "kapabison.tab.c"
    break;

  case 187:
#line 200 "kapabison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                               {printf(",\n");}
#line 2853 "kapabison.tab.c"
    break;

  case 188:
#line 204 "kapabison.y"
                                          {printf(",\n");}
#line 2859 "kapabison.tab.c"
    break;

  case 189:
#line 204 "kapabison.y"
                                                                          {printf("\n");}
#line 2865 "kapabison.tab.c"
    break;

  case 190:
#line 204 "kapabison.y"
                                                                                                         {printf(",\n");}
#line 2871 "kapabison.tab.c"
    break;

  case 191:
#line 204 "kapabison.y"
                                                                                                                                         {printf(",\n");}
#line 2877 "kapabison.tab.c"
    break;

  case 192:
#line 204 "kapabison.y"
                                                                                                                                                                         {printf(",\n");}
#line 2883 "kapabison.tab.c"
    break;

  case 193:
#line 204 "kapabison.y"
                                                                                                                                                                                                         {printf(",\n");}
#line 2889 "kapabison.tab.c"
    break;

  case 194:
#line 204 "kapabison.y"
                                                                                                                                                                                                                                           {printf("\n\t\t]");}
#line 2895 "kapabison.tab.c"
    break;

  case 195:
#line 204 "kapabison.y"
                                                                                                                                                                                                                                                                      {printf(",\n");}
#line 2901 "kapabison.tab.c"
    break;

  case 196:
#line 207 "kapabison.y"
                                  {printf("\t\t{ \n");}
#line 2907 "kapabison.tab.c"
    break;

  case 197:
#line 207 "kapabison.y"
                                                                                                                                                                      {printf("\n\t\t\t}");}
#line 2913 "kapabison.tab.c"
    break;

  case 198:
#line 210 "kapabison.y"
           {printf("\t\t\"id\"");}
#line 2919 "kapabison.tab.c"
    break;

  case 199:
#line 210 "kapabison.y"
                                         {printf(":");}
#line 2925 "kapabison.tab.c"
    break;

  case 200:
#line 210 "kapabison.y"
                                                            {printf("\%s",yytext);}
#line 2931 "kapabison.tab.c"
    break;

  case 201:
#line 210 "kapabison.y"
                                                                                          {printf(",\n");}
#line 2937 "kapabison.tab.c"
    break;

  case 202:
#line 213 "kapabison.y"
                         {printf("\t\t\"divident\"");}
#line 2943 "kapabison.tab.c"
    break;

  case 203:
#line 213 "kapabison.y"
                                                             {printf(":");}
#line 2949 "kapabison.tab.c"
    break;

  case 204:
#line 213 "kapabison.y"
                                                                                  {printf("\%s",yytext);}
#line 2955 "kapabison.tab.c"
    break;

  case 205:
#line 213 "kapabison.y"
                                                                                                                {printf(",\n");}
#line 2961 "kapabison.tab.c"
    break;

  case 206:
#line 216 "kapabison.y"
                        {printf("\t\t\"winners\"");}
#line 2967 "kapabison.tab.c"
    break;

  case 207:
#line 216 "kapabison.y"
                                                           {printf(":");}
#line 2973 "kapabison.tab.c"
    break;

  case 208:
#line 216 "kapabison.y"
                                                                              {printf("\%s",yytext);}
#line 2979 "kapabison.tab.c"
    break;

  case 209:
#line 216 "kapabison.y"
                                                                                                            {printf(",\n");}
#line 2985 "kapabison.tab.c"
    break;

  case 210:
#line 219 "kapabison.y"
                                    {printf("\t\t\"distributed\"");}
#line 2991 "kapabison.tab.c"
    break;

  case 211:
#line 219 "kapabison.y"
                                                                           {printf(":");}
#line 2997 "kapabison.tab.c"
    break;

  case 212:
#line 219 "kapabison.y"
                                                                                                {printf("\%s",yytext);}
#line 3003 "kapabison.tab.c"
    break;

  case 213:
#line 219 "kapabison.y"
                                                                                                                              {printf(",\n");}
#line 3009 "kapabison.tab.c"
    break;

  case 214:
#line 223 "kapabison.y"
                        {printf("\t\t\"jackpot\"");}
#line 3015 "kapabison.tab.c"
    break;

  case 215:
#line 223 "kapabison.y"
                                                           {printf(":");}
#line 3021 "kapabison.tab.c"
    break;

  case 216:
#line 223 "kapabison.y"
                                                                                {printf("\%s",yytext);}
#line 3027 "kapabison.tab.c"
    break;

  case 217:
#line 223 "kapabison.y"
                                                                                                              {printf(",\n");}
#line 3033 "kapabison.tab.c"
    break;

  case 218:
#line 226 "kapabison.y"
                      {printf("\t\t\"fixed\"");}
#line 3039 "kapabison.tab.c"
    break;

  case 219:
#line 226 "kapabison.y"
                                                       {printf(":");}
#line 3045 "kapabison.tab.c"
    break;

  case 220:
#line 226 "kapabison.y"
                                                                            {printf("%s",yytext);}
#line 3051 "kapabison.tab.c"
    break;

  case 221:
#line 226 "kapabison.y"
                                                                                                         {printf(",\n");}
#line 3057 "kapabison.tab.c"
    break;

  case 222:
#line 229 "kapabison.y"
                                     {printf("\t\t\"categoryType\"");}
#line 3063 "kapabison.tab.c"
    break;

  case 223:
#line 229 "kapabison.y"
                                                                             {printf(":");}
#line 3069 "kapabison.tab.c"
    break;

  case 224:
#line 229 "kapabison.y"
                                                                                                {printf("\%s",yytext);}
#line 3075 "kapabison.tab.c"
    break;

  case 225:
#line 229 "kapabison.y"
                                                                                                                              {printf(",\n");}
#line 3081 "kapabison.tab.c"
    break;

  case 226:
#line 232 "kapabison.y"
                         {printf("\t\t\"gameType\"");}
#line 3087 "kapabison.tab.c"
    break;

  case 227:
#line 232 "kapabison.y"
                                                             {printf(":");}
#line 3093 "kapabison.tab.c"
    break;

  case 228:
#line 232 "kapabison.y"
                                                                                   {printf("\%s",yytext);}
#line 3099 "kapabison.tab.c"
    break;

  case 229:
#line 236 "kapabison.y"
                                           {printf("\t\t\"minimumDistributed\"");}
#line 3105 "kapabison.tab.c"
    break;

  case 230:
#line 236 "kapabison.y"
                                                                                         {printf(":");}
#line 3111 "kapabison.tab.c"
    break;

  case 231:
#line 236 "kapabison.y"
                                                                                                              {printf("\%s",yytext);}
#line 3117 "kapabison.tab.c"
    break;

  case 232:
#line 239 "kapabison.y"
                                        {printf("\t\"wagerStatistics\"");}
#line 3123 "kapabison.tab.c"
    break;

  case 233:
#line 239 "kapabison.y"
                                                                                 {printf(":");}
#line 3129 "kapabison.tab.c"
    break;

  case 234:
#line 239 "kapabison.y"
                                                                                                          {printf("{ \n");}
#line 3135 "kapabison.tab.c"
    break;

  case 235:
#line 239 "kapabison.y"
                                                                                                                                                                       {printf("\t}");}
#line 3141 "kapabison.tab.c"
    break;

  case 236:
#line 242 "kapabison.y"
                        {printf("\t\t\"columns\"");}
#line 3147 "kapabison.tab.c"
    break;

  case 237:
#line 242 "kapabison.y"
                                                           {printf(":");}
#line 3153 "kapabison.tab.c"
    break;

  case 238:
#line 242 "kapabison.y"
                                                                              {printf("%s",yytext);}
#line 3159 "kapabison.tab.c"
    break;

  case 239:
#line 242 "kapabison.y"
                                                                                                           {printf(",\n");}
#line 3165 "kapabison.tab.c"
    break;

  case 240:
#line 245 "kapabison.y"
                       {printf("\t\t\"wagers\"");}
#line 3171 "kapabison.tab.c"
    break;

  case 241:
#line 245 "kapabison.y"
                                                         {printf(":");}
#line 3177 "kapabison.tab.c"
    break;

  case 242:
#line 245 "kapabison.y"
                                                                            {printf("%s",yytext);}
#line 3183 "kapabison.tab.c"
    break;

  case 243:
#line 245 "kapabison.y"
                                                                                                         {printf(",\n");}
#line 3189 "kapabison.tab.c"
    break;

  case 244:
#line 248 "kapabison.y"
                      {printf("\t\t\"addOn\"");}
#line 3195 "kapabison.tab.c"
    break;

  case 245:
#line 248 "kapabison.y"
                                                       {printf(":");}
#line 3201 "kapabison.tab.c"
    break;

  case 246:
#line 248 "kapabison.y"
                                                                                {printf("[");}
#line 3207 "kapabison.tab.c"
    break;

  case 247:
#line 248 "kapabison.y"
                                                                                                       {printf("]\n");}
#line 3213 "kapabison.tab.c"
    break;


#line 3217 "kapabison.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 252 "kapabison.y"



int main(int argc, char *argv[]) {if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;} } 
			  yyparse();
	if(error_count > 0){
        printf("Syntax Analysis failed due to %d errors\n", error_count);
    }else{
        printf("Syntax Analysis completed successfully.\n");
    }
    return 0;
}


void yyerror(const char* message)
{
	error_count++;
	if(flag_err_type == 0)
	{printf("\n Error sto line %d pou prokaleitai apo %s : %s\n", line_num ,yytext,message);
	}
	else if(flag_err_type == 1){*str_buf_ptr = '\0';
	printf(" error sto  line %d konta se \"%s\": %s\n", line_num, str_buf, message);}
}
