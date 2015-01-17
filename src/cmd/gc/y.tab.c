/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LLITERAL = 258,
     LASOP = 259,
     LCOLAS = 260,
     LBREAK = 261,
     LCASE = 262,
     LCHAN = 263,
     LCONST = 264,
     LCONTINUE = 265,
     LDOSELECT = 266,
     LDDD = 267,
     LDEFAULT = 268,
     LDEFER = 269,
     LELSE = 270,
     LFALL = 271,
     LFOR = 272,
     LFUNC = 273,
     LGO = 274,
     LGOTO = 275,
     LIF = 276,
     LIMPORT = 277,
     LINTERFACE = 278,
     LMAP = 279,
     LNAME = 280,
     LPACKAGE = 281,
     LRANGE = 282,
     LRETURN = 283,
     LSELECT = 284,
     LSTRUCT = 285,
     LSWITCH = 286,
     LTYPE = 287,
     LVAR = 288,
     LANDAND = 289,
     LANDNOT = 290,
     LBODY = 291,
     LCOMM = 292,
     LDEC = 293,
     LEQ = 294,
     LGE = 295,
     LGT = 296,
     LIGNORE = 297,
     LINC = 298,
     LLE = 299,
     LLSH = 300,
     LLT = 301,
     LNE = 302,
     LOROR = 303,
     LRSH = 304,
     NotPackage = 305,
     NotParen = 306,
     PreferToRightParen = 307
   };
#endif
/* Tokens.  */
#define LLITERAL 258
#define LASOP 259
#define LCOLAS 260
#define LBREAK 261
#define LCASE 262
#define LCHAN 263
#define LCONST 264
#define LCONTINUE 265
#define LDOSELECT 266
#define LDDD 267
#define LDEFAULT 268
#define LDEFER 269
#define LELSE 270
#define LFALL 271
#define LFOR 272
#define LFUNC 273
#define LGO 274
#define LGOTO 275
#define LIF 276
#define LIMPORT 277
#define LINTERFACE 278
#define LMAP 279
#define LNAME 280
#define LPACKAGE 281
#define LRANGE 282
#define LRETURN 283
#define LSELECT 284
#define LSTRUCT 285
#define LSWITCH 286
#define LTYPE 287
#define LVAR 288
#define LANDAND 289
#define LANDNOT 290
#define LBODY 291
#define LCOMM 292
#define LDEC 293
#define LEQ 294
#define LGE 295
#define LGT 296
#define LIGNORE 297
#define LINC 298
#define LLE 299
#define LLSH 300
#define LLT 301
#define LNE 302
#define LOROR 303
#define LRSH 304
#define NotPackage 305
#define NotParen 306
#define PreferToRightParen 307




/* Copy the first part of user declarations.  */
#line 20 "go.y"

#include <u.h>
#include <stdio.h>	/* if we don't, bison will, and go.h re-#defines getc */
#include <libc.h>
#include "go.h"

static void fixlbrace(int);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 28 "go.y"
{
	Node*		node;
	NodeList*		list;
	Type*		type;
	Sym*		sym;
	struct	Val	val;
	int		i;
}
/* Line 193 of yacc.c.  */
#line 218 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 231 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  146
/* YYNRULES -- Number of rules.  */
#define YYNRULES  358
/* YYNRULES -- Number of states.  */
#define YYNSTATES  682

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,    65,    56,    57,     2,
      60,    61,    54,    50,    76,    51,    64,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    63,
       2,    66,     2,    74,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    52,    69,    71,     2,     2,     2,
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
      45,    46,    47,    48,    49,    58,    59,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    14,    18,    19,    23,
      26,    32,    36,    40,    43,    45,    49,    51,    54,    57,
      62,    63,    65,    66,    71,    72,    74,    76,    78,    80,
      83,    89,    93,    96,   102,   110,   114,   117,   123,   127,
     129,   132,   137,   141,   146,   150,   152,   155,   157,   159,
     162,   164,   168,   172,   176,   179,   182,   186,   192,   198,
     201,   202,   207,   208,   212,   213,   216,   217,   222,   227,
     232,   235,   241,   243,   245,   248,   249,   253,   255,   259,
     260,   261,   262,   271,   272,   278,   279,   282,   283,   286,
     287,   288,   296,   297,   303,   309,   311,   312,   313,   321,
     323,   327,   331,   335,   339,   343,   347,   351,   355,   359,
     363,   367,   371,   375,   379,   383,   387,   391,   395,   399,
     403,   405,   408,   411,   414,   417,   420,   423,   426,   429,
     433,   439,   446,   448,   450,   454,   460,   466,   471,   478,
     487,   489,   495,   501,   507,   515,   517,   518,   522,   524,
     529,   531,   536,   538,   542,   544,   546,   548,   550,   552,
     554,   556,   557,   559,   561,   563,   565,   570,   575,   577,
     579,   581,   584,   586,   588,   590,   592,   594,   598,   600,
     602,   604,   607,   609,   611,   613,   615,   619,   621,   623,
     625,   627,   629,   631,   633,   635,   637,   641,   646,   651,
     654,   658,   664,   666,   668,   671,   675,   681,   685,   691,
     695,   699,   705,   714,   720,   729,   735,   736,   740,   741,
     743,   747,   749,   754,   757,   758,   762,   764,   768,   770,
     774,   776,   780,   782,   786,   788,   792,   796,   799,   804,
     808,   814,   820,   822,   826,   828,   831,   833,   837,   842,
     844,   847,   850,   852,   854,   858,   859,   862,   863,   865,
     867,   869,   871,   873,   875,   877,   879,   881,   883,   884,
     889,   891,   894,   897,   900,   903,   906,   909,   911,   915,
     917,   921,   923,   927,   929,   933,   935,   939,   941,   943,
     947,   951,   952,   955,   956,   958,   959,   961,   962,   964,
     965,   967,   968,   970,   971,   973,   974,   976,   977,   979,
     980,   982,   987,   992,   998,  1005,  1010,  1015,  1017,  1019,
    1021,  1023,  1025,  1027,  1029,  1031,  1033,  1037,  1042,  1048,
    1053,  1058,  1061,  1064,  1069,  1073,  1077,  1083,  1087,  1092,
    1096,  1102,  1104,  1105,  1107,  1111,  1113,  1115,  1118,  1120,
    1122,  1128,  1129,  1132,  1134,  1138,  1140,  1144,  1146
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      78,     0,    -1,    80,    79,    82,   171,    -1,    -1,    26,
     146,    63,    -1,    -1,    81,    87,    89,    -1,    -1,    82,
      83,    63,    -1,    22,    84,    -1,    22,    60,    85,   195,
      61,    -1,    22,    60,    61,    -1,    86,    87,    89,    -1,
      86,    89,    -1,    84,    -1,    85,    63,    84,    -1,     3,
      -1,   146,     3,    -1,    64,     3,    -1,    26,    25,    88,
      63,    -1,    -1,    25,    -1,    -1,    90,   219,    65,    65,
      -1,    -1,    92,    -1,   163,    -1,   186,    -1,     1,    -1,
      33,    94,    -1,    33,    60,   172,   195,    61,    -1,    33,
      60,    61,    -1,    93,    95,    -1,    93,    60,    95,   195,
      61,    -1,    93,    60,    95,    63,   173,   195,    61,    -1,
      93,    60,    61,    -1,    32,    98,    -1,    32,    60,   174,
     195,    61,    -1,    32,    60,    61,    -1,     9,    -1,   190,
     151,    -1,   190,   151,    66,   191,    -1,   190,    66,   191,
      -1,   190,   151,    66,   191,    -1,   190,    66,   191,    -1,
      95,    -1,   190,   151,    -1,   190,    -1,   146,    -1,    97,
     151,    -1,   131,    -1,   131,     4,   131,    -1,   191,    66,
     191,    -1,   191,     5,   191,    -1,   131,    43,    -1,   131,
      38,    -1,     7,   192,    67,    -1,     7,   192,    66,   131,
      67,    -1,     7,   192,     5,   131,    67,    -1,    13,    67,
      -1,    -1,    68,   102,   188,    69,    -1,    -1,   100,   104,
     188,    -1,    -1,   105,   103,    -1,    -1,    36,   107,   188,
      69,    -1,   191,    66,    27,   131,    -1,   191,     5,    27,
     131,    -1,    27,   131,    -1,   199,    63,   199,    63,   199,
      -1,   199,    -1,   108,    -1,   109,   106,    -1,    -1,    17,
     112,   110,    -1,   199,    -1,   199,    63,   199,    -1,    -1,
      -1,    -1,    21,   115,   113,   116,   106,   117,   120,   121,
      -1,    -1,    15,    21,   119,   113,   106,    -1,    -1,   120,
     118,    -1,    -1,    15,   101,    -1,    -1,    -1,    31,   123,
     113,   124,    36,   105,    69,    -1,    -1,    29,   126,    36,
     105,    69,    -1,   199,    63,   199,    63,   199,    -1,   199,
      -1,    -1,    -1,    11,   129,   127,   130,    36,   105,    69,
      -1,   132,    -1,   131,    48,   131,    -1,   131,    34,   131,
      -1,   131,    39,   131,    -1,   131,    47,   131,    -1,   131,
      46,   131,    -1,   131,    44,   131,    -1,   131,    40,   131,
      -1,   131,    41,   131,    -1,   131,    50,   131,    -1,   131,
      51,   131,    -1,   131,    52,   131,    -1,   131,    53,   131,
      -1,   131,    54,   131,    -1,   131,    55,   131,    -1,   131,
      56,   131,    -1,   131,    57,   131,    -1,   131,    35,   131,
      -1,   131,    45,   131,    -1,   131,    49,   131,    -1,   131,
      37,   131,    -1,   139,    -1,    54,   132,    -1,    57,   132,
      -1,    50,   132,    -1,    51,   132,    -1,    70,   132,    -1,
      71,   132,    -1,    53,   132,    -1,    37,   132,    -1,   139,
      60,    61,    -1,   139,    60,   192,   196,    61,    -1,   139,
      60,   192,    12,   196,    61,    -1,     3,    -1,   148,    -1,
     139,    64,   146,    -1,   139,    64,    60,   140,    61,    -1,
     139,    64,    60,    32,    61,    -1,   139,    72,   131,    73,
      -1,   139,    72,   197,    67,   197,    73,    -1,   139,    72,
     197,    67,   197,    67,   197,    73,    -1,   133,    -1,   154,
      60,   131,   196,    61,    -1,   155,   142,   135,   194,    69,
      -1,   134,    68,   135,   194,    69,    -1,    60,   140,    61,
      68,   135,   194,    69,    -1,   170,    -1,    -1,   131,    67,
     138,    -1,   131,    -1,    68,   135,   194,    69,    -1,   131,
      -1,    68,   135,   194,    69,    -1,   134,    -1,    60,   140,
      61,    -1,   131,    -1,   152,    -1,   151,    -1,    36,    -1,
      68,    -1,   146,    -1,   146,    -1,    -1,   143,    -1,    25,
      -1,   147,    -1,    74,    -1,    75,     3,    64,    25,    -1,
      75,     3,    64,    74,    -1,   146,    -1,   143,    -1,    12,
      -1,    12,   151,    -1,   160,    -1,   166,    -1,   158,    -1,
     159,    -1,   157,    -1,    60,   151,    61,    -1,   160,    -1,
     166,    -1,   158,    -1,    54,   152,    -1,   166,    -1,   158,
      -1,   159,    -1,   157,    -1,    60,   151,    61,    -1,   166,
      -1,   158,    -1,   158,    -1,   160,    -1,   166,    -1,   158,
      -1,   159,    -1,   157,    -1,   148,    -1,   148,    64,   146,
      -1,    72,   197,    73,   151,    -1,    72,    12,    73,   151,
      -1,     8,   153,    -1,     8,    37,   151,    -1,    24,    72,
     151,    73,   151,    -1,   161,    -1,   162,    -1,    54,   151,
      -1,    37,     8,   151,    -1,    30,   142,   175,   195,    69,
      -1,    30,   142,    69,    -1,    23,   142,   176,   195,    69,
      -1,    23,   142,    69,    -1,    18,   164,   167,    -1,   146,
      60,   184,    61,   168,    -1,    60,   184,    61,   146,    60,
     184,    61,   168,    -1,   205,    60,   200,    61,   215,    -1,
      60,   220,    61,   146,    60,   200,    61,   215,    -1,    18,
      60,   184,    61,   168,    -1,    -1,    68,   188,    69,    -1,
      -1,   156,    -1,    60,   184,    61,    -1,   166,    -1,   169,
     142,   188,    69,    -1,   169,     1,    -1,    -1,   171,    91,
      63,    -1,    94,    -1,   172,    63,    94,    -1,    96,    -1,
     173,    63,    96,    -1,    98,    -1,   174,    63,    98,    -1,
     177,    -1,   175,    63,   177,    -1,   180,    -1,   176,    63,
     180,    -1,   189,   151,   203,    -1,   179,   203,    -1,    60,
     179,    61,   203,    -1,    54,   179,   203,    -1,    60,    54,
     179,    61,   203,    -1,    54,    60,   179,    61,   203,    -1,
      25,    -1,    25,    64,   146,    -1,   178,    -1,   143,   181,
      -1,   178,    -1,    60,   178,    61,    -1,    60,   184,    61,
     168,    -1,   141,    -1,   146,   141,    -1,   146,   150,    -1,
     150,    -1,   182,    -1,   183,    76,   182,    -1,    -1,   183,
     196,    -1,    -1,   101,    -1,    92,    -1,   186,    -1,     1,
      -1,    99,    -1,   111,    -1,   122,    -1,   125,    -1,   128,
      -1,   114,    -1,    -1,   149,    67,   187,   185,    -1,    16,
      -1,     6,   145,    -1,    10,   145,    -1,    19,   133,    -1,
      14,   133,    -1,    20,   143,    -1,    28,   198,    -1,   185,
      -1,   188,    63,   185,    -1,   143,    -1,   189,    76,   143,
      -1,   144,    -1,   190,    76,   144,    -1,   131,    -1,   191,
      76,   131,    -1,   140,    -1,   192,    76,   140,    -1,   136,
      -1,   137,    -1,   193,    76,   136,    -1,   193,    76,   137,
      -1,    -1,   193,   196,    -1,    -1,    63,    -1,    -1,    76,
      -1,    -1,   131,    -1,    -1,   191,    -1,    -1,    99,    -1,
      -1,   220,    -1,    -1,   221,    -1,    -1,   222,    -1,    -1,
       3,    -1,    22,    25,     3,    63,    -1,    33,   205,   207,
      63,    -1,     9,   205,    66,   218,    63,    -1,     9,   205,
     207,    66,   218,    63,    -1,    32,   206,   207,    63,    -1,
      18,   165,   167,    63,    -1,   147,    -1,   205,    -1,   209,
      -1,   210,    -1,   211,    -1,   209,    -1,   211,    -1,   147,
      -1,    25,    -1,    72,    73,   207,    -1,    72,     3,    73,
     207,    -1,    24,    72,   207,    73,   207,    -1,    30,    68,
     201,    69,    -1,    23,    68,   202,    69,    -1,    54,   207,
      -1,     8,   208,    -1,     8,    60,   210,    61,    -1,     8,
      37,   207,    -1,    37,     8,   207,    -1,    18,    60,   200,
      61,   215,    -1,   146,   207,   203,    -1,   146,    12,   207,
     203,    -1,   146,   207,   203,    -1,   146,    60,   200,    61,
     215,    -1,   207,    -1,    -1,   216,    -1,    60,   200,    61,
      -1,   207,    -1,     3,    -1,    51,     3,    -1,   146,    -1,
     217,    -1,    60,   217,    50,   217,    61,    -1,    -1,   219,
     204,    -1,   212,    -1,   220,    76,   212,    -1,   213,    -1,
     221,    63,   213,    -1,   214,    -1,   222,    63,   214,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   133,   139,   150,   150,   165,   166,   169,
     170,   171,   174,   211,   222,   223,   226,   233,   240,   249,
     263,   264,   271,   271,   284,   288,   289,   293,   298,   304,
     308,   312,   316,   322,   328,   334,   339,   343,   347,   353,
     359,   363,   367,   373,   377,   383,   384,   388,   394,   403,
     409,   427,   432,   444,   460,   466,   474,   494,   512,   521,
     540,   539,   554,   553,   585,   588,   595,   594,   605,   611,
     618,   625,   636,   642,   645,   653,   652,   663,   669,   681,
     685,   690,   680,   711,   710,   723,   726,   732,   735,   747,
     751,   746,   769,   768,   781,   792,   801,   806,   800,   829,
     830,   834,   838,   842,   846,   850,   854,   858,   862,   866,
     870,   874,   878,   882,   886,   890,   894,   898,   902,   907,
     913,   914,   918,   929,   933,   937,   941,   946,   950,   960,
     964,   969,   977,   981,   982,   993,   997,  1001,  1005,  1009,
    1017,  1018,  1024,  1031,  1037,  1044,  1047,  1054,  1060,  1077,
    1084,  1085,  1092,  1093,  1112,  1113,  1116,  1119,  1123,  1134,
    1143,  1149,  1152,  1155,  1162,  1163,  1169,  1182,  1197,  1205,
    1217,  1222,  1228,  1229,  1230,  1231,  1232,  1233,  1239,  1240,
    1241,  1242,  1248,  1249,  1250,  1251,  1252,  1258,  1259,  1262,
    1265,  1266,  1267,  1268,  1269,  1272,  1273,  1286,  1290,  1295,
    1300,  1305,  1309,  1310,  1313,  1319,  1326,  1332,  1339,  1345,
    1356,  1371,  1400,  1438,  1463,  1481,  1490,  1493,  1501,  1505,
    1509,  1516,  1522,  1527,  1539,  1542,  1553,  1554,  1560,  1561,
    1567,  1571,  1577,  1578,  1584,  1588,  1594,  1617,  1622,  1628,
    1634,  1641,  1650,  1659,  1674,  1680,  1685,  1689,  1696,  1709,
    1710,  1716,  1722,  1725,  1729,  1735,  1738,  1747,  1750,  1751,
    1755,  1756,  1762,  1763,  1764,  1765,  1766,  1767,  1769,  1768,
    1783,  1789,  1793,  1797,  1801,  1805,  1810,  1829,  1835,  1843,
    1847,  1853,  1857,  1863,  1867,  1873,  1877,  1886,  1890,  1894,
    1898,  1904,  1907,  1915,  1916,  1918,  1919,  1922,  1925,  1928,
    1931,  1934,  1937,  1940,  1943,  1946,  1949,  1952,  1955,  1958,
    1961,  1967,  1971,  1975,  1979,  1983,  1987,  2007,  2014,  2025,
    2026,  2027,  2030,  2031,  2034,  2038,  2048,  2052,  2056,  2060,
    2064,  2068,  2072,  2078,  2084,  2092,  2100,  2106,  2113,  2129,
    2151,  2155,  2161,  2164,  2167,  2171,  2181,  2185,  2204,  2212,
    2213,  2225,  2226,  2229,  2233,  2239,  2243,  2249,  2253
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
const char *yytname[] =
{
  "$end", "error", "$undefined", "LLITERAL", "LASOP", "LCOLAS", "LBREAK",
  "LCASE", "LCHAN", "LCONST", "LCONTINUE", "LDOSELECT", "LDDD", "LDEFAULT",
  "LDEFER", "LELSE", "LFALL", "LFOR", "LFUNC", "LGO", "LGOTO", "LIF",
  "LIMPORT", "LINTERFACE", "LMAP", "LNAME", "LPACKAGE", "LRANGE",
  "LRETURN", "LSELECT", "LSTRUCT", "LSWITCH", "LTYPE", "LVAR", "LANDAND",
  "LANDNOT", "LBODY", "LCOMM", "LDEC", "LEQ", "LGE", "LGT", "LIGNORE",
  "LINC", "LLE", "LLSH", "LLT", "LNE", "LOROR", "LRSH", "'+'", "'-'",
  "'|'", "'^'", "'*'", "'/'", "'%'", "'&'", "NotPackage", "NotParen",
  "'('", "')'", "PreferToRightParen", "';'", "'.'", "'$'", "'='", "':'",
  "'{'", "'}'", "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept",
  "file", "package", "loadsys", "@1", "imports", "import", "import_stmt",
  "import_stmt_list", "import_here", "import_package", "import_safety",
  "import_there", "@2", "xdcl", "common_dcl", "lconst", "vardcl",
  "constdcl", "constdcl1", "typedclname", "typedcl", "simple_stmt", "case",
  "compound_stmt", "@3", "caseblock", "@4", "caseblock_list", "loop_body",
  "@5", "range_stmt", "for_header", "for_body", "for_stmt", "@6",
  "if_header", "if_stmt", "@7", "@8", "@9", "elseif", "@10", "elseif_list",
  "else", "switch_stmt", "@11", "@12", "select_stmt", "@13",
  "doselect_hdr", "doselect_stmt", "@14", "@15", "expr", "uexpr",
  "pseudocall", "pexpr_no_paren", "start_complit", "keyval",
  "bare_complitexpr", "complitexpr", "pexpr", "expr_or_type",
  "name_or_type", "lbrace", "new_name", "dcl_name", "onew_name", "sym",
  "hidden_importsym", "name", "labelname", "dotdotdot", "ntype",
  "non_expr_type", "non_recvchantype", "convtype", "comptype",
  "fnret_type", "dotname", "othertype", "ptrtype", "recvchantype",
  "structtype", "interfacetype", "xfndcl", "fndcl", "hidden_fndcl",
  "fntype", "fnbody", "fnres", "fnlitdcl", "fnliteral", "xdcl_list",
  "vardcl_list", "constdcl_list", "typedcl_list", "structdcl_list",
  "interfacedcl_list", "structdcl", "packname", "embed", "interfacedcl",
  "indcl", "arg_type", "arg_type_list", "oarg_type_list_ocomma", "stmt",
  "non_dcl_stmt", "@16", "stmt_list", "new_name_list", "dcl_name_list",
  "expr_list", "expr_or_type_list", "keyval_list", "braced_keyval_list",
  "osemi", "ocomma", "oexpr", "oexpr_list", "osimple_stmt",
  "ohidden_funarg_list", "ohidden_structdcl_list",
  "ohidden_interfacedcl_list", "oliteral", "hidden_import",
  "hidden_pkg_importsym", "hidden_pkgtype", "hidden_type",
  "hidden_type_non_recv_chan", "hidden_type_misc", "hidden_type_recv_chan",
  "hidden_type_func", "hidden_funarg", "hidden_structdcl",
  "hidden_interfacedcl", "ohidden_funres", "hidden_funres",
  "hidden_literal", "hidden_constant", "hidden_import_list",
  "hidden_funarg_list", "hidden_structdcl_list",
  "hidden_interfacedcl_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      43,    45,   124,    94,    42,    47,    37,    38,   305,   306,
      40,    41,   307,    59,    46,    36,    61,    58,   123,   125,
      33,   126,    91,    93,    63,    64,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    79,    81,    80,    82,    82,    83,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    87,
      88,    88,    90,    89,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      94,    94,    94,    95,    95,    96,    96,    96,    97,    98,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     102,   101,   104,   103,   105,   105,   107,   106,   108,   108,
     108,   109,   109,   109,   110,   112,   111,   113,   113,   115,
     116,   117,   114,   119,   118,   120,   120,   121,   121,   123,
     124,   122,   126,   125,   127,   127,   129,   130,   128,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   142,   142,   143,
     144,   145,   145,   146,   146,   146,   147,   147,   148,   149,
     150,   150,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   152,   153,   153,   153,   153,   153,   154,   154,   155,
     156,   156,   156,   156,   156,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   159,   160,   161,   161,   162,   162,
     163,   164,   164,   165,   165,   166,   167,   167,   168,   168,
     168,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   177,   177,
     177,   177,   178,   178,   179,   180,   180,   180,   181,   182,
     182,   182,   182,   183,   183,   184,   184,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   186,   186,   187,   186,
     186,   186,   186,   186,   186,   186,   186,   188,   188,   189,
     189,   190,   190,   191,   191,   192,   192,   193,   193,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   204,   204,   204,   204,   205,   206,   207,
     207,   207,   208,   208,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   210,   211,   212,   212,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   217,   218,
     218,   219,   219,   220,   220,   221,   221,   222,   222
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     0,     3,     0,     3,     2,
       5,     3,     3,     2,     1,     3,     1,     2,     2,     4,
       0,     1,     0,     4,     0,     1,     1,     1,     1,     2,
       5,     3,     2,     5,     7,     3,     2,     5,     3,     1,
       2,     4,     3,     4,     3,     1,     2,     1,     1,     2,
       1,     3,     3,     3,     2,     2,     3,     5,     5,     2,
       0,     4,     0,     3,     0,     2,     0,     4,     4,     4,
       2,     5,     1,     1,     2,     0,     3,     1,     3,     0,
       0,     0,     8,     0,     5,     0,     2,     0,     2,     0,
       0,     7,     0,     5,     5,     1,     0,     0,     7,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       5,     6,     1,     1,     3,     5,     5,     4,     6,     8,
       1,     5,     5,     5,     7,     1,     0,     3,     1,     4,
       1,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     4,     4,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     2,
       3,     5,     1,     1,     2,     3,     5,     3,     5,     3,
       3,     5,     8,     5,     8,     5,     0,     3,     0,     1,
       3,     1,     4,     2,     0,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     2,     4,     3,
       5,     5,     1,     3,     1,     2,     1,     3,     4,     1,
       2,     2,     1,     1,     3,     0,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       1,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       3,     0,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     4,     4,     5,     6,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     5,     4,
       4,     2,     2,     4,     3,     3,     5,     3,     4,     3,
       5,     1,     0,     1,     3,     1,     1,     2,     1,     1,
       5,     0,     2,     1,     3,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     0,     1,     0,     7,     0,    22,   163,
     165,     0,     0,   164,   224,    20,     6,   351,     0,     4,
       0,     0,     0,    21,     0,     0,     0,    16,     0,     0,
       9,    22,     0,     8,    28,   132,   161,     0,    39,   161,
      96,     0,   270,    75,     0,     0,     0,    79,     0,     0,
     299,    92,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,     0,    25,     0,   262,
     263,   267,   264,   265,   266,    50,    99,   140,   152,   120,
     169,   168,   133,     0,     0,     0,   189,   202,   203,    26,
     221,     0,   145,    27,     0,    19,     0,     0,     0,     0,
       0,     0,   352,   166,   167,    11,    14,   293,    18,    22,
      13,    17,   162,   271,   159,     0,     0,     0,     0,   168,
     195,   199,   185,   183,   184,   182,   272,   301,   140,     0,
     301,   255,     0,   216,   140,   275,   301,   157,   158,     0,
       0,   283,   300,   276,     0,     0,   301,     0,     0,    36,
      48,     0,    29,   281,   160,     0,   128,   123,   124,   127,
     121,   122,     0,     0,   154,     0,   155,   180,   178,   179,
     125,   126,     0,   298,     0,   225,     0,    32,     0,     0,
       0,     0,     0,    55,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,     0,   297,   268,     0,   146,   223,
       0,     0,     0,     0,   317,     0,     0,   216,     0,     0,
     318,     0,     0,    23,   294,     0,    12,   255,     0,     0,
     200,   176,   174,   175,   172,   173,   204,     0,     0,   302,
      97,    95,     0,    73,     0,    76,     0,    72,   170,   249,
     168,   252,   156,   253,   295,     0,   255,     0,   210,    80,
      77,   163,     0,   209,     0,   293,   246,   234,     0,    64,
       0,     0,   207,   279,   293,   232,   244,   309,     0,    90,
      38,   230,   293,    49,    31,   226,   293,     0,     0,    40,
       0,   181,   153,     0,     0,    35,   293,     0,     0,    51,
     101,   116,   119,   102,   106,   107,   105,   117,   104,   103,
     100,   118,   108,   109,   110,   111,   112,   113,   114,   115,
     291,   129,   285,   295,     0,   134,   298,     0,     0,   295,
     291,   261,    60,   259,   258,   277,   260,     0,    53,    52,
     284,     0,     0,     0,     0,   325,     0,     0,     0,     0,
       0,   324,     0,   319,   320,   321,     0,   353,     0,     0,
     303,     0,     0,     0,    15,    10,     0,     0,     0,   186,
     196,     0,   301,    70,    66,    74,     0,     0,   301,   171,
     250,   251,   296,   256,   218,     0,     0,     0,   301,     0,
     242,     0,   255,   245,   294,     0,     0,     0,     0,   309,
       0,     0,   294,     0,   310,   237,     0,   309,     0,   294,
       0,   294,     0,    42,   282,     0,     0,     0,   205,   176,
     174,   175,   173,   146,   198,   197,   294,     0,    44,     0,
     146,   148,   287,   288,   295,     0,   295,   296,     0,     0,
       0,   137,   297,   269,   296,     0,     0,     0,     0,   222,
       0,     0,   332,   322,   323,   303,   307,     0,   305,     0,
     331,   346,     0,     0,   348,   349,     0,     0,     0,     0,
       0,   309,     0,     0,   316,     0,   304,   311,   315,   312,
     218,   177,    64,     0,     0,     0,     0,     0,   254,   255,
     168,   219,   194,   192,   193,   190,   191,   215,   218,   217,
      81,    78,   243,   247,     0,   235,   208,   201,     0,     0,
      93,    62,    65,     0,   239,     0,   309,   233,   206,   280,
     236,    64,   231,    37,   227,    30,    41,     0,   291,    45,
     228,   293,    47,    33,    43,   291,     0,   296,   292,   143,
       0,   286,   130,   136,   135,     0,   141,   142,     0,   278,
     334,     0,     0,   325,     0,   324,     0,   341,   357,   308,
       0,     0,     0,   355,   306,   335,   347,     0,   313,     0,
     326,     0,   309,   337,     0,   354,   342,     0,   301,     0,
      69,    68,   301,     0,   255,   211,    85,   218,     0,    59,
       0,   309,   309,   238,     0,   177,     0,   294,     0,    46,
       0,   146,   150,   147,   289,   290,   131,   297,   138,    61,
     333,   342,   303,   330,     0,     0,   309,   329,     0,     0,
     327,   314,   338,   303,   303,   345,   213,   343,    98,    94,
      67,    71,   220,     0,    87,   248,     0,     0,    56,     0,
      63,   241,   240,    91,   144,   229,    34,   149,   291,     0,
     336,     0,   358,   328,   339,   356,     0,     0,     0,   218,
       0,    86,    82,     0,     0,     0,   139,   342,   350,   342,
     344,   212,    83,    88,    58,    57,   151,   340,   214,   301,
       0,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     3,    14,    21,    30,   107,    31,
       8,    24,    16,    17,    66,   333,    68,   152,   529,   530,
     148,   149,   239,   511,   334,   447,   512,   590,   397,   375,
     484,   243,   244,   245,    70,   130,   259,    71,   136,   387,
     586,   661,   679,   634,   662,    72,   146,   408,    73,   144,
     240,    74,   127,   371,    75,    76,    77,    78,   320,   432,
     433,   603,    79,   322,   249,   139,    80,   153,   113,   119,
      13,    82,    83,   251,   252,   166,   121,    84,    85,   491,
     231,    86,   233,   234,    87,    88,    89,   133,   217,    90,
     258,   497,    91,    92,    22,   286,   531,   282,   274,   265,
     275,   276,   277,   267,   393,   253,   254,   255,   335,   336,
     328,   337,   278,   155,    94,   323,   434,   435,   225,   383,
     174,   143,   260,   475,   562,   556,   405,   102,   215,   221,
     625,   452,   353,   354,   355,   357,   563,   558,   626,   627,
     465,   466,    25,   476,   564,   559
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -479
static const yytype_int16 yypact[] =
{
    -479,    64,    21,    39,  -479,   105,  -479,    12,  -479,  -479,
    -479,    72,    14,  -479,    70,    63,  -479,  -479,   111,  -479,
     162,   126,  1088,  -479,   187,   365,    28,  -479,   169,   252,
    -479,    39,   260,  -479,  -479,  -479,   105,   737,  -479,   105,
    -479,   467,  -479,  -479,    16,   467,   105,  -479,    10,   180,
    1681,  -479,    10,  -479,   160,   447,  1681,  1681,  1681,  1681,
    1681,  1681,  1736,  1681,  1681,   979,   210,  -479,   471,  -479,
    -479,  -479,  -479,  -479,  -479,   614,  -479,  -479,   213,   138,
    -479,   221,  -479,   224,   235,    10,   236,  -479,  -479,  -479,
     242,    61,  -479,  -479,    66,  -479,   239,    -2,   285,   239,
     239,   255,  -479,  -479,  -479,  -479,  -479,   258,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,   264,  1905,  1905,  1905,  -479,
     261,  -479,  -479,  -479,  -479,  -479,  -479,  1681,   270,   138,
    1296,  1879,   267,   276,   300,  -479,  1681,  -479,  -479,   342,
    1905,  2193,   253,  -479,   302,   268,  1681,   301,  1905,  -479,
    -479,   347,  -479,  -479,  -479,   871,  -479,  -479,  -479,  -479,
    -479,  -479,  1791,  1736,  2193,   275,  -479,   171,  -479,    68,
    -479,  -479,   278,  2193,   284,  -479,   371,  -479,  1846,  1681,
    1681,  1681,  1681,  -479,  1681,  1681,  1681,  -479,  1681,  1681,
    1681,  1681,  1681,  1681,  1681,  1681,  1681,  1681,  1681,  1681,
    1681,  1681,  -479,  1351,   500,  1681,  -479,  1681,  -479,  -479,
    1238,  1681,  1681,  1681,  -479,   575,   105,   276,   296,   355,
    -479,  1307,  1307,  -479,   244,   307,  -479,  1879,   362,  1905,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,   312,   105,  -479,
    -479,   328,  1681,  -479,   345,  -479,   120,   336,  1905,  -479,
    1879,  -479,  -479,  -479,   325,   363,  1879,  1238,  -479,  -479,
     350,    92,   400,  -479,   374,   372,  -479,  -479,   364,  -479,
      57,   122,  -479,  -479,   377,  -479,  -479,   450,  1871,  -479,
    -479,  -479,   393,  -479,  -479,  -479,   395,  1681,   105,   394,
    1932,  -479,   401,  1905,  1905,  -479,   405,  1681,   397,  2193,
    2264,  -479,  2217,  1010,  1010,  1010,  1010,  -479,  1010,  1010,
    2241,  -479,   533,   533,   533,   533,  -479,  -479,  -479,  -479,
    1406,  -479,  -479,    24,  1461,  -479,  2091,   406,  1163,  2058,
    1406,  -479,  -479,  -479,  -479,  -479,  -479,     5,   253,   253,
    2193,   845,   417,   425,   427,  -479,   433,   498,  1307,    47,
      37,  -479,   444,  -479,  -479,  -479,   942,  -479,    93,   449,
     105,   451,   452,   453,  -479,  -479,   456,  1905,   458,  -479,
    -479,   477,  1681,  2193,  -479,  -479,  1516,  1571,  1681,  -479,
    -479,  -479,  1879,  -479,  1958,   463,   119,   345,  1681,   105,
     459,   468,  1879,  -479,   649,   461,  1905,    36,   400,   450,
     400,   472,   434,   466,  -479,  -479,   105,   450,   492,   105,
     479,   105,   483,   253,  -479,  1681,  1966,  1905,  -479,   229,
     281,   318,   352,  -479,  -479,  -479,   105,   487,   253,  1681,
    -479,  2121,  -479,  -479,   473,   484,   488,  1736,   504,   505,
     506,  -479,  1681,  -479,  -479,   509,   508,  1238,  1163,  -479,
    1307,   536,  -479,  -479,  -479,   105,  1991,  1307,   105,  1307,
    -479,  -479,   573,   109,  -479,  -479,   517,   511,  1307,    47,
    1307,   450,   105,   105,  -479,   520,   516,  -479,  -479,  -479,
    1958,  -479,  -479,   531,  1238,  1681,  1681,   538,  -479,  1879,
     544,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  1958,  -479,
    -479,  -479,  -479,  -479,   535,  -479,  -479,  -479,  1736,   541,
    -479,  -479,  -479,   549,  -479,   552,   450,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,   253,   555,  1406,  -479,
    -479,   554,  1846,  -479,   253,  1406,  1626,  1406,  -479,  -479,
     559,  -479,  -479,  -479,  -479,    -6,  -479,  -479,   143,  -479,
    -479,   560,   563,   566,   570,   572,   564,  -479,  -479,   571,
     562,  1307,   567,  -479,   574,  -479,  -479,   588,  -479,  1307,
    -479,   577,   450,  -479,   582,  -479,  2019,    44,  1681,   179,
    2193,  2193,  1681,   584,  1879,  -479,  -479,  1958,    91,  -479,
    1163,   450,   450,  -479,    76,   359,   587,   105,   585,   397,
     603,  -479,  2193,  -479,  -479,  -479,  -479,  1681,  -479,  -479,
    -479,  2019,   105,  -479,  1991,  1307,   450,  -479,   105,   109,
    -479,  -479,  -479,   105,   105,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,   612,   661,  -479,  1681,  1681,  -479,  1736,
     615,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  1406,   606,
    -479,   621,  -479,  -479,  -479,  -479,   624,   633,   650,  1958,
      33,  -479,  -479,  2145,  2169,   644,  -479,  2019,  -479,  2019,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  1681,
     345,  -479
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -479,  -479,  -479,  -479,  -479,  -479,  -479,    -9,  -479,  -479,
     685,  -479,    11,  -479,  -479,   695,  -479,  -136,   -39,   124,
    -479,  -133,   -19,  -479,    62,  -479,  -479,  -479,  -434,  -376,
    -479,  -479,  -479,  -479,  -479,  -479,  -142,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
    -479,  -479,  -479,  -479,   507,   423,   123,  -479,  -198,   188,
     189,  -479,   249,   -60,   478,   175,   -12,   439,   690,   387,
     462,    22,  -479,   480,   -85,   568,  -479,  -479,  -479,  -479,
     -36,   -37,   -31,   -44,  -479,  -479,  -479,  -479,  -479,   -32,
     515,  -478,  -479,  -479,  -479,  -479,  -479,  -479,  -479,  -479,
     332,  -127,  -249,   341,  -479,   356,  -479,  -218,  -300,   715,
    -479,  -244,  -479,   -61,    74,   233,  -479,  -314,  -230,  -284,
    -197,  -479,  -104,  -395,  -479,  -479,  -293,  -479,   206,  -479,
     283,  -479,   402,   293,   407,   273,   132,   140,  -468,  -479,
    -446,   287,  -479,   542,  -479,  -479
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -284
static const yytype_int16 yytable[] =
{
     123,   122,   165,    69,   279,   125,   124,   178,   327,   366,
     330,   500,   266,   386,   281,   285,   446,   567,   168,   106,
     585,   399,   401,   241,   112,   167,   247,   112,   443,   177,
     169,   230,   236,   237,   135,   395,   436,    15,   385,   438,
     467,     9,   110,   508,   403,   445,   137,     5,   577,   509,
     461,   508,   410,   103,   672,   268,   412,   509,   216,   120,
     552,   607,   209,   283,     4,     7,   427,   608,   448,  -221,
     289,   211,     9,    11,   449,    18,   131,    19,   138,   232,
     232,   232,   390,   508,   235,   235,   235,   594,    23,   509,
      10,    11,    20,   298,   232,  -242,   636,   137,   462,   235,
     437,   332,   104,   232,  -221,   510,   514,   463,   235,   635,
     468,   232,   461,   628,   520,   178,   235,   398,   232,   168,
     226,    10,    11,   235,   142,   376,   167,   264,  -187,   138,
       9,   169,   212,   273,     9,   391,  -221,   296,   120,   120,
     120,   232,   213,   650,   368,   643,   235,   390,   549,   513,
     538,   515,   540,   120,   472,  -242,   389,   637,   638,   168,
     462,  -242,   120,   379,   128,    27,   167,   639,   134,   473,
     120,   169,    27,   656,   504,    26,   400,   120,   573,    10,
      11,   671,   448,    10,    11,     9,   377,     9,   499,    33,
     232,    69,   232,   407,     9,   235,   213,   235,   203,   677,
     120,   678,   204,   548,   246,   418,   448,  -189,   424,   425,
     205,   232,   609,   232,   596,   364,   235,   651,   235,   232,
     147,   600,    28,   593,   235,   528,    29,   145,   657,   658,
     105,  -188,   535,    29,    10,    11,    10,    11,    69,  -189,
     579,   232,   448,    10,    11,   545,   235,    27,   630,   120,
      95,   120,   140,   420,   419,   108,   232,   232,   422,   421,
     208,   235,   235,   111,   440,  -185,   210,   266,   483,     9,
     120,   583,   120,   175,   487,   524,   522,  -274,   120,   622,
     168,   202,   418,  -274,   501,   338,   339,   167,  -159,  -185,
     129,   206,   169,   261,   129,   207,  -188,  -185,   641,   642,
     120,   598,  -187,   218,   681,   220,   222,  -273,    29,    69,
     219,   507,   120,  -273,    11,   120,   120,  -183,    10,    11,
     223,   224,   270,   654,   227,   238,     9,   256,   271,   213,
     232,   230,   527,  -274,   665,   235,   292,   272,   269,  -274,
     495,  -183,    10,    11,   257,   232,   640,   493,   492,  -183,
     235,   293,   496,   494,  -184,   232,   360,   294,   361,   232,
     235,   413,   280,  -273,   235,   532,   633,   261,   365,  -273,
     367,   428,     9,   369,    96,    10,    11,   541,  -184,   232,
     232,   374,   264,    97,   235,   235,  -184,    98,  -182,   120,
     273,   372,    12,   168,   519,  -186,     9,    99,   100,   378,
     167,   382,   262,   648,   120,   169,   120,    32,   284,    81,
     649,   263,  -182,   388,   120,    32,    10,    11,   120,  -186,
    -182,    10,    11,   114,   384,   390,   114,  -186,    69,    69,
     101,   132,   295,   114,   392,   394,   495,   396,   120,   120,
     402,   150,   154,   493,   492,    10,    11,   599,   496,   494,
     338,   339,   232,   404,   495,   154,   409,   235,   411,   261,
     415,   493,   492,   429,   168,    69,   496,   494,   426,   423,
      35,   167,     9,   442,   629,    37,   169,   455,   631,   156,
     157,   158,   159,   160,   161,   115,   170,   171,   270,   526,
      48,    49,     9,   456,   271,   232,     9,    52,   352,   457,
     235,   458,   120,   534,   362,   363,   459,   151,    10,    11,
     469,   120,   474,   482,   477,   478,   479,   480,   250,   481,
     120,    10,    11,   389,   498,     9,   114,    62,   521,   503,
     506,   176,   114,   516,   150,   518,   532,   680,   154,    65,
     523,    10,    11,   495,   525,    10,    11,   232,   533,   537,
     493,   492,   235,   539,   120,   496,   494,   141,   214,   214,
     324,   214,   214,   154,   444,   542,   543,   544,   181,   164,
     546,    69,   173,   347,    10,    11,   566,   547,   189,   541,
     568,   576,   193,   341,   569,   156,   160,   198,   199,   200,
     201,   325,   473,   342,   578,   168,   587,    81,   343,   344,
     345,   582,   167,   356,   584,   346,   120,   169,   589,   120,
     591,    32,   347,   592,   250,   495,   595,   597,   179,  -283,
     606,   610,   493,   492,   611,   370,  -163,   496,   494,   348,
     612,   460,  -164,   613,   614,   615,   617,   618,   619,   471,
     621,   349,   623,   250,    81,   632,   646,   350,   180,   181,
      11,   182,   183,   184,   185,   186,   644,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   647,   659,   261,   154,   660,   351,   448,   666,
    -283,   120,   667,   351,   351,   668,   299,   300,   301,   302,
    -283,   303,   304,   305,   669,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   262,
     164,   670,   326,   676,   329,    81,   109,    67,   141,   141,
     340,   645,   673,    10,    11,   604,   605,   414,   380,   126,
     381,   291,   359,   550,   517,   505,   464,    93,   488,   557,
     560,   588,   565,   453,   551,    37,   575,   356,   454,   373,
     655,   570,     0,   572,   652,   115,   571,     0,   358,     0,
      48,    49,     9,     0,     0,     0,     0,    52,     0,   250,
       0,   490,     0,     0,   116,     0,   502,     0,     0,   250,
       0,   114,     0,     0,     0,     0,     0,     0,     0,   114,
       0,   117,     0,   114,   141,     0,   150,   118,   154,     0,
       0,     0,     0,   351,   141,     0,     0,     0,     0,    65,
     351,    10,    11,   154,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,   431,     0,     0,
       0,   164,     0,     0,    81,    81,     0,   431,     0,     0,
       0,     0,   356,   554,   616,   561,     0,     0,     0,     0,
     464,     0,   620,   341,     0,     0,   464,     0,     0,   574,
     356,     0,     0,   342,     0,     0,     0,     0,   343,   344,
     345,    81,     0,     0,     0,   346,   250,     0,     0,    37,
       0,     0,   450,   141,   141,     0,     0,     0,     0,   115,
       0,     0,     0,     0,    48,    49,     9,   557,   653,   348,
       0,    52,     0,     0,     0,   451,     0,     0,   228,     0,
       0,     0,   351,     0,     0,     0,     0,   350,   555,   351,
      11,   351,   141,     0,     0,   117,     0,     0,     0,     0,
     351,   229,   351,     0,     0,     0,   141,   287,     0,     0,
       0,     0,     0,    65,   164,    10,    11,   288,     0,   173,
     341,     0,     0,     0,   470,     0,     0,     0,     0,     0,
     342,     0,     0,     0,     0,   343,   344,   345,     0,     0,
       0,   250,   346,     0,     0,     0,     0,    81,     0,   347,
       0,     0,    35,     0,   154,     0,     0,    37,     0,     0,
       0,   172,   580,   581,     0,     0,   348,   115,     0,   356,
       0,   554,    48,    49,     9,   561,   464,     0,     0,    52,
     356,   356,     0,     0,   350,   164,    56,    11,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,    57,
      58,   351,    59,    60,     0,   431,    61,     0,   351,    62,
       0,     0,   431,   602,   431,   181,     0,     0,     0,    63,
      64,    65,     0,    10,    11,   189,     0,     0,     0,   193,
     194,   195,   196,   197,   198,   199,   200,   201,     0,     0,
       0,     0,     0,   351,     0,     0,   555,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    -2,    34,
       0,    35,     0,     0,    36,     0,    37,    38,    39,    40,
       0,     0,    41,     0,    42,    43,    44,    45,    46,    47,
       0,    48,    49,     9,   173,     0,    50,    51,    52,    53,
      54,    55,     0,     0,     0,    56,     0,     0,     0,   351,
       0,   351,     0,     0,     0,     0,     0,     0,    57,    58,
       0,    59,    60,   663,   664,    61,   164,     0,    62,     0,
       0,   -24,     0,     0,     0,   431,     0,     0,    63,    64,
      65,     0,    10,    11,   331,     0,    35,     0,     0,    36,
    -257,    37,    38,    39,    40,     0,  -257,    41,     0,    42,
      43,   115,    45,    46,    47,     0,    48,    49,     9,     0,
       0,    50,    51,    52,    53,    54,    55,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,    59,    60,     0,     0,
      61,     0,     0,    62,     0,     0,  -257,     0,     0,     0,
       0,   332,  -257,    63,    64,    65,     0,    10,    11,   331,
       0,    35,     0,     0,    36,     0,    37,    38,    39,    40,
       0,     0,    41,     0,    42,    43,   115,    45,    46,    47,
       0,    48,    49,     9,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,    59,    60,     0,     0,    61,     0,     0,    62,    35,
       0,  -257,     0,     0,    37,     0,   332,  -257,    63,    64,
      65,     0,    10,    11,   115,   341,     0,     0,     0,    48,
      49,     9,     0,   242,     0,   342,    52,     0,     0,     0,
     343,   344,   345,    56,     0,     0,     0,   346,     0,     0,
       0,     0,     0,     0,   347,     0,    57,    58,     0,    59,
      60,     0,     0,    61,    35,     0,    62,     0,     0,    37,
       0,   348,     0,     0,     0,     0,    63,    64,    65,   115,
      10,    11,     0,     0,    48,    49,     9,     0,     0,   350,
       0,    52,    11,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,    59,   163,     0,     0,    61,    35,
       0,    62,   321,     0,    37,     0,     0,     0,     0,     0,
       0,    63,    64,    65,   115,    10,    11,     0,     0,    48,
      49,     9,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,     0,    59,
      60,     0,     0,    61,    35,     0,    62,     0,     0,    37,
       0,     0,     0,     0,   430,     0,    63,    64,    65,   115,
      10,    11,     0,     0,    48,    49,     9,     0,     0,     0,
       0,    52,     0,   439,     0,     0,     0,     0,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,    59,   163,     0,     0,    61,    35,
       0,    62,     0,     0,    37,     0,     0,     0,     0,     0,
       0,    63,    64,    65,   115,    10,    11,     0,     0,    48,
      49,     9,     0,   485,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,     0,    59,
      60,     0,     0,    61,    35,     0,    62,     0,     0,    37,
       0,     0,     0,     0,     0,     0,    63,    64,    65,   115,
      10,    11,     0,     0,    48,    49,     9,     0,   486,     0,
       0,    52,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,    59,    60,     0,     0,    61,    35,
       0,    62,     0,     0,    37,     0,     0,     0,     0,     0,
       0,    63,    64,    65,   115,    10,    11,     0,     0,    48,
      49,     9,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,     0,    59,
      60,     0,     0,    61,    35,     0,    62,     0,     0,    37,
       0,     0,     0,     0,   601,     0,    63,    64,    65,   115,
      10,    11,     0,     0,    48,    49,     9,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,    59,    60,     0,     0,    61,    35,
       0,    62,     0,     0,    37,     0,     0,     0,     0,     0,
       0,    63,    64,    65,   115,    10,    11,     0,     0,    48,
      49,     9,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,     0,    59,
     163,     0,     0,    61,    35,     0,    62,     0,     0,   290,
       0,     0,     0,     0,     0,     0,    63,    64,    65,   115,
      10,    11,     0,     0,    48,    49,     9,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    58,     0,    59,    60,     0,     0,    61,     0,
       0,    62,     0,     0,    37,     0,     0,     0,     0,     0,
       0,    63,    64,    65,   115,    10,    11,     0,     0,    48,
      49,     9,     0,     0,     0,     0,    52,     0,     0,    37,
       0,     0,     0,   228,     0,     0,     0,    37,     0,   115,
       0,   248,     0,     0,    48,    49,     9,   115,     0,     0,
     117,    52,    48,    49,     9,     0,   229,     0,   228,    52,
       0,     0,   297,    37,     0,     0,   228,     0,    65,     0,
      10,    11,   288,   115,     0,   117,     0,     0,    48,    49,
       9,   229,     0,   117,     0,    52,     0,     0,     0,   229,
      37,     0,   228,    65,     0,    10,    11,   406,     0,     0,
     115,    65,     0,    10,    11,    48,    49,     9,     0,   117,
       0,     0,    52,     0,     0,   229,    37,     0,     0,   416,
       0,     0,     0,     0,   290,     0,   115,    65,     0,    10,
      11,    48,    49,     9,   115,     0,   117,     0,    52,    48,
      49,     9,   417,     0,     0,   228,    52,     0,     0,   341,
       0,     0,     0,   228,    65,     0,    10,    11,     0,   342,
       0,     0,   117,     0,   343,   344,   553,     0,   489,     0,
     117,   346,     0,     0,     0,     0,   229,   341,   347,     0,
      65,     0,    10,    11,     0,     0,     0,   342,    65,     0,
      10,    11,   343,   344,   345,   348,     0,     0,     0,   346,
       0,     0,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,   350,     0,    10,    11,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,     0,     0,   624,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,   180,   181,    11,   182,     0,   184,   185,   186,
       0,     0,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   180,   181,     0,   182,     0,
     184,   185,   186,     0,   444,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
       0,     0,     0,     0,     0,   180,   181,     0,   182,     0,
     184,   185,   186,     0,   441,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   180,
     181,     0,   182,     0,   184,   185,   186,     0,   536,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   180,   181,     0,   182,     0,   184,   185,
     186,     0,   674,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   180,   181,     0,
     182,     0,   184,   185,   186,     0,   675,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   180,   181,     0,     0,     0,   184,   185,   186,     0,
       0,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   180,   181,     0,     0,     0,
     184,   185,   186,     0,     0,   188,   189,   190,   191,     0,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   181,
       0,     0,     0,   184,   185,   186,     0,     0,   188,   189,
     190,   191,     0,   193,   194,   195,   196,   197,   198,   199,
     200,   201
};

static const yytype_int16 yycheck[] =
{
      37,    37,    62,    22,   146,    37,    37,    68,   205,   227,
     208,   387,   139,   257,   147,   151,   330,   463,    62,    28,
     498,   270,   271,   127,    36,    62,   130,    39,   328,    68,
      62,   116,   117,   118,    46,   265,    12,    25,   256,   323,
       3,    25,    31,     7,   274,   329,    36,    26,   482,    13,
       3,     7,   282,    25,    21,   140,   286,    13,    60,    37,
     455,    67,     1,   148,     0,    26,   296,    73,    63,     1,
     155,     5,    25,    75,    69,     3,    60,    63,    68,   116,
     117,   118,    25,     7,   116,   117,   118,   521,    25,    13,
      74,    75,    22,   178,   131,     3,     5,    36,    51,   131,
      76,    68,    74,   140,    36,    69,   399,    60,   140,   587,
      73,   148,     3,    69,   407,   176,   148,    60,   155,   163,
     109,    74,    75,   155,    50,     5,   163,   139,    60,    68,
      25,   163,    66,   145,    25,   262,    68,   176,   116,   117,
     118,   178,    76,   611,   229,    69,   178,    25,   448,   398,
     434,   400,   436,   131,    61,    63,    64,    66,    67,   203,
      51,    69,   140,   248,    41,     3,   203,    76,    45,    76,
     148,   203,     3,   619,   392,    64,    54,   155,   471,    74,
      75,   659,    63,    74,    75,    25,    66,    25,    69,    63,
     227,   210,   229,   278,    25,   227,    76,   229,    60,   667,
     178,   669,    64,   447,   130,   290,    63,    36,   293,   294,
      72,   248,    69,   250,   528,   224,   248,   612,   250,   256,
      60,   535,    60,   516,   256,   423,    64,    52,   623,   624,
      61,    60,   430,    64,    74,    75,    74,    75,   257,    68,
     484,   278,    63,    74,    75,   442,   278,     3,    69,   227,
      63,   229,    72,   290,   290,     3,   293,   294,   290,   290,
      85,   293,   294,     3,   324,    36,    91,   394,   372,    25,
     248,   489,   250,    63,   378,   411,   409,     7,   256,   572,
     324,    68,   367,    13,   388,   211,   212,   324,    67,    60,
      41,    67,   324,    25,    45,    60,    60,    68,   591,   592,
     278,   531,    60,    97,   680,    99,   100,     7,    64,   328,
      25,   396,   290,    13,    75,   293,   294,    36,    74,    75,
      65,    63,    54,   616,    60,    64,    25,    60,    60,    76,
     367,   416,   417,    63,   648,   367,    61,    69,    36,    69,
     384,    60,    74,    75,    68,   382,   590,   384,   384,    68,
     382,    73,   384,   384,    36,   392,    60,    73,     3,   396,
     392,   287,    61,    63,   396,   426,   584,    25,    61,    69,
       8,   297,    25,    61,     9,    74,    75,   437,    60,   416,
     417,    36,   394,    18,   416,   417,    68,    22,    36,   367,
     402,    63,     5,   437,   406,    36,    25,    32,    33,    63,
     437,    76,    60,   601,   382,   437,   384,    20,    61,    22,
     607,    69,    60,    63,   392,    28,    74,    75,   396,    60,
      68,    74,    75,    36,    61,    25,    39,    68,   447,   448,
      65,    44,    61,    46,    60,    63,   480,    73,   416,   417,
      63,    54,    55,   480,   480,    74,    75,   532,   480,   480,
     376,   377,   489,     3,   498,    68,    63,   489,    63,    25,
      66,   498,   498,    66,   508,   484,   498,   498,    63,    68,
       3,   508,    25,    67,   578,     8,   508,    60,   582,    56,
      57,    58,    59,    60,    61,    18,    63,    64,    54,   415,
      23,    24,    25,    68,    60,   532,    25,    30,   215,    72,
     532,    68,   480,   429,   221,   222,     8,    60,    74,    75,
      66,   489,    63,    36,    63,    63,    63,    61,   131,    61,
     498,    74,    75,    64,    61,    25,   139,    60,    36,    61,
      69,    60,   145,    61,   147,    69,   597,   679,   151,    72,
      61,    74,    75,   587,    61,    74,    75,   584,    61,    76,
     587,   587,   584,    69,   532,   587,   587,    50,    96,    97,
      60,    99,   100,   176,    76,    61,    61,    61,    35,    62,
      61,   590,    65,    37,    74,    75,     3,    69,    45,   639,
      63,    61,    49,     8,    73,   162,   163,    54,    55,    56,
      57,   204,    76,    18,    63,   639,    61,   210,    23,    24,
      25,    63,   639,   216,    60,    30,   584,   639,    67,   587,
      61,   224,    37,    61,   227,   659,    61,    63,     4,     5,
      61,    61,   659,   659,    61,   238,    60,   659,   659,    54,
      60,   348,    60,    69,    63,    73,    69,    63,    50,   356,
      63,    66,    60,   256,   257,    61,    61,    72,    34,    35,
      75,    37,    38,    39,    40,    41,    69,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    69,    61,    25,   288,    15,   215,    63,    73,
      66,   659,    61,   221,   222,    61,   179,   180,   181,   182,
      76,   184,   185,   186,    61,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    60,
     203,    61,   205,    69,   207,   328,    31,    22,   211,   212,
     213,   597,   660,    74,    75,   537,   537,   288,   250,    39,
     250,   163,   217,   450,   402,   394,   349,    22,   382,   456,
     457,   508,   459,   341,   451,     8,   473,   360,   341,   242,
     618,   468,    -1,   470,   614,    18,   469,    -1,   216,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,   382,
      -1,   384,    -1,    -1,    37,    -1,   389,    -1,    -1,   392,
      -1,   394,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   402,
      -1,    54,    -1,   406,   287,    -1,   409,    60,   411,    -1,
      -1,    -1,    -1,   341,   297,    -1,    -1,    -1,    -1,    72,
     348,    74,    75,   426,    -1,    -1,    -1,    -1,   356,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,   324,    -1,    -1,   447,   448,    -1,   330,    -1,    -1,
      -1,    -1,   455,   456,   561,   458,    -1,    -1,    -1,    -1,
     463,    -1,   569,     8,    -1,    -1,   469,    -1,    -1,   472,
     473,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,   484,    -1,    -1,    -1,    30,   489,    -1,    -1,     8,
      -1,    -1,    37,   376,   377,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,   614,   615,    54,
      -1,    30,    -1,    -1,    -1,    60,    -1,    -1,    37,    -1,
      -1,    -1,   450,    -1,    -1,    -1,    -1,    72,   456,   457,
      75,   459,   415,    -1,    -1,    54,    -1,    -1,    -1,    -1,
     468,    60,   470,    -1,    -1,    -1,   429,    66,    -1,    -1,
      -1,    -1,    -1,    72,   437,    74,    75,    76,    -1,   442,
       8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,   584,    30,    -1,    -1,    -1,    -1,   590,    -1,    37,
      -1,    -1,     3,    -1,   597,    -1,    -1,     8,    -1,    -1,
      -1,    12,   485,   486,    -1,    -1,    54,    18,    -1,   612,
      -1,   614,    23,    24,    25,   618,   619,    -1,    -1,    30,
     623,   624,    -1,    -1,    72,   508,    37,    75,    -1,    -1,
      -1,    -1,    -1,   561,    -1,    -1,    -1,    -1,    -1,    50,
      51,   569,    53,    54,    -1,   528,    57,    -1,   576,    60,
      -1,    -1,   535,   536,   537,    35,    -1,    -1,    -1,    70,
      71,    72,    -1,    74,    75,    45,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,   611,    -1,    -1,   614,   615,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,   607,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,   667,
      -1,   669,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,   636,   637,    57,   639,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,   648,    -1,    -1,    70,    71,
      72,    -1,    74,    75,     1,    -1,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    -1,    74,    75,     1,
      -1,     3,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,     3,
      -1,    63,    -1,    -1,     8,    -1,    68,    69,    70,    71,
      72,    -1,    74,    75,    18,     8,    -1,    -1,    -1,    23,
      24,    25,    -1,    27,    -1,    18,    30,    -1,    -1,    -1,
      23,    24,    25,    37,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    57,     3,    -1,    60,    -1,    -1,     8,
      -1,    54,    -1,    -1,    -1,    -1,    70,    71,    72,    18,
      74,    75,    -1,    -1,    23,    24,    25,    -1,    -1,    72,
      -1,    30,    75,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    57,     3,
      -1,    60,    61,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    18,    74,    75,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    57,     3,    -1,    60,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,    18,
      74,    75,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    57,     3,
      -1,    60,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    18,    74,    75,    -1,    -1,    23,
      24,    25,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    57,     3,    -1,    60,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    18,
      74,    75,    -1,    -1,    23,    24,    25,    -1,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    57,     3,
      -1,    60,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    18,    74,    75,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    57,     3,    -1,    60,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,    18,
      74,    75,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    57,     3,
      -1,    60,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    18,    74,    75,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    57,     3,    -1,    60,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    18,
      74,    75,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    18,    74,    75,    -1,    -1,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,     8,
      -1,    -1,    -1,    37,    -1,    -1,    -1,     8,    -1,    18,
      -1,    12,    -1,    -1,    23,    24,    25,    18,    -1,    -1,
      54,    30,    23,    24,    25,    -1,    60,    -1,    37,    30,
      -1,    -1,    66,     8,    -1,    -1,    37,    -1,    72,    -1,
      74,    75,    76,    18,    -1,    54,    -1,    -1,    23,    24,
      25,    60,    -1,    54,    -1,    30,    -1,    -1,    -1,    60,
       8,    -1,    37,    72,    -1,    74,    75,    76,    -1,    -1,
      18,    72,    -1,    74,    75,    23,    24,    25,    -1,    54,
      -1,    -1,    30,    -1,    -1,    60,     8,    -1,    -1,    37,
      -1,    -1,    -1,    -1,     8,    -1,    18,    72,    -1,    74,
      75,    23,    24,    25,    18,    -1,    54,    -1,    30,    23,
      24,    25,    60,    -1,    -1,    37,    30,    -1,    -1,     8,
      -1,    -1,    -1,    37,    72,    -1,    74,    75,    -1,    18,
      -1,    -1,    54,    -1,    23,    24,    25,    -1,    60,    -1,
      54,    30,    -1,    -1,    -1,    -1,    60,     8,    37,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    18,    72,    -1,
      74,    75,    23,    24,    25,    54,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    34,    35,    75,    37,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,    -1,
      39,    40,    41,    -1,    76,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,    -1,
      39,    40,    41,    -1,    73,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    34,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    67,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    34,    35,    -1,    37,    -1,    39,    40,
      41,    -1,    67,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    34,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    67,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    34,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    78,    80,    81,     0,    26,    79,    26,    87,    25,
      74,    75,   146,   147,    82,    25,    89,    90,     3,    63,
      22,    83,   171,    25,    88,   219,    64,     3,    60,    64,
      84,    86,   146,    63,     1,     3,     6,     8,     9,    10,
      11,    14,    16,    17,    18,    19,    20,    21,    23,    24,
      28,    29,    30,    31,    32,    33,    37,    50,    51,    53,
      54,    57,    60,    70,    71,    72,    91,    92,    93,    99,
     111,   114,   122,   125,   128,   131,   132,   133,   134,   139,
     143,   146,   148,   149,   154,   155,   158,   161,   162,   163,
     166,   169,   170,   186,   191,    63,     9,    18,    22,    32,
      33,    65,   204,    25,    74,    61,    84,    85,     3,    87,
      89,     3,   143,   145,   146,    18,    37,    54,    60,   146,
     148,   153,   157,   158,   159,   166,   145,   129,   133,   139,
     112,    60,   146,   164,   133,   143,   115,    36,    68,   142,
      72,   131,   191,   198,   126,   142,   123,    60,    97,    98,
     146,    60,    94,   144,   146,   190,   132,   132,   132,   132,
     132,   132,    37,    54,   131,   140,   152,   158,   160,   166,
     132,   132,    12,   131,   197,    63,    60,    95,   190,     4,
      34,    35,    37,    38,    39,    40,    41,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    68,    60,    64,    72,    67,    60,   142,     1,
     142,     5,    66,    76,   147,   205,    60,   165,   205,    25,
     205,   206,   205,    65,    63,   195,    89,    60,    37,    60,
     151,   157,   158,   159,   160,   166,   151,   151,    64,    99,
     127,   199,    27,   108,   109,   110,   191,   199,    12,   141,
     146,   150,   151,   182,   183,   184,    60,    68,   167,   113,
     199,    25,    60,    69,   143,   176,   178,   180,   151,    36,
      54,    60,    69,   143,   175,   177,   178,   179,   189,   113,
      61,    98,   174,   151,    61,    94,   172,    66,    76,   151,
       8,   152,    61,    73,    73,    61,    95,    66,   151,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     135,    61,   140,   192,    60,   146,   131,   197,   187,   131,
     135,     1,    68,    92,   101,   185,   186,   188,   191,   191,
     131,     8,    18,    23,    24,    25,    30,    37,    54,    66,
      72,   147,   207,   209,   210,   211,   146,   212,   220,   167,
      60,     3,   207,   207,    84,    61,   184,     8,   151,    61,
     146,   130,    63,   131,    36,   106,     5,    66,    63,   151,
     141,   150,    76,   196,    61,   184,   188,   116,    63,    64,
      25,   178,    60,   181,    63,   195,    73,   105,    60,   179,
      54,   179,    63,   195,     3,   203,    76,   151,   124,    63,
     195,    63,   195,   191,   144,    66,    37,    60,   151,   157,
     158,   159,   166,    68,   151,   151,    63,   195,   191,    66,
      68,   131,   136,   137,   193,   194,    12,    76,   196,    32,
     140,    73,    67,   185,    76,   196,   194,   102,    63,    69,
      37,    60,   208,   209,   211,    60,    68,    72,    68,     8,
     207,     3,    51,    60,   146,   217,   218,     3,    73,    66,
      12,   207,    61,    76,    63,   200,   220,    63,    63,    63,
      61,    61,    36,   199,   107,    27,    27,   199,   182,    60,
     146,   156,   157,   158,   159,   160,   166,   168,    61,    69,
     106,   199,   146,    61,   184,   180,    69,   151,     7,    13,
      69,   100,   103,   179,   203,   179,    61,   177,    69,   143,
     203,    36,    98,    61,    94,    61,   191,   151,   135,    95,
      96,   173,   190,    61,   191,   135,    67,    76,   196,    69,
     196,   140,    61,    61,    61,   197,    61,    69,   188,   185,
     207,   210,   200,    25,   146,   147,   202,   207,   214,   222,
     207,   146,   201,   213,   221,   207,     3,   217,    63,    73,
     207,   218,   207,   203,   146,   212,    61,   105,    63,   188,
     131,   131,    63,   184,    60,   168,   117,    61,   192,    67,
     104,    61,    61,   203,   105,    61,   194,    63,   195,   151,
     194,    68,   131,   138,   136,   137,    61,    67,    73,    69,
      61,    61,    60,    69,    63,    73,   207,    69,    63,    50,
     207,    63,   203,    60,    60,   207,   215,   216,    69,   199,
      69,   199,    61,   184,   120,   168,     5,    66,    67,    76,
     188,   203,   203,    69,    69,    96,    61,    69,   135,   197,
     215,   200,   214,   207,   203,   213,   217,   200,   200,    61,
      15,   118,   121,   131,   131,   194,    73,    61,    61,    61,
      61,   168,    21,   101,    67,    67,    69,   215,   215,   119,
     113,   106
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar, yystate;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 128 "go.y"
    {
		xtop = concat(xtop, (yyvsp[(4) - (4)].list));
	}
    break;

  case 3:
#line 134 "go.y"
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
    break;

  case 4:
#line 140 "go.y"
    {
		mkpackage((yyvsp[(2) - (3)].sym)->name);
	}
    break;

  case 5:
#line 150 "go.y"
    {
		importpkg = runtimepkg;

		if(debug['A'])
			cannedimports("runtime.builtin", "package runtime\n\n$$\n\n");
		else
			cannedimports("runtime.builtin", runtimeimport);
		curio.importsafe = 1;
	}
    break;

  case 6:
#line 161 "go.y"
    {
		importpkg = nil;
	}
    break;

  case 12:
#line 175 "go.y"
    {
		Pkg *ipkg;
		Sym *my;
		Node *pack;
		
		ipkg = importpkg;
		my = importmyname;
		importpkg = nil;
		importmyname = S;

		if(my == nil)
			my = lookup(ipkg->name);

		pack = nod(OPACK, N, N);
		pack->sym = my;
		pack->pkg = ipkg;
		pack->lineno = (yyvsp[(1) - (3)].i);

		if(my->name[0] == '.') {
			importdot(ipkg, pack);
			break;
		}
		if(strcmp(my->name, "init") == 0) {
			yyerror("cannot import package as init - init must be a func");
			break;
		}
		if(my->name[0] == '_' && my->name[1] == '\0')
			break;
		if(my->def) {
			lineno = (yyvsp[(1) - (3)].i);
			redeclare(my, "as imported package name");
		}
		my->def = pack;
		my->lastlineno = (yyvsp[(1) - (3)].i);
		my->block = 1;	// at top level
	}
    break;

  case 13:
#line 212 "go.y"
    {
		// When an invalid import path is passed to importfile,
		// it calls yyerror and then sets up a fake import with
		// no package statement. This allows us to test more
		// than one invalid import statement in a single file.
		if(nerrors == 0)
			fatal("phase error in import");
	}
    break;

  case 16:
#line 227 "go.y"
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
		importfile(&(yyvsp[(1) - (1)].val), (yyval.i));
	}
    break;

  case 17:
#line 234 "go.y"
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[(1) - (2)].sym);
		importfile(&(yyvsp[(2) - (2)].val), (yyval.i));
	}
    break;

  case 18:
#line 241 "go.y"
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[(2) - (2)].val), (yyval.i));
	}
    break;

  case 19:
#line 250 "go.y"
    {
		if(importpkg->name == nil) {
			importpkg->name = (yyvsp[(2) - (4)].sym)->name;
			pkglookup((yyvsp[(2) - (4)].sym)->name, nil)->npkg++;
		} else if(strcmp(importpkg->name, (yyvsp[(2) - (4)].sym)->name) != 0)
			yyerror("conflicting names %s and %s for package \"%Z\"", importpkg->name, (yyvsp[(2) - (4)].sym)->name, importpkg->path);
		importpkg->direct = 1;
		importpkg->safe = curio.importsafe;

		if(safemode && !curio.importsafe)
			yyerror("cannot import unsafe package \"%Z\"", importpkg->path);
	}
    break;

  case 21:
#line 265 "go.y"
    {
		if(strcmp((yyvsp[(1) - (1)].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
    break;

  case 22:
#line 271 "go.y"
    {
		defercheckwidth();
	}
    break;

  case 23:
#line 275 "go.y"
    {
		resumecheckwidth();
		unimportfile();
	}
    break;

  case 24:
#line 284 "go.y"
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
    break;

  case 26:
#line 290 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 27:
#line 294 "go.y"
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
    break;

  case 28:
#line 299 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 29:
#line 305 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (2)].list);
	}
    break;

  case 30:
#line 309 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (5)].list);
	}
    break;

  case 31:
#line 313 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 32:
#line 317 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (2)].list);
		iota = -100000;
		lastconst = nil;
	}
    break;

  case 33:
#line 323 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (5)].list);
		iota = -100000;
		lastconst = nil;
	}
    break;

  case 34:
#line 329 "go.y"
    {
		(yyval.list) = concat((yyvsp[(3) - (7)].list), (yyvsp[(5) - (7)].list));
		iota = -100000;
		lastconst = nil;
	}
    break;

  case 35:
#line 335 "go.y"
    {
		(yyval.list) = nil;
		iota = -100000;
	}
    break;

  case 36:
#line 340 "go.y"
    {
		(yyval.list) = list1((yyvsp[(2) - (2)].node));
	}
    break;

  case 37:
#line 344 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (5)].list);
	}
    break;

  case 38:
#line 348 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 39:
#line 354 "go.y"
    {
		iota = 0;
	}
    break;

  case 40:
#line 360 "go.y"
    {
		(yyval.list) = variter((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node), nil);
	}
    break;

  case 41:
#line 364 "go.y"
    {
		(yyval.list) = variter((yyvsp[(1) - (4)].list), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list));
	}
    break;

  case 42:
#line 368 "go.y"
    {
		(yyval.list) = variter((yyvsp[(1) - (3)].list), nil, (yyvsp[(3) - (3)].list));
	}
    break;

  case 43:
#line 374 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (4)].list), (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].list));
	}
    break;

  case 44:
#line 378 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (3)].list), N, (yyvsp[(3) - (3)].list));
	}
    break;

  case 46:
#line 385 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node), nil);
	}
    break;

  case 47:
#line 389 "go.y"
    {
		(yyval.list) = constiter((yyvsp[(1) - (1)].list), N, nil);
	}
    break;

  case 48:
#line 395 "go.y"
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[(1) - (1)].sym));
	}
    break;

  case 49:
#line 404 "go.y"
    {
		(yyval.node) = typedcl1((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), 1);
	}
    break;

  case 50:
#line 410 "go.y"
    {
		(yyval.node) = (yyvsp[(1) - (1)].node);

		// These nodes do not carry line numbers.
		// Since a bare name used as an expression is an error,
		// introduce a wrapper node to give the correct line.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
			break;
		}
	}
    break;

  case 51:
#line 428 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		(yyval.node)->etype = (yyvsp[(2) - (3)].i);			// rathole to pass opcode
	}
    break;

  case 52:
#line 433 "go.y"
    {
		if((yyvsp[(1) - (3)].list)->next == nil && (yyvsp[(3) - (3)].list)->next == nil) {
			// simple
			(yyval.node) = nod(OAS, (yyvsp[(1) - (3)].list)->n, (yyvsp[(3) - (3)].list)->n);
			break;
		}
		// multiple
		(yyval.node) = nod(OAS2, N, N);
		(yyval.node)->list = (yyvsp[(1) - (3)].list);
		(yyval.node)->rlist = (yyvsp[(3) - (3)].list);
	}
    break;

  case 53:
#line 445 "go.y"
    {
		if((yyvsp[(3) - (3)].list)->n->op == OTYPESW) {
			(yyval.node) = nod(OTYPESW, N, (yyvsp[(3) - (3)].list)->n->right);
			if((yyvsp[(3) - (3)].list)->next != nil)
				yyerror("expr.(type) must be alone in list");
			if((yyvsp[(1) - (3)].list)->next != nil)
				yyerror("argument count mismatch: %d = %d", count((yyvsp[(1) - (3)].list)), 1);
			else if(((yyvsp[(1) - (3)].list)->n->op != ONAME && (yyvsp[(1) - (3)].list)->n->op != OTYPE && (yyvsp[(1) - (3)].list)->n->op != ONONAME) || isblank((yyvsp[(1) - (3)].list)->n))
				yyerror("invalid variable name %N in type switch", (yyvsp[(1) - (3)].list)->n);
			else
				(yyval.node)->left = dclname((yyvsp[(1) - (3)].list)->n->sym);  // it's a colas, so must not re-use an oldname.
			break;
		}
		(yyval.node) = colas((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list), (yyvsp[(2) - (3)].i));
	}
    break;

  case 54:
#line 461 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (2)].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
    break;

  case 55:
#line 467 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (2)].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
    break;

  case 56:
#line 475 "go.y"
    {
		Node *n, *nn;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = (yyvsp[(2) - (3)].list);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
    break;

  case 57:
#line 495 "go.y"
    {
		Node *n;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if((yyvsp[(2) - (5)].list)->next == nil)
			n = nod(OAS, (yyvsp[(2) - (5)].list)->n, (yyvsp[(4) - (5)].node));
		else {
			n = nod(OAS2, N, N);
			n->list = (yyvsp[(2) - (5)].list);
			n->rlist = list1((yyvsp[(4) - (5)].node));
		}
		(yyval.node)->list = list1(n);
	}
    break;

  case 58:
#line 513 "go.y"
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[(2) - (5)].list), list1((yyvsp[(4) - (5)].node)), (yyvsp[(3) - (5)].i)));
	}
    break;

  case 59:
#line 522 "go.y"
    {
		Node *n, *nn;

		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
    break;

  case 60:
#line 540 "go.y"
    {
		markdcl();
	}
    break;

  case 61:
#line 544 "go.y"
    {
		if((yyvsp[(3) - (4)].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[(3) - (4)].list));
		popdcl();
	}
    break;

  case 62:
#line 554 "go.y"
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		yylast = yychar;
		(yyvsp[(1) - (1)].node)->xoffset = block;
	}
    break;

  case 63:
#line 565 "go.y"
    {
		int last;

		// This is the only place in the language where a statement
		// list is not allowed to drop the final semicolon, because
		// it's the only place where a statement list is not followed 
		// by a closing brace.  Handle the error for pedantry.

		// Find the final token of the statement list.
		// yylast is lookahead; yyprev is last of stmt_list
		last = yyprev;

		if(last > 0 && last != ';' && yychar != '}')
			yyerror("missing statement after label");
		(yyval.node) = (yyvsp[(1) - (3)].node);
		(yyval.node)->nbody = (yyvsp[(3) - (3)].list);
		popdcl();
	}
    break;

  case 64:
#line 585 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 65:
#line 589 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
	}
    break;

  case 66:
#line 595 "go.y"
    {
		markdcl();
	}
    break;

  case 67:
#line 599 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (4)].list);
		popdcl();
	}
    break;

  case 68:
#line 606 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(4) - (4)].node));
		(yyval.node)->list = (yyvsp[(1) - (4)].list);
		(yyval.node)->etype = 0;	// := flag
	}
    break;

  case 69:
#line 612 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(4) - (4)].node));
		(yyval.node)->list = (yyvsp[(1) - (4)].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[(1) - (4)].list), (yyval.node));
	}
    break;

  case 70:
#line 619 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(2) - (2)].node));
		(yyval.node)->etype = 0; // := flag
	}
    break;

  case 71:
#line 626 "go.y"
    {
		// init ; test ; incr
		if((yyvsp[(5) - (5)].node) != N && (yyvsp[(5) - (5)].node)->colas != 0)
			yyerror("cannot declare in the for-increment");
		(yyval.node) = nod(OFOR, N, N);
		if((yyvsp[(1) - (5)].node) != N)
			(yyval.node)->ninit = list1((yyvsp[(1) - (5)].node));
		(yyval.node)->ntest = (yyvsp[(3) - (5)].node);
		(yyval.node)->nincr = (yyvsp[(5) - (5)].node);
	}
    break;

  case 72:
#line 637 "go.y"
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 74:
#line 646 "go.y"
    {
		(yyval.node) = (yyvsp[(1) - (2)].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[(2) - (2)].list));
	}
    break;

  case 75:
#line 653 "go.y"
    {
		markdcl();
	}
    break;

  case 76:
#line 657 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (3)].node);
		popdcl();
	}
    break;

  case 77:
#line 664 "go.y"
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 78:
#line 670 "go.y"
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[(1) - (3)].node) != N)
			(yyval.node)->ninit = list1((yyvsp[(1) - (3)].node));
		(yyval.node)->ntest = (yyvsp[(3) - (3)].node);
	}
    break;

  case 79:
#line 681 "go.y"
    {
		markdcl();
	}
    break;

  case 80:
#line 685 "go.y"
    {
		if((yyvsp[(3) - (3)].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
    break;

  case 81:
#line 690 "go.y"
    {
		(yyvsp[(3) - (5)].node)->nbody = (yyvsp[(5) - (5)].list);
	}
    break;

  case 82:
#line 694 "go.y"
    {
		Node *n;
		NodeList *nn;

		(yyval.node) = (yyvsp[(3) - (8)].node);
		n = (yyvsp[(3) - (8)].node);
		popdcl();
		for(nn = concat((yyvsp[(7) - (8)].list), (yyvsp[(8) - (8)].list)); nn; nn = nn->next) {
			if(nn->n->op == OIF)
				popdcl();
			n->nelse = list1(nn->n);
			n = nn->n;
		}
	}
    break;

  case 83:
#line 711 "go.y"
    {
		markdcl();
	}
    break;

  case 84:
#line 715 "go.y"
    {
		if((yyvsp[(4) - (5)].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[(4) - (5)].node)->nbody = (yyvsp[(5) - (5)].list);
		(yyval.list) = list1((yyvsp[(4) - (5)].node));
	}
    break;

  case 85:
#line 723 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 86:
#line 727 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list));
	}
    break;

  case 87:
#line 732 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 88:
#line 736 "go.y"
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[(2) - (2)].node);
		node->end = node;
		(yyval.list) = node;
	}
    break;

  case 89:
#line 747 "go.y"
    {
		markdcl();
	}
    break;

  case 90:
#line 751 "go.y"
    {
		Node *n;
		n = (yyvsp[(3) - (3)].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
    break;

  case 91:
#line 759 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (7)].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[(6) - (7)].list);
		typesw = typesw->left;
		popdcl();
	}
    break;

  case 92:
#line 769 "go.y"
    {
		typesw = nod(OXXX, typesw, N);
	}
    break;

  case 93:
#line 773 "go.y"
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
		typesw = typesw->left;
	}
    break;

  case 94:
#line 782 "go.y"
    {
		// init ; test ; incr
		if((yyvsp[(5) - (5)].node) != N && (yyvsp[(5) - (5)].node)->colas != 0)
			yyerror("cannot declare in the doselect-increment");
		(yyval.node) = nod(OFOR, N, N);
		if((yyvsp[(1) - (5)].node) != N)
			(yyval.node)->ninit = list1((yyvsp[(1) - (5)].node));
		(yyval.node)->ntest = (yyvsp[(3) - (5)].node);
		(yyval.node)->nincr = (yyvsp[(5) - (5)].node);
	}
    break;

  case 95:
#line 793 "go.y"
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 96:
#line 801 "go.y"
    {
		// for
		markdcl();	
	}
    break;

  case 97:
#line 806 "go.y"
    {
		// select
		typesw = nod(OXXX, typesw, N);
	}
    break;

  case 98:
#line 811 "go.y"
    {
		// select
		Node *nd;
		nd = nod(ODOSELECT, N, N);
		nd->lineno = typesw->lineno;
		nd->list = (yyvsp[(6) - (7)].list);
		typesw = typesw->left;

		// for
		(yyval.node) = (yyvsp[(3) - (7)].node);
		(yyval.node)->nbody = list1(nd);
		popdcl();
	}
    break;

  case 100:
#line 831 "go.y"
    {
		(yyval.node) = nod(OOROR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 101:
#line 835 "go.y"
    {
		(yyval.node) = nod(OANDAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 102:
#line 839 "go.y"
    {
		(yyval.node) = nod(OEQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 103:
#line 843 "go.y"
    {
		(yyval.node) = nod(ONE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 104:
#line 847 "go.y"
    {
		(yyval.node) = nod(OLT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 105:
#line 851 "go.y"
    {
		(yyval.node) = nod(OLE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 106:
#line 855 "go.y"
    {
		(yyval.node) = nod(OGE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 107:
#line 859 "go.y"
    {
		(yyval.node) = nod(OGT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 108:
#line 863 "go.y"
    {
		(yyval.node) = nod(OADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 109:
#line 867 "go.y"
    {
		(yyval.node) = nod(OSUB, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 110:
#line 871 "go.y"
    {
		(yyval.node) = nod(OOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 111:
#line 875 "go.y"
    {
		(yyval.node) = nod(OXOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 112:
#line 879 "go.y"
    {
		(yyval.node) = nod(OMUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 113:
#line 883 "go.y"
    {
		(yyval.node) = nod(ODIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 114:
#line 887 "go.y"
    {
		(yyval.node) = nod(OMOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 115:
#line 891 "go.y"
    {
		(yyval.node) = nod(OAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 116:
#line 895 "go.y"
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 117:
#line 899 "go.y"
    {
		(yyval.node) = nod(OLSH, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 118:
#line 903 "go.y"
    {
		(yyval.node) = nod(ORSH, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 119:
#line 908 "go.y"
    {
		(yyval.node) = nod(OSEND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 121:
#line 915 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 122:
#line 919 "go.y"
    {
		if((yyvsp[(2) - (2)].node)->op == OCOMPLIT) {
			// Special case for &T{...}: turn into (*T){...}.
			(yyval.node) = (yyvsp[(2) - (2)].node);
			(yyval.node)->right = nod(OIND, (yyval.node)->right, N);
			(yyval.node)->right->implicit = 1;
		} else {
			(yyval.node) = nod(OADDR, (yyvsp[(2) - (2)].node), N);
		}
	}
    break;

  case 123:
#line 930 "go.y"
    {
		(yyval.node) = nod(OPLUS, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 124:
#line 934 "go.y"
    {
		(yyval.node) = nod(OMINUS, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 125:
#line 938 "go.y"
    {
		(yyval.node) = nod(ONOT, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 126:
#line 942 "go.y"
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 127:
#line 947 "go.y"
    {
		(yyval.node) = nod(OCOM, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 128:
#line 951 "go.y"
    {
		(yyval.node) = nod(ORECV, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 129:
#line 961 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (3)].node), N);
	}
    break;

  case 130:
#line 965 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (5)].node), N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
	}
    break;

  case 131:
#line 970 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (6)].node), N);
		(yyval.node)->list = (yyvsp[(3) - (6)].list);
		(yyval.node)->isddd = 1;
	}
    break;

  case 132:
#line 978 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(1) - (1)].val));
	}
    break;

  case 134:
#line 983 "go.y"
    {
		if((yyvsp[(1) - (3)].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[(3) - (3)].sym)->name, (yyvsp[(1) - (3)].node)->pkg);
			(yyvsp[(1) - (3)].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[(1) - (3)].node), newname((yyvsp[(3) - (3)].sym)));
	}
    break;

  case 135:
#line 994 "go.y"
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
	}
    break;

  case 136:
#line 998 "go.y"
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[(1) - (5)].node));
	}
    break;

  case 137:
#line 1002 "go.y"
    {
		(yyval.node) = nod(OINDEX, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
	}
    break;

  case 138:
#line 1006 "go.y"
    {
		(yyval.node) = nod(OSLICE, (yyvsp[(1) - (6)].node), nod(OKEY, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node)));
	}
    break;

  case 139:
#line 1010 "go.y"
    {
		if((yyvsp[(5) - (8)].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[(7) - (8)].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[(1) - (8)].node), nod(OKEY, (yyvsp[(3) - (8)].node), nod(OKEY, (yyvsp[(5) - (8)].node), (yyvsp[(7) - (8)].node))));
	}
    break;

  case 141:
#line 1019 "go.y"
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (5)].node), N);
		(yyval.node)->list = list1((yyvsp[(3) - (5)].node));
	}
    break;

  case 142:
#line 1025 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (5)].node);
		(yyval.node)->right = (yyvsp[(1) - (5)].node);
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 143:
#line 1032 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (5)].node);
		(yyval.node)->right = (yyvsp[(1) - (5)].node);
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
	}
    break;

  case 144:
#line 1038 "go.y"
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[(5) - (7)].node);
		(yyval.node)->right = (yyvsp[(2) - (7)].node);
		(yyval.node)->list = (yyvsp[(6) - (7)].list);
	}
    break;

  case 146:
#line 1047 "go.y"
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
    break;

  case 147:
#line 1055 "go.y"
    {
		(yyval.node) = nod(OKEY, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 148:
#line 1061 "go.y"
    {
		// These nodes do not carry line numbers.
		// Since a composite literal commonly spans several lines,
		// the line number on errors may be misleading.
		// Introduce a wrapper node to give the correct line.
		(yyval.node) = (yyvsp[(1) - (1)].node);
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
		}
	}
    break;

  case 149:
#line 1078 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (4)].node);
		(yyval.node)->list = (yyvsp[(3) - (4)].list);
	}
    break;

  case 151:
#line 1086 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (4)].node);
		(yyval.node)->list = (yyvsp[(3) - (4)].list);
	}
    break;

  case 153:
#line 1094 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
		
		// Need to know on lhs of := whether there are ( ).
		// Don't bother with the OPAREN in other cases:
		// it's just a waste of memory and time.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OPACK:
		case OTYPE:
		case OLITERAL:
		case OTYPESW:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
		}
	}
    break;

  case 157:
#line 1120 "go.y"
    {
		(yyval.i) = LBODY;
	}
    break;

  case 158:
#line 1124 "go.y"
    {
		(yyval.i) = '{';
	}
    break;

  case 159:
#line 1135 "go.y"
    {
		if((yyvsp[(1) - (1)].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[(1) - (1)].sym));
	}
    break;

  case 160:
#line 1144 "go.y"
    {
		(yyval.node) = dclname((yyvsp[(1) - (1)].sym));
	}
    break;

  case 161:
#line 1149 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 163:
#line 1156 "go.y"
    {
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[(1) - (1)].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg);
	}
    break;

  case 165:
#line 1164 "go.y"
    {
		(yyval.sym) = S;
	}
    break;

  case 166:
#line 1170 "go.y"
    {
		Pkg *p;

		if((yyvsp[(2) - (4)].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[(2) - (4)].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[(2) - (4)].val).u.sval);
		}
		(yyval.sym) = pkglookup((yyvsp[(4) - (4)].sym)->name, p);
	}
    break;

  case 167:
#line 1183 "go.y"
    {
		Pkg *p;

		if((yyvsp[(2) - (4)].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[(2) - (4)].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[(2) - (4)].val).u.sval);
		}
		(yyval.sym) = pkglookup("?", p);
	}
    break;

  case 168:
#line 1198 "go.y"
    {
		(yyval.node) = oldname((yyvsp[(1) - (1)].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
    break;

  case 170:
#line 1218 "go.y"
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
    break;

  case 171:
#line 1223 "go.y"
    {
		(yyval.node) = nod(ODDD, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 177:
#line 1234 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
	}
    break;

  case 181:
#line 1243 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 186:
#line 1253 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
	}
    break;

  case 196:
#line 1274 "go.y"
    {
		if((yyvsp[(1) - (3)].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[(3) - (3)].sym)->name, (yyvsp[(1) - (3)].node)->pkg);
			(yyvsp[(1) - (3)].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[(1) - (3)].node), newname((yyvsp[(3) - (3)].sym)));
	}
    break;

  case 197:
#line 1287 "go.y"
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
	}
    break;

  case 198:
#line 1291 "go.y"
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[(4) - (4)].node));
	}
    break;

  case 199:
#line 1296 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(2) - (2)].node), N);
		(yyval.node)->etype = Cboth;
	}
    break;

  case 200:
#line 1301 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(3) - (3)].node), N);
		(yyval.node)->etype = Csend;
	}
    break;

  case 201:
#line 1306 "go.y"
    {
		(yyval.node) = nod(OTMAP, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
	}
    break;

  case 204:
#line 1314 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 205:
#line 1320 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(3) - (3)].node), N);
		(yyval.node)->etype = Crecv;
	}
    break;

  case 206:
#line 1327 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 207:
#line 1333 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[(2) - (3)].i));
	}
    break;

  case 208:
#line 1340 "go.y"
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 209:
#line 1346 "go.y"
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[(2) - (3)].i));
	}
    break;

  case 210:
#line 1357 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
		if((yyval.node) == N)
			break;
		if(noescape && (yyvsp[(3) - (3)].list) != nil)
			yyerror("can only use //go:noescape with external func implementations");
		(yyval.node)->nbody = (yyvsp[(3) - (3)].list);
		(yyval.node)->endlineno = lineno;
		(yyval.node)->noescape = noescape;
		(yyval.node)->nosplit = nosplit;
		funcbody((yyval.node));
	}
    break;

  case 211:
#line 1372 "go.y"
    {
		Node *t;

		(yyval.node) = N;
		(yyvsp[(3) - (5)].list) = checkarglist((yyvsp[(3) - (5)].list), 1);

		if(strcmp((yyvsp[(1) - (5)].sym)->name, "init") == 0) {
			(yyvsp[(1) - (5)].sym) = renameinit();
			if((yyvsp[(3) - (5)].list) != nil || (yyvsp[(5) - (5)].list) != nil)
				yyerror("func init must have no arguments and no return values");
		}
		if(strcmp(localpkg->name, "main") == 0 && strcmp((yyvsp[(1) - (5)].sym)->name, "main") == 0) {
			if((yyvsp[(3) - (5)].list) != nil || (yyvsp[(5) - (5)].list) != nil)
				yyerror("func main must have no arguments and no return values");
		}

		t = nod(OTFUNC, N, N);
		t->list = (yyvsp[(3) - (5)].list);
		t->rlist = (yyvsp[(5) - (5)].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->nname = newname((yyvsp[(1) - (5)].sym));
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;		// TODO: check if nname already has an ntype
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
    break;

  case 212:
#line 1401 "go.y"
    {
		Node *rcvr, *t;

		(yyval.node) = N;
		(yyvsp[(2) - (8)].list) = checkarglist((yyvsp[(2) - (8)].list), 0);
		(yyvsp[(6) - (8)].list) = checkarglist((yyvsp[(6) - (8)].list), 1);

		if((yyvsp[(2) - (8)].list) == nil) {
			yyerror("method has no receiver");
			break;
		}
		if((yyvsp[(2) - (8)].list)->next != nil) {
			yyerror("method has multiple receivers");
			break;
		}
		rcvr = (yyvsp[(2) - (8)].list)->n;
		if(rcvr->op != ODCLFIELD) {
			yyerror("bad receiver in method");
			break;
		}

		t = nod(OTFUNC, rcvr, N);
		t->list = (yyvsp[(6) - (8)].list);
		t->rlist = (yyvsp[(8) - (8)].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->shortname = newname((yyvsp[(4) - (8)].sym));
		(yyval.node)->nname = methodname1((yyval.node)->shortname, rcvr->right);
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;
		(yyval.node)->nname->nointerface = nointerface;
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
    break;

  case 213:
#line 1439 "go.y"
    {
		Sym *s;
		Type *t;

		(yyval.node) = N;

		s = (yyvsp[(1) - (5)].sym);
		t = functype(N, (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list));

		importsym(s, ONAME);
		if(s->def != N && s->def->op == ONAME) {
			if(eqtype(t, s->def->type)) {
				dclcontext = PDISCARD;  // since we skip funchdr below
				break;
			}
			yyerror("inconsistent definition for func %S during import\n\t%T\n\t%T", s, s->def->type, t);
		}

		(yyval.node) = newname(s);
		(yyval.node)->type = t;
		declare((yyval.node), PFUNC);

		funchdr((yyval.node));
	}
    break;

  case 214:
#line 1464 "go.y"
    {
		(yyval.node) = methodname1(newname((yyvsp[(4) - (8)].sym)), (yyvsp[(2) - (8)].list)->n->right); 
		(yyval.node)->type = functype((yyvsp[(2) - (8)].list)->n, (yyvsp[(6) - (8)].list), (yyvsp[(8) - (8)].list));

		checkwidth((yyval.node)->type);
		addmethod((yyvsp[(4) - (8)].sym), (yyval.node)->type, 0, nointerface);
		nointerface = 0;
		funchdr((yyval.node));
		
		// inl.c's inlnode in on a dotmeth node expects to find the inlineable body as
		// (dotmeth's type)->nname->inl, and dotmeth's type has been pulled
		// out by typecheck's lookdot as this $$->ttype.  So by providing
		// this back link here we avoid special casing there.
		(yyval.node)->type->nname = (yyval.node);
	}
    break;

  case 215:
#line 1482 "go.y"
    {
		(yyvsp[(3) - (5)].list) = checkarglist((yyvsp[(3) - (5)].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		(yyval.node)->rlist = (yyvsp[(5) - (5)].list);
	}
    break;

  case 216:
#line 1490 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 217:
#line 1494 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (3)].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
    break;

  case 218:
#line 1502 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 219:
#line 1506 "go.y"
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[(1) - (1)].node)));
	}
    break;

  case 220:
#line 1510 "go.y"
    {
		(yyvsp[(2) - (3)].list) = checkarglist((yyvsp[(2) - (3)].list), 0);
		(yyval.list) = (yyvsp[(2) - (3)].list);
	}
    break;

  case 221:
#line 1517 "go.y"
    {
		closurehdr((yyvsp[(1) - (1)].node));
	}
    break;

  case 222:
#line 1523 "go.y"
    {
		(yyval.node) = closurebody((yyvsp[(3) - (4)].list));
		fixlbrace((yyvsp[(2) - (4)].i));
	}
    break;

  case 223:
#line 1528 "go.y"
    {
		(yyval.node) = closurebody(nil);
	}
    break;

  case 224:
#line 1539 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 225:
#line 1543 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(2) - (3)].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
	}
    break;

  case 227:
#line 1555 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 229:
#line 1562 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 230:
#line 1568 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 231:
#line 1572 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 233:
#line 1579 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 234:
#line 1585 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 235:
#line 1589 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 236:
#line 1595 "go.y"
    {
		NodeList *l;

		Node *n;
		l = (yyvsp[(1) - (3)].list);
		if(l == nil) {
			// ? symbol, during import (list1(N) == nil)
			n = (yyvsp[(2) - (3)].node);
			if(n->op == OIND)
				n = n->left;
			n = embedded(n->sym, importpkg);
			n->right = (yyvsp[(2) - (3)].node);
			n->val = (yyvsp[(3) - (3)].val);
			(yyval.list) = list1(n);
			break;
		}

		for(l=(yyvsp[(1) - (3)].list); l; l=l->next) {
			l->n = nod(ODCLFIELD, l->n, (yyvsp[(2) - (3)].node));
			l->n->val = (yyvsp[(3) - (3)].val);
		}
	}
    break;

  case 237:
#line 1618 "go.y"
    {
		(yyvsp[(1) - (2)].node)->val = (yyvsp[(2) - (2)].val);
		(yyval.list) = list1((yyvsp[(1) - (2)].node));
	}
    break;

  case 238:
#line 1623 "go.y"
    {
		(yyvsp[(2) - (4)].node)->val = (yyvsp[(4) - (4)].val);
		(yyval.list) = list1((yyvsp[(2) - (4)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 239:
#line 1629 "go.y"
    {
		(yyvsp[(2) - (3)].node)->right = nod(OIND, (yyvsp[(2) - (3)].node)->right, N);
		(yyvsp[(2) - (3)].node)->val = (yyvsp[(3) - (3)].val);
		(yyval.list) = list1((yyvsp[(2) - (3)].node));
	}
    break;

  case 240:
#line 1635 "go.y"
    {
		(yyvsp[(3) - (5)].node)->right = nod(OIND, (yyvsp[(3) - (5)].node)->right, N);
		(yyvsp[(3) - (5)].node)->val = (yyvsp[(5) - (5)].val);
		(yyval.list) = list1((yyvsp[(3) - (5)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 241:
#line 1642 "go.y"
    {
		(yyvsp[(3) - (5)].node)->right = nod(OIND, (yyvsp[(3) - (5)].node)->right, N);
		(yyvsp[(3) - (5)].node)->val = (yyvsp[(5) - (5)].val);
		(yyval.list) = list1((yyvsp[(3) - (5)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 242:
#line 1651 "go.y"
    {
		Node *n;

		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		n = oldname((yyvsp[(1) - (1)].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
    break;

  case 243:
#line 1660 "go.y"
    {
		Pkg *pkg;

		if((yyvsp[(1) - (3)].sym)->def == N || (yyvsp[(1) - (3)].sym)->def->op != OPACK) {
			yyerror("%S is not a package", (yyvsp[(1) - (3)].sym));
			pkg = localpkg;
		} else {
			(yyvsp[(1) - (3)].sym)->def->used = 1;
			pkg = (yyvsp[(1) - (3)].sym)->def->pkg;
		}
		(yyval.sym) = restrictlookup((yyvsp[(3) - (3)].sym)->name, pkg);
	}
    break;

  case 244:
#line 1675 "go.y"
    {
		(yyval.node) = embedded((yyvsp[(1) - (1)].sym), localpkg);
	}
    break;

  case 245:
#line 1681 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		ifacedcl((yyval.node));
	}
    break;

  case 246:
#line 1686 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[(1) - (1)].sym)));
	}
    break;

  case 247:
#line 1690 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[(2) - (3)].sym)));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 248:
#line 1697 "go.y"
    {
		// without func keyword
		(yyvsp[(2) - (4)].list) = checkarglist((yyvsp[(2) - (4)].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[(2) - (4)].list);
		(yyval.node)->rlist = (yyvsp[(4) - (4)].list);
	}
    break;

  case 250:
#line 1711 "go.y"
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[(1) - (2)].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[(2) - (2)].node));
	}
    break;

  case 251:
#line 1717 "go.y"
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[(1) - (2)].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[(2) - (2)].node));
	}
    break;

  case 253:
#line 1726 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 254:
#line 1730 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 255:
#line 1735 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 256:
#line 1739 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (2)].list);
	}
    break;

  case 257:
#line 1747 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 259:
#line 1752 "go.y"
    {
		(yyval.node) = liststmt((yyvsp[(1) - (1)].list));
	}
    break;

  case 261:
#line 1757 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 268:
#line 1769 "go.y"
    {
		(yyvsp[(1) - (2)].node) = nod(OLABEL, (yyvsp[(1) - (2)].node), N);
		(yyvsp[(1) - (2)].node)->sym = dclstack;  // context, for goto restrictions
	}
    break;

  case 269:
#line 1774 "go.y"
    {
		NodeList *l;

		(yyvsp[(1) - (4)].node)->defn = (yyvsp[(4) - (4)].node);
		l = list1((yyvsp[(1) - (4)].node));
		if((yyvsp[(4) - (4)].node))
			l = list(l, (yyvsp[(4) - (4)].node));
		(yyval.node) = liststmt(l);
	}
    break;

  case 270:
#line 1784 "go.y"
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
    break;

  case 271:
#line 1790 "go.y"
    {
		(yyval.node) = nod(OBREAK, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 272:
#line 1794 "go.y"
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 273:
#line 1798 "go.y"
    {
		(yyval.node) = nod(OPROC, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 274:
#line 1802 "go.y"
    {
		(yyval.node) = nod(ODEFER, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 275:
#line 1806 "go.y"
    {
		(yyval.node) = nod(OGOTO, (yyvsp[(2) - (2)].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
    break;

  case 276:
#line 1811 "go.y"
    {
		(yyval.node) = nod(ORETURN, N, N);
		(yyval.node)->list = (yyvsp[(2) - (2)].list);
		if((yyval.node)->list == nil && curfn != N) {
			NodeList *l;

			for(l=curfn->dcl; l; l=l->next) {
				if(l->n->class == PPARAM)
					continue;
				if(l->n->class != PPARAMOUT)
					break;
				if(l->n->sym->def != l->n)
					yyerror("%s is shadowed during return", l->n->sym->name);
			}
		}
	}
    break;

  case 277:
#line 1830 "go.y"
    {
		(yyval.list) = nil;
		if((yyvsp[(1) - (1)].node) != N)
			(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 278:
#line 1836 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (3)].list);
		if((yyvsp[(3) - (3)].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 279:
#line 1844 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 280:
#line 1848 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 281:
#line 1854 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 282:
#line 1858 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 283:
#line 1864 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 284:
#line 1868 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 285:
#line 1874 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 286:
#line 1878 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 287:
#line 1887 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 288:
#line 1891 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 289:
#line 1895 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 290:
#line 1899 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 291:
#line 1904 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 292:
#line 1908 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (2)].list);
	}
    break;

  case 297:
#line 1922 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 299:
#line 1928 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 301:
#line 1934 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 303:
#line 1940 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 305:
#line 1946 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 307:
#line 1952 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 309:
#line 1958 "go.y"
    {
		(yyval.val).ctype = CTxxx;
	}
    break;

  case 311:
#line 1968 "go.y"
    {
		importimport((yyvsp[(2) - (4)].sym), (yyvsp[(3) - (4)].val).u.sval);
	}
    break;

  case 312:
#line 1972 "go.y"
    {
		importvar((yyvsp[(2) - (4)].sym), (yyvsp[(3) - (4)].type));
	}
    break;

  case 313:
#line 1976 "go.y"
    {
		importconst((yyvsp[(2) - (5)].sym), types[TIDEAL], (yyvsp[(4) - (5)].node));
	}
    break;

  case 314:
#line 1980 "go.y"
    {
		importconst((yyvsp[(2) - (6)].sym), (yyvsp[(3) - (6)].type), (yyvsp[(5) - (6)].node));
	}
    break;

  case 315:
#line 1984 "go.y"
    {
		importtype((yyvsp[(2) - (4)].type), (yyvsp[(3) - (4)].type));
	}
    break;

  case 316:
#line 1988 "go.y"
    {
		if((yyvsp[(2) - (4)].node) == N) {
			dclcontext = PEXTERN;  // since we skip the funcbody below
			break;
		}

		(yyvsp[(2) - (4)].node)->inl = (yyvsp[(3) - (4)].list);

		funcbody((yyvsp[(2) - (4)].node));
		importlist = list(importlist, (yyvsp[(2) - (4)].node));

		if(debug['E']) {
			print("import [%Z] func %lN \n", importpkg->path, (yyvsp[(2) - (4)].node));
			if(debug['m'] > 2 && (yyvsp[(2) - (4)].node)->inl)
				print("inl body:%+H\n", (yyvsp[(2) - (4)].node)->inl);
		}
	}
    break;

  case 317:
#line 2008 "go.y"
    {
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		structpkg = (yyval.sym)->pkg;
	}
    break;

  case 318:
#line 2015 "go.y"
    {
		(yyval.type) = pkgtype((yyvsp[(1) - (1)].sym));
		importsym((yyvsp[(1) - (1)].sym), OTYPE);
	}
    break;

  case 324:
#line 2035 "go.y"
    {
		(yyval.type) = pkgtype((yyvsp[(1) - (1)].sym));
	}
    break;

  case 325:
#line 2039 "go.y"
    {
		// predefined name like uint8
		(yyvsp[(1) - (1)].sym) = pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg);
		if((yyvsp[(1) - (1)].sym)->def == N || (yyvsp[(1) - (1)].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[(1) - (1)].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[(1) - (1)].sym)->def->type;
	}
    break;

  case 326:
#line 2049 "go.y"
    {
		(yyval.type) = aindex(N, (yyvsp[(3) - (3)].type));
	}
    break;

  case 327:
#line 2053 "go.y"
    {
		(yyval.type) = aindex(nodlit((yyvsp[(2) - (4)].val)), (yyvsp[(4) - (4)].type));
	}
    break;

  case 328:
#line 2057 "go.y"
    {
		(yyval.type) = maptype((yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].type));
	}
    break;

  case 329:
#line 2061 "go.y"
    {
		(yyval.type) = tostruct((yyvsp[(3) - (4)].list));
	}
    break;

  case 330:
#line 2065 "go.y"
    {
		(yyval.type) = tointerface((yyvsp[(3) - (4)].list));
	}
    break;

  case 331:
#line 2069 "go.y"
    {
		(yyval.type) = ptrto((yyvsp[(2) - (2)].type));
	}
    break;

  case 332:
#line 2073 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(2) - (2)].type);
		(yyval.type)->chan = Cboth;
	}
    break;

  case 333:
#line 2079 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (4)].type);
		(yyval.type)->chan = Cboth;
	}
    break;

  case 334:
#line 2085 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (3)].type);
		(yyval.type)->chan = Csend;
	}
    break;

  case 335:
#line 2093 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (3)].type);
		(yyval.type)->chan = Crecv;
	}
    break;

  case 336:
#line 2101 "go.y"
    {
		(yyval.type) = functype(nil, (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list));
	}
    break;

  case 337:
#line 2107 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[(2) - (3)].type)));
		if((yyvsp[(1) - (3)].sym))
			(yyval.node)->left = newname((yyvsp[(1) - (3)].sym));
		(yyval.node)->val = (yyvsp[(3) - (3)].val);
	}
    break;

  case 338:
#line 2114 "go.y"
    {
		Type *t;
	
		t = typ(TARRAY);
		t->bound = -1;
		t->type = (yyvsp[(3) - (4)].type);

		(yyval.node) = nod(ODCLFIELD, N, typenod(t));
		if((yyvsp[(1) - (4)].sym))
			(yyval.node)->left = newname((yyvsp[(1) - (4)].sym));
		(yyval.node)->isddd = 1;
		(yyval.node)->val = (yyvsp[(4) - (4)].val);
	}
    break;

  case 339:
#line 2130 "go.y"
    {
		Sym *s;
		Pkg *p;

		if((yyvsp[(1) - (3)].sym) != S && strcmp((yyvsp[(1) - (3)].sym)->name, "?") != 0) {
			(yyval.node) = nod(ODCLFIELD, newname((yyvsp[(1) - (3)].sym)), typenod((yyvsp[(2) - (3)].type)));
			(yyval.node)->val = (yyvsp[(3) - (3)].val);
		} else {
			s = (yyvsp[(2) - (3)].type)->sym;
			if(s == S && isptr[(yyvsp[(2) - (3)].type)->etype])
				s = (yyvsp[(2) - (3)].type)->type->sym;
			p = importpkg;
			if((yyvsp[(1) - (3)].sym) != S)
				p = (yyvsp[(1) - (3)].sym)->pkg;
			(yyval.node) = embedded(s, p);
			(yyval.node)->right = typenod((yyvsp[(2) - (3)].type));
			(yyval.node)->val = (yyvsp[(3) - (3)].val);
		}
	}
    break;

  case 340:
#line 2152 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[(1) - (5)].sym)), typenod(functype(fakethis(), (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list))));
	}
    break;

  case 341:
#line 2156 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[(1) - (1)].type)));
	}
    break;

  case 342:
#line 2161 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 344:
#line 2168 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (3)].list);
	}
    break;

  case 345:
#line 2172 "go.y"
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[(1) - (1)].type))));
	}
    break;

  case 346:
#line 2182 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(1) - (1)].val));
	}
    break;

  case 347:
#line 2186 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(2) - (2)].val));
		switch((yyval.node)->val.ctype){
		case CTINT:
		case CTRUNE:
			mpnegfix((yyval.node)->val.u.xval);
			break;
		case CTFLT:
			mpnegflt((yyval.node)->val.u.fval);
			break;
		case CTCPLX:
			mpnegflt(&(yyval.node)->val.u.cval->real);
			mpnegflt(&(yyval.node)->val.u.cval->imag);
			break;
		default:
			yyerror("bad negated constant");
		}
	}
    break;

  case 348:
#line 2205 "go.y"
    {
		(yyval.node) = oldname(pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
    break;

  case 350:
#line 2214 "go.y"
    {
		if((yyvsp[(2) - (5)].node)->val.ctype == CTRUNE && (yyvsp[(4) - (5)].node)->val.ctype == CTINT) {
			(yyval.node) = (yyvsp[(2) - (5)].node);
			mpaddfixfix((yyvsp[(2) - (5)].node)->val.u.xval, (yyvsp[(4) - (5)].node)->val.u.xval, 0);
			break;
		}
		(yyvsp[(4) - (5)].node)->val.u.cval->real = (yyvsp[(4) - (5)].node)->val.u.cval->imag;
		mpmovecflt(&(yyvsp[(4) - (5)].node)->val.u.cval->imag, 0.0);
		(yyval.node) = nodcplxlit((yyvsp[(2) - (5)].node)->val, (yyvsp[(4) - (5)].node)->val);
	}
    break;

  case 353:
#line 2230 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 354:
#line 2234 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 355:
#line 2240 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 356:
#line 2244 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 357:
#line 2250 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 358:
#line 2254 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;


/* Line 1267 of yacc.c.  */
#line 4998 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2258 "go.y"


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}


