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
#define YYLAST   2313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  361
/* YYNRULES -- Number of states.  */
#define YYNSTATES  688

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
     162,   165,   167,   171,   175,   179,   182,   185,   189,   195,
     201,   204,   205,   210,   211,   215,   216,   219,   220,   225,
     230,   235,   238,   244,   246,   248,   251,   252,   256,   258,
     262,   263,   264,   265,   274,   275,   281,   282,   285,   286,
     289,   290,   291,   299,   300,   306,   312,   314,   315,   316,
     324,   326,   330,   334,   338,   342,   346,   350,   354,   358,
     362,   366,   370,   374,   378,   382,   386,   390,   394,   398,
     402,   406,   408,   411,   414,   417,   420,   423,   426,   429,
     432,   436,   442,   449,   451,   453,   457,   463,   469,   474,
     481,   490,   492,   498,   504,   510,   518,   520,   521,   525,
     527,   532,   534,   539,   541,   545,   547,   549,   551,   553,
     555,   557,   559,   560,   562,   564,   566,   568,   573,   578,
     580,   582,   584,   587,   589,   591,   593,   595,   597,   601,
     603,   605,   607,   610,   612,   614,   616,   618,   622,   624,
     626,   628,   630,   632,   634,   636,   638,   640,   644,   649,
     654,   657,   661,   667,   669,   671,   674,   678,   684,   688,
     693,   696,   702,   706,   710,   716,   725,   731,   740,   746,
     747,   751,   752,   754,   758,   760,   765,   768,   769,   773,
     775,   779,   781,   785,   787,   791,   793,   797,   799,   803,
     807,   810,   815,   819,   825,   831,   833,   837,   839,   842,
     844,   848,   853,   855,   858,   861,   863,   865,   869,   870,
     873,   874,   876,   878,   880,   882,   884,   886,   888,   890,
     892,   894,   895,   900,   902,   905,   908,   911,   914,   917,
     920,   922,   926,   928,   932,   934,   938,   940,   944,   946,
     950,   952,   954,   958,   962,   963,   966,   967,   969,   970,
     972,   973,   975,   976,   978,   979,   981,   982,   984,   985,
     987,   988,   990,   991,   993,   998,  1003,  1009,  1016,  1021,
    1026,  1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,
    1048,  1053,  1059,  1064,  1069,  1072,  1075,  1080,  1084,  1088,
    1094,  1098,  1103,  1107,  1113,  1115,  1116,  1118,  1122,  1124,
    1126,  1129,  1131,  1133,  1139,  1140,  1143,  1145,  1149,  1151,
    1155,  1157
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      78,     0,    -1,    80,    79,    82,   172,    -1,    -1,    26,
     146,    63,    -1,    -1,    81,    87,    89,    -1,    -1,    82,
      83,    63,    -1,    22,    84,    -1,    22,    60,    85,   196,
      61,    -1,    22,    60,    61,    -1,    86,    87,    89,    -1,
      86,    89,    -1,    84,    -1,    85,    63,    84,    -1,     3,
      -1,   146,     3,    -1,    64,     3,    -1,    26,    25,    88,
      63,    -1,    -1,    25,    -1,    -1,    90,   220,    65,    65,
      -1,    -1,    92,    -1,   164,    -1,   187,    -1,     1,    -1,
      33,    94,    -1,    33,    60,   173,   196,    61,    -1,    33,
      60,    61,    -1,    93,    95,    -1,    93,    60,    95,   196,
      61,    -1,    93,    60,    95,    63,   174,   196,    61,    -1,
      93,    60,    61,    -1,    32,    98,    -1,    32,    60,   175,
     196,    61,    -1,    32,    60,    61,    -1,     9,    -1,   191,
     151,    -1,   191,   151,    66,   192,    -1,   191,    66,   192,
      -1,   191,   151,    66,   192,    -1,   191,    66,   192,    -1,
      95,    -1,   191,   151,    -1,   191,    -1,   146,    -1,    97,
     151,    -1,    97,   162,    -1,   131,    -1,   131,     4,   131,
      -1,   192,    66,   192,    -1,   192,     5,   192,    -1,   131,
      43,    -1,   131,    38,    -1,     7,   193,    67,    -1,     7,
     193,    66,   131,    67,    -1,     7,   193,     5,   131,    67,
      -1,    13,    67,    -1,    -1,    68,   102,   189,    69,    -1,
      -1,   100,   104,   189,    -1,    -1,   105,   103,    -1,    -1,
      36,   107,   189,    69,    -1,   192,    66,    27,   131,    -1,
     192,     5,    27,   131,    -1,    27,   131,    -1,   200,    63,
     200,    63,   200,    -1,   200,    -1,   108,    -1,   109,   106,
      -1,    -1,    17,   112,   110,    -1,   200,    -1,   200,    63,
     200,    -1,    -1,    -1,    -1,    21,   115,   113,   116,   106,
     117,   120,   121,    -1,    -1,    15,    21,   119,   113,   106,
      -1,    -1,   120,   118,    -1,    -1,    15,   101,    -1,    -1,
      -1,    31,   123,   113,   124,    36,   105,    69,    -1,    -1,
      29,   126,    36,   105,    69,    -1,   200,    63,   200,    63,
     200,    -1,   200,    -1,    -1,    -1,    11,   129,   127,   130,
      36,   105,    69,    -1,   132,    -1,   131,    48,   131,    -1,
     131,    34,   131,    -1,   131,    39,   131,    -1,   131,    47,
     131,    -1,   131,    46,   131,    -1,   131,    44,   131,    -1,
     131,    40,   131,    -1,   131,    41,   131,    -1,   131,    50,
     131,    -1,   131,    51,   131,    -1,   131,    52,   131,    -1,
     131,    53,   131,    -1,   131,    54,   131,    -1,   131,    55,
     131,    -1,   131,    56,   131,    -1,   131,    57,   131,    -1,
     131,    35,   131,    -1,   131,    45,   131,    -1,   131,    49,
     131,    -1,   131,    37,   131,    -1,   139,    -1,    54,   132,
      -1,    57,   132,    -1,    50,   132,    -1,    51,   132,    -1,
      70,   132,    -1,    71,   132,    -1,    53,   132,    -1,    37,
     132,    -1,   139,    60,    61,    -1,   139,    60,   193,   197,
      61,    -1,   139,    60,   193,    12,   197,    61,    -1,     3,
      -1,   148,    -1,   139,    64,   146,    -1,   139,    64,    60,
     140,    61,    -1,   139,    64,    60,    32,    61,    -1,   139,
      72,   131,    73,    -1,   139,    72,   198,    67,   198,    73,
      -1,   139,    72,   198,    67,   198,    67,   198,    73,    -1,
     133,    -1,   154,    60,   131,   197,    61,    -1,   155,   142,
     135,   195,    69,    -1,   134,    68,   135,   195,    69,    -1,
      60,   140,    61,    68,   135,   195,    69,    -1,   171,    -1,
      -1,   131,    67,   138,    -1,   131,    -1,    68,   135,   195,
      69,    -1,   131,    -1,    68,   135,   195,    69,    -1,   134,
      -1,    60,   140,    61,    -1,   131,    -1,   152,    -1,   151,
      -1,    36,    -1,    68,    -1,   146,    -1,   146,    -1,    -1,
     143,    -1,    25,    -1,   147,    -1,    74,    -1,    75,     3,
      64,    25,    -1,    75,     3,    64,    74,    -1,   146,    -1,
     143,    -1,    12,    -1,    12,   151,    -1,   160,    -1,   167,
      -1,   158,    -1,   159,    -1,   157,    -1,    60,   151,    61,
      -1,   160,    -1,   167,    -1,   158,    -1,    54,   152,    -1,
     167,    -1,   158,    -1,   159,    -1,   157,    -1,    60,   151,
      61,    -1,   167,    -1,   158,    -1,   158,    -1,   160,    -1,
     167,    -1,   158,    -1,   159,    -1,   157,    -1,   148,    -1,
     148,    64,   146,    -1,    72,   198,    73,   151,    -1,    72,
      12,    73,   151,    -1,     8,   153,    -1,     8,    37,   151,
      -1,    24,    72,   151,    73,   151,    -1,   161,    -1,   163,
      -1,    54,   151,    -1,    37,     8,   151,    -1,    30,   142,
     176,   196,    69,    -1,    30,   142,    69,    -1,   142,   176,
     196,    69,    -1,   142,    69,    -1,    23,   142,   177,   196,
      69,    -1,    23,   142,    69,    -1,    18,   165,   168,    -1,
     146,    60,   185,    61,   169,    -1,    60,   185,    61,   146,
      60,   185,    61,   169,    -1,   206,    60,   201,    61,   216,
      -1,    60,   221,    61,   146,    60,   201,    61,   216,    -1,
      18,    60,   185,    61,   169,    -1,    -1,    68,   189,    69,
      -1,    -1,   156,    -1,    60,   185,    61,    -1,   167,    -1,
     170,   142,   189,    69,    -1,   170,     1,    -1,    -1,   172,
      91,    63,    -1,    94,    -1,   173,    63,    94,    -1,    96,
      -1,   174,    63,    96,    -1,    98,    -1,   175,    63,    98,
      -1,   178,    -1,   176,    63,   178,    -1,   181,    -1,   177,
      63,   181,    -1,   190,   151,   204,    -1,   180,   204,    -1,
      60,   180,    61,   204,    -1,    54,   180,   204,    -1,    60,
      54,   180,    61,   204,    -1,    54,    60,   180,    61,   204,
      -1,    25,    -1,    25,    64,   146,    -1,   179,    -1,   143,
     182,    -1,   179,    -1,    60,   179,    61,    -1,    60,   185,
      61,   169,    -1,   141,    -1,   146,   141,    -1,   146,   150,
      -1,   150,    -1,   183,    -1,   184,    76,   183,    -1,    -1,
     184,   197,    -1,    -1,   101,    -1,    92,    -1,   187,    -1,
       1,    -1,    99,    -1,   111,    -1,   122,    -1,   125,    -1,
     128,    -1,   114,    -1,    -1,   149,    67,   188,   186,    -1,
      16,    -1,     6,   145,    -1,    10,   145,    -1,    19,   133,
      -1,    14,   133,    -1,    20,   143,    -1,    28,   199,    -1,
     186,    -1,   189,    63,   186,    -1,   143,    -1,   190,    76,
     143,    -1,   144,    -1,   191,    76,   144,    -1,   131,    -1,
     192,    76,   131,    -1,   140,    -1,   193,    76,   140,    -1,
     136,    -1,   137,    -1,   194,    76,   136,    -1,   194,    76,
     137,    -1,    -1,   194,   197,    -1,    -1,    63,    -1,    -1,
      76,    -1,    -1,   131,    -1,    -1,   192,    -1,    -1,    99,
      -1,    -1,   221,    -1,    -1,   222,    -1,    -1,   223,    -1,
      -1,     3,    -1,    22,    25,     3,    63,    -1,    33,   206,
     208,    63,    -1,     9,   206,    66,   219,    63,    -1,     9,
     206,   208,    66,   219,    63,    -1,    32,   207,   208,    63,
      -1,    18,   166,   168,    63,    -1,   147,    -1,   206,    -1,
     210,    -1,   211,    -1,   212,    -1,   210,    -1,   212,    -1,
     147,    -1,    25,    -1,    72,    73,   208,    -1,    72,     3,
      73,   208,    -1,    24,    72,   208,    73,   208,    -1,    30,
      68,   202,    69,    -1,    23,    68,   203,    69,    -1,    54,
     208,    -1,     8,   209,    -1,     8,    60,   211,    61,    -1,
       8,    37,   208,    -1,    37,     8,   208,    -1,    18,    60,
     201,    61,   216,    -1,   146,   208,   204,    -1,   146,    12,
     208,   204,    -1,   146,   208,   204,    -1,   146,    60,   201,
      61,   216,    -1,   208,    -1,    -1,   217,    -1,    60,   201,
      61,    -1,   208,    -1,     3,    -1,    51,     3,    -1,   146,
      -1,   218,    -1,    60,   218,    50,   218,    61,    -1,    -1,
     220,   205,    -1,   213,    -1,   221,    76,   213,    -1,   214,
      -1,   222,    63,   214,    -1,   215,    -1,   223,    63,   215,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   133,   139,   150,   150,   165,   166,   169,
     170,   171,   174,   211,   222,   223,   226,   233,   240,   249,
     263,   264,   271,   271,   284,   288,   289,   293,   298,   304,
     308,   312,   316,   322,   328,   334,   339,   343,   347,   353,
     359,   363,   367,   373,   377,   383,   384,   388,   394,   403,
     408,   414,   432,   437,   449,   465,   471,   479,   499,   517,
     526,   545,   544,   559,   558,   590,   593,   600,   599,   610,
     616,   623,   630,   641,   647,   650,   658,   657,   668,   674,
     686,   690,   695,   685,   716,   715,   728,   731,   737,   740,
     752,   756,   751,   774,   773,   786,   797,   806,   811,   805,
     834,   835,   839,   843,   847,   851,   855,   859,   863,   867,
     871,   875,   879,   883,   887,   891,   895,   899,   903,   907,
     911,   917,   918,   922,   933,   937,   941,   945,   950,   954,
     964,   968,   973,   981,   985,   986,   997,  1001,  1005,  1009,
    1013,  1021,  1022,  1028,  1035,  1041,  1048,  1051,  1058,  1064,
    1081,  1088,  1089,  1096,  1097,  1116,  1117,  1120,  1123,  1127,
    1138,  1147,  1153,  1156,  1159,  1166,  1167,  1173,  1186,  1201,
    1209,  1221,  1226,  1232,  1233,  1234,  1235,  1236,  1237,  1243,
    1244,  1245,  1246,  1252,  1253,  1254,  1255,  1256,  1262,  1263,
    1266,  1269,  1270,  1271,  1272,  1273,  1276,  1277,  1290,  1294,
    1299,  1304,  1309,  1313,  1314,  1317,  1323,  1330,  1336,  1343,
    1349,  1356,  1362,  1373,  1388,  1417,  1455,  1480,  1498,  1507,
    1510,  1518,  1522,  1526,  1533,  1539,  1544,  1556,  1559,  1570,
    1571,  1577,  1578,  1584,  1588,  1594,  1595,  1601,  1605,  1611,
    1634,  1639,  1645,  1651,  1658,  1667,  1676,  1691,  1697,  1702,
    1706,  1713,  1726,  1727,  1733,  1739,  1742,  1746,  1752,  1755,
    1764,  1767,  1768,  1772,  1773,  1779,  1780,  1781,  1782,  1783,
    1784,  1786,  1785,  1800,  1806,  1810,  1814,  1818,  1822,  1827,
    1846,  1852,  1860,  1864,  1870,  1874,  1880,  1884,  1890,  1894,
    1903,  1907,  1911,  1915,  1921,  1924,  1932,  1933,  1935,  1936,
    1939,  1942,  1945,  1948,  1951,  1954,  1957,  1960,  1963,  1966,
    1969,  1972,  1975,  1978,  1984,  1988,  1992,  1996,  2000,  2004,
    2024,  2031,  2042,  2043,  2044,  2047,  2048,  2051,  2055,  2065,
    2069,  2073,  2077,  2081,  2085,  2089,  2095,  2101,  2109,  2117,
    2123,  2130,  2146,  2168,  2172,  2178,  2181,  2184,  2188,  2198,
    2202,  2221,  2229,  2230,  2242,  2243,  2246,  2250,  2256,  2260,
    2266,  2270
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
  "structtype", "istructtype", "interfacetype", "xfndcl", "fndcl",
  "hidden_fndcl", "fntype", "fnbody", "fnres", "fnlitdcl", "fnliteral",
  "xdcl_list", "vardcl_list", "constdcl_list", "typedcl_list",
  "structdcl_list", "interfacedcl_list", "structdcl", "packname", "embed",
  "interfacedcl", "indcl", "arg_type", "arg_type_list",
  "oarg_type_list_ocomma", "stmt", "non_dcl_stmt", "@16", "stmt_list",
  "new_name_list", "dcl_name_list", "expr_list", "expr_or_type_list",
  "keyval_list", "braced_keyval_list", "osemi", "ocomma", "oexpr",
  "oexpr_list", "osimple_stmt", "ohidden_funarg_list",
  "ohidden_structdcl_list", "ohidden_interfacedcl_list", "oliteral",
  "hidden_import", "hidden_pkg_importsym", "hidden_pkgtype", "hidden_type",
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
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   102,   101,   104,   103,   105,   105,   107,   106,   108,
     108,   108,   109,   109,   109,   110,   112,   111,   113,   113,
     115,   116,   117,   114,   119,   118,   120,   120,   121,   121,
     123,   124,   122,   126,   125,   127,   127,   129,   130,   128,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   135,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   144,   145,   145,   146,   146,   146,   147,   147,   148,
     149,   150,   150,   151,   151,   151,   151,   151,   151,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   154,   154,
     155,   156,   156,   156,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   158,   159,   160,   161,   161,   162,
     162,   163,   163,   164,   165,   165,   166,   166,   167,   168,
     168,   169,   169,   169,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   178,   178,   178,   179,   179,   180,   181,   181,
     181,   182,   183,   183,   183,   183,   184,   184,   185,   185,
     186,   186,   186,   186,   186,   187,   187,   187,   187,   187,
     187,   188,   187,   187,   187,   187,   187,   187,   187,   187,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   194,   194,   195,   195,   196,   196,   197,   197,
     198,   198,   199,   199,   200,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   205,   205,   205,   205,
     206,   207,   208,   208,   208,   209,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   211,   212,
     213,   213,   214,   215,   215,   216,   216,   217,   217,   218,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     0,     3,     0,     3,     2,
       5,     3,     3,     2,     1,     3,     1,     2,     2,     4,
       0,     1,     0,     4,     0,     1,     1,     1,     1,     2,
       5,     3,     2,     5,     7,     3,     2,     5,     3,     1,
       2,     4,     3,     4,     3,     1,     2,     1,     1,     2,
       2,     1,     3,     3,     3,     2,     2,     3,     5,     5,
       2,     0,     4,     0,     3,     0,     2,     0,     4,     4,
       4,     2,     5,     1,     1,     2,     0,     3,     1,     3,
       0,     0,     0,     8,     0,     5,     0,     2,     0,     2,
       0,     0,     7,     0,     5,     5,     1,     0,     0,     7,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     5,     6,     1,     1,     3,     5,     5,     4,     6,
       8,     1,     5,     5,     5,     7,     1,     0,     3,     1,
       4,     1,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     4,     4,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     4,
       2,     3,     5,     1,     1,     2,     3,     5,     3,     4,
       2,     5,     3,     3,     5,     8,     5,     8,     5,     0,
       3,     0,     1,     3,     1,     4,     2,     0,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       2,     4,     3,     5,     5,     1,     3,     1,     2,     1,
       3,     4,     1,     2,     2,     1,     1,     3,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     2,     2,     2,     2,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     3,     3,     0,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     4,     4,     5,     6,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     5,     4,     4,     2,     2,     4,     3,     3,     5,
       3,     4,     3,     5,     1,     0,     1,     3,     1,     1,
       2,     1,     1,     5,     0,     2,     1,     3,     1,     3,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     0,     1,     0,     7,     0,    22,   164,
     166,     0,     0,   165,   227,    20,     6,   354,     0,     4,
       0,     0,     0,    21,     0,     0,     0,    16,     0,     0,
       9,    22,     0,     8,    28,   133,   162,     0,    39,   162,
      97,     0,   273,    76,     0,     0,     0,    80,     0,     0,
     302,    93,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   300,     0,    25,     0,   265,
     266,   270,   267,   268,   269,    51,   100,   141,   153,   121,
     170,   169,   134,     0,     0,     0,   190,   203,   204,    26,
     224,     0,   146,    27,     0,    19,     0,     0,     0,     0,
       0,     0,   355,   167,   168,    11,    14,   296,    18,    22,
      13,    17,   163,   274,   160,     0,     0,     0,     0,   169,
     196,   200,   186,   184,   185,   183,   275,   304,   141,     0,
     304,   258,     0,   219,   141,   278,   304,   158,   159,     0,
       0,   286,   303,   279,     0,     0,   304,     0,     0,    36,
      48,     0,    29,   284,   161,     0,   129,   124,   125,   128,
     122,   123,     0,     0,   155,     0,   156,   181,   179,   180,
     126,   127,     0,   301,     0,   228,     0,    32,     0,     0,
       0,     0,     0,    56,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,   300,   271,     0,   147,   226,
       0,     0,     0,     0,   320,     0,     0,   219,     0,     0,
     321,     0,     0,    23,   297,     0,    12,   258,     0,     0,
     201,   177,   175,   176,   173,   174,   205,     0,     0,   305,
      98,    96,     0,    74,     0,    77,     0,    73,   171,   252,
     169,   255,   157,   256,   298,     0,   258,     0,   213,    81,
      78,   164,     0,   212,     0,   296,   249,   237,     0,    65,
       0,     0,   208,   282,   296,   235,   247,   312,     0,    91,
      38,   233,   296,     0,    49,    50,    31,   229,   296,     0,
       0,    40,     0,   182,   154,     0,     0,    35,   296,     0,
       0,    52,   102,   117,   120,   103,   107,   108,   106,   118,
     105,   104,   101,   119,   109,   110,   111,   112,   113,   114,
     115,   116,   294,   130,   288,   298,     0,   135,   301,     0,
       0,   298,   294,   264,    61,   262,   261,   280,   263,     0,
      54,    53,   287,     0,     0,     0,     0,   328,     0,     0,
       0,     0,     0,   327,     0,   322,   323,   324,     0,   356,
       0,     0,   306,     0,     0,     0,    15,    10,     0,     0,
       0,   187,   197,     0,   304,    71,    67,    75,     0,     0,
     304,   172,   253,   254,   299,   259,   221,     0,     0,     0,
     304,     0,   245,     0,   258,   248,   297,     0,     0,     0,
       0,   312,     0,     0,   297,     0,   313,   240,     0,   312,
       0,   297,     0,   210,   296,   297,     0,    42,   285,     0,
       0,     0,   206,   177,   175,   176,   174,   147,   199,   198,
     297,     0,    44,     0,   147,   149,   290,   291,   298,     0,
     298,   299,     0,     0,     0,   138,   300,   272,   299,     0,
       0,     0,     0,   225,     0,     0,   335,   325,   326,   306,
     310,     0,   308,     0,   334,   349,     0,     0,   351,   352,
       0,     0,     0,     0,     0,   312,     0,     0,   319,     0,
     307,   314,   318,   315,   221,   178,    65,     0,     0,     0,
       0,     0,   257,   258,   169,   222,   195,   193,   194,   191,
     192,   218,   221,   220,    82,    79,   246,   250,     0,   238,
     211,   202,     0,     0,    94,    63,    66,     0,   242,     0,
     312,   236,   207,   283,   239,    65,   234,    37,     0,   230,
      30,    41,     0,   294,    45,   231,   296,    47,    33,    43,
     294,     0,   299,   295,   144,     0,   289,   131,   137,   136,
       0,   142,   143,     0,   281,   337,     0,     0,   328,     0,
     327,     0,   344,   360,   311,     0,     0,     0,   358,   309,
     338,   350,     0,   316,     0,   329,     0,   312,   340,     0,
     357,   345,     0,   304,     0,    70,    69,   304,     0,   258,
     214,    86,   221,     0,    60,     0,   312,   312,   241,     0,
     209,   178,     0,   297,     0,    46,     0,   147,   151,   148,
     292,   293,   132,   300,   139,    62,   336,   345,   306,   333,
       0,     0,   312,   332,     0,     0,   330,   317,   341,   306,
     306,   348,   216,   346,    99,    95,    68,    72,   223,     0,
      88,   251,     0,     0,    57,     0,    64,   244,   243,    92,
     145,   232,    34,   150,   294,     0,   339,     0,   361,   331,
     342,   359,     0,     0,     0,   221,     0,    87,    83,     0,
       0,     0,   140,   345,   353,   345,   347,   215,    84,    89,
      59,    58,   152,   343,   217,   304,     0,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     3,    14,    21,    30,   107,    31,
       8,    24,    16,    17,    66,   335,    68,   152,   534,   535,
     148,   149,   239,   515,   336,   451,   516,   595,   399,   377,
     488,   243,   244,   245,    70,   130,   259,    71,   136,   389,
     591,   667,   685,   640,   668,    72,   146,   410,    73,   144,
     240,    74,   127,   373,    75,    76,    77,    78,   322,   436,
     437,   609,    79,   324,   249,   139,    80,   153,   113,   119,
      13,    82,    83,   251,   252,   166,   121,    84,    85,   495,
     231,    86,   233,   234,    87,   285,    88,    89,   133,   217,
      90,   258,   501,    91,    92,    22,   288,   536,   282,   274,
     265,   275,   276,   277,   267,   395,   253,   254,   255,   337,
     338,   330,   339,   278,   155,    94,   325,   438,   439,   225,
     385,   174,   143,   260,   479,   567,   561,   407,   102,   215,
     221,   631,   456,   355,   356,   357,   359,   568,   563,   632,
     633,   469,   470,    25,   480,   569,   564
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -574
static const yytype_int16 yypact[] =
{
    -574,    50,    29,    30,  -574,   159,  -574,    73,  -574,  -574,
    -574,   118,    99,  -574,   152,   171,  -574,  -574,   141,  -574,
      65,   137,  1007,  -574,   147,   412,   148,  -574,    89,   225,
    -574,    30,   249,  -574,  -574,  -574,   159,  1887,  -574,   159,
    -574,   586,  -574,  -574,   212,   586,   159,  -574,    37,   143,
    1663,  -574,    37,  -574,   418,   434,  1663,  1663,  1663,  1663,
    1663,  1663,  1718,  1663,  1663,   919,   177,  -574,   437,  -574,
    -574,  -574,  -574,  -574,  -574,   863,  -574,  -574,   186,   386,
    -574,   195,  -574,   200,   210,    37,   220,  -574,  -574,  -574,
     244,    88,  -574,  -574,    41,  -574,   255,     0,   308,   255,
     255,   277,  -574,  -574,  -574,  -574,  -574,   288,  -574,  -574,
    -574,  -574,  -574,  -574,  -574,   293,  1915,  1915,  1915,  -574,
     292,  -574,  -574,  -574,  -574,  -574,  -574,  1663,    24,   386,
    1278,  1862,   304,   301,   237,  -574,  1663,  -574,  -574,   353,
    1915,  2208,   295,  -574,   336,   265,  1663,   321,  1853,  -574,
    -574,   443,  -574,  -574,  -574,   781,  -574,  -574,  -574,  -574,
    -574,  -574,  1773,  1718,  2208,   318,  -574,    23,  -574,   144,
    -574,  -574,   313,  2208,   314,  -574,   449,  -574,  1828,  1663,
    1663,  1663,  1663,  -574,  1663,  1663,  1663,  -574,  1663,  1663,
    1663,  1663,  1663,  1663,  1663,  1663,  1663,  1663,  1663,  1663,
    1663,  1663,  -574,  1333,   474,  1663,  -574,  1663,  -574,  -574,
    1220,  1663,  1663,  1663,  -574,   930,   159,   301,   332,   395,
    -574,  1289,  1289,  -574,   119,   340,  -574,  1862,   397,  1915,
    -574,  -574,  -574,  -574,  -574,  -574,  -574,   346,   159,  -574,
    -574,   357,  1663,  -574,   388,  -574,   123,   363,  1915,  -574,
    1862,  -574,  -574,  -574,   359,   368,  1862,  1220,  -574,  -574,
     377,   162,   416,  -574,   382,   392,  -574,  -574,   378,  -574,
     157,    20,  -574,  -574,   413,  -574,  -574,   457,   657,  -574,
    -574,  -574,   419,   316,  -574,  -574,  -574,  -574,   420,  1663,
     159,   422,  1940,  -574,   423,  1915,  1915,  -574,   421,  1663,
     432,  2208,  1157,  -574,  2232,   692,   692,   692,   692,  -574,
     692,   692,  2256,  -574,   650,   650,   650,   650,  -574,  -574,
    -574,  -574,  1388,  -574,  -574,    36,  1443,  -574,  2106,   435,
    1119,  2073,  1388,  -574,  -574,  -574,  -574,  -574,  -574,   -11,
     295,   295,  2208,  2001,   426,   438,   431,  -574,   439,   505,
    1289,   285,    31,  -574,   448,  -574,  -574,  -574,  1087,  -574,
      82,   452,   159,   458,   459,   462,  -574,  -574,   465,  1915,
     466,  -574,  -574,   493,  1663,  2208,  -574,  -574,  1498,  1553,
    1663,  -574,  -574,  -574,  1862,  -574,  1948,   469,   173,   388,
    1663,   159,   467,   471,  1862,  -574,   503,   464,  1915,    64,
     416,   457,   416,   476,   343,   470,  -574,  -574,   159,   457,
     499,   159,   477,  -574,   413,   159,   484,   295,  -574,  1663,
    1973,  1915,  -574,   185,   233,   267,   307,  -574,  -574,  -574,
     159,   490,   295,  1663,  -574,  2136,  -574,  -574,   478,   489,
     486,  1718,   504,   506,   508,  -574,  1663,  -574,  -574,   509,
     511,  1220,  1119,  -574,  1289,   536,  -574,  -574,  -574,   159,
    2026,  1289,   159,  1289,  -574,  -574,   580,   127,  -574,  -574,
     521,   513,  1289,   285,  1289,   457,   159,   159,  -574,   526,
     512,  -574,  -574,  -574,  1948,  -574,  -574,   527,  1220,  1663,
    1663,   528,  -574,  1862,   532,  -574,  -574,  -574,  -574,  -574,
    -574,  -574,  1948,  -574,  -574,  -574,  -574,  -574,   534,  -574,
    -574,  -574,  1718,   529,  -574,  -574,  -574,   537,  -574,   538,
     457,  -574,  -574,  -574,  -574,  -574,  -574,  -574,   531,  -574,
    -574,   295,   540,  1388,  -574,  -574,   542,  1828,  -574,   295,
    1388,  1608,  1388,  -574,  -574,   545,  -574,  -574,  -574,  -574,
     176,  -574,  -574,   245,  -574,  -574,   546,   551,   543,   555,
     558,   550,  -574,  -574,   557,   548,  1289,   553,  -574,   561,
    -574,  -574,   576,  -574,  1289,  -574,   564,   457,  -574,   570,
    -574,  2034,   129,  1663,   257,  2208,  2208,  1663,   571,  1862,
    -574,  -574,  1948,    71,  -574,  1119,   457,   457,  -574,   196,
    -574,   389,   562,   159,   575,   432,   568,  -574,  2208,  -574,
    -574,  -574,  -574,  1663,  -574,  -574,  -574,  2034,   159,  -574,
    2026,  1289,   457,  -574,   159,   127,  -574,  -574,  -574,   159,
     159,  -574,  -574,  -574,  -574,  -574,  -574,  -574,  -574,   578,
     625,  -574,  1663,  1663,  -574,  1718,   579,  -574,  -574,  -574,
    -574,  -574,  -574,  -574,  1388,   572,  -574,   582,  -574,  -574,
    -574,  -574,   587,   589,   590,  1948,    14,  -574,  -574,  2160,
    2184,   583,  -574,  2034,  -574,  2034,  -574,  -574,  -574,  -574,
    -574,  -574,  -574,  -574,  -574,  1663,   388,  -574
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -574,  -574,  -574,  -574,  -574,  -574,  -574,   -17,  -574,  -574,
     610,  -574,    -3,  -574,  -574,   633,  -574,  -136,   -44,    53,
    -574,  -138,   -19,  -574,    -4,  -574,  -574,  -574,  -437,  -381,
    -574,  -574,  -574,  -574,  -574,  -574,  -142,  -574,  -574,  -574,
    -574,  -574,  -574,  -574,  -574,  -574,  -574,  -574,  -574,  -574,
    -574,  -574,  -574,  -574,   573,     6,    12,  -574,  -195,   121,
     122,  -574,   136,   -60,   433,   -13,    15,   376,   629,   263,
     216,   -21,  -574,   436,   424,   510,  -574,  -574,  -574,  -574,
     -36,   -37,   -31,   -48,  -574,  -574,  -574,  -574,  -574,  -574,
     -32,   472,  -479,  -574,  -574,  -574,  -574,  -574,  -574,   401,
    -574,   287,  -101,  -230,   273,  -574,   312,  -574,  -209,  -304,
     670,  -574,  -237,  -574,   -56,   117,   188,  -574,  -310,  -255,
    -289,  -198,  -574,   -98,  -442,  -574,  -574,  -300,  -574,   224,
    -574,   360,  -574,   354,   243,   358,   226,    84,    92,  -573,
    -574,  -446,   236,  -574,   497,  -574,  -574
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -287
static const yytype_int16 yytable[] =
{
     123,   122,   165,    69,   279,   125,   124,   329,   504,   281,
     397,   106,   178,   332,   168,   287,   120,   557,   368,   405,
     388,   572,   450,   590,   177,   167,   447,   412,   110,   241,
     169,  -277,   247,   416,   471,   678,   442,  -277,   266,   145,
     401,   403,   449,   431,   656,   392,   211,   387,   440,   582,
       4,   112,   452,   128,   112,     5,     7,   134,   453,  -190,
     216,   135,   156,   157,   158,   159,   160,   161,    27,   170,
     171,   512,   208,   137,   402,    11,   642,   513,   210,   232,
     232,   232,   334,  -189,   235,   235,   235,  -277,   599,   209,
       9,  -190,    27,  -277,   232,   120,   120,   120,    15,   235,
     683,   518,   684,   232,   472,   138,   226,   212,   235,   524,
     120,   232,   441,   641,     9,   168,   235,   213,   232,   120,
     178,    18,    27,   235,   137,    28,   167,   120,   378,    29,
     465,   169,   298,   514,   120,   283,   512,   643,   644,    10,
      11,   232,   513,   476,     9,  -224,   235,   645,   554,   543,
     105,   545,     9,    29,   264,   168,   138,   120,   477,   528,
     273,   393,    19,    10,    11,  -245,   167,   142,   156,   160,
     517,   169,   519,   103,    20,   578,   657,   129,   466,   662,
    -224,   129,   392,    29,     9,   508,   677,   663,   664,   379,
     232,    69,   232,    10,    11,   235,    23,   235,   634,   213,
      33,    10,    11,   512,  -188,    26,   120,   366,   120,   513,
      95,   232,  -224,   232,   553,   140,   235,   400,   235,   232,
     598,  -186,   104,   602,   235,  -245,   391,   120,   108,   120,
     606,  -245,   533,    10,    11,   120,   452,     9,    69,   540,
     175,   232,   503,   613,  -276,  -186,   235,   246,   550,   614,
    -276,   584,   111,  -186,   202,   424,   423,   120,   232,   232,
     426,   425,  -160,   235,   235,   649,   444,   206,    12,  -184,
     207,   120,   131,   526,   120,   120,   487,   628,   168,   529,
    -189,   604,   491,    32,   588,    81,    10,    11,   465,   167,
     261,    32,   505,  -184,   169,   266,   647,   648,   273,   114,
    -276,  -184,   114,  -185,  -188,   687,  -276,   132,   452,   114,
       9,    69,   214,   214,   615,   214,   214,   150,   154,   270,
     452,   218,   660,   220,   222,   271,   636,  -185,   340,   341,
      11,   154,   232,   219,   272,  -185,   466,   235,   499,    10,
      11,   261,   223,  -183,   671,   467,     9,   232,   120,   497,
     496,   224,   235,   227,   500,   498,   238,   232,   646,    10,
      11,   232,   235,   120,   256,   120,   235,  -183,   261,   257,
     270,   213,   269,   120,   537,  -183,   271,   120,   261,   294,
     639,   546,   280,   232,   232,   413,   295,   296,   235,   235,
      10,    11,   362,   168,   250,    10,    11,   270,   363,   120,
     120,   367,   114,   271,   167,   369,   417,   371,   114,   169,
     150,   264,   654,   262,   154,   655,   432,    10,    11,   273,
     374,    96,   263,   523,   376,  -187,   380,    10,    11,   386,
      97,   353,    69,    69,    98,   384,   499,   353,   353,   154,
     390,   392,   394,     9,    99,   100,   203,   497,   496,  -187,
     204,   398,   500,   498,   499,   396,   232,  -187,   205,     9,
     406,   235,     9,   120,   168,   497,   496,   327,     9,    69,
     500,   498,   120,    81,     9,   167,   404,   101,   147,   358,
     169,   120,   411,   415,   430,   635,   459,    32,   419,   637,
     250,   427,    10,    11,   151,   340,   341,   176,   433,     9,
     232,   372,   446,   461,   286,   235,   460,   462,    10,    11,
     297,    10,    11,   463,   473,   478,   120,    10,    11,   250,
      81,   481,   482,    10,    11,   483,   484,   485,   261,   486,
     502,   391,   507,   510,   326,   525,   531,   520,   527,   522,
     230,   236,   237,   686,   499,   530,   114,   537,    10,    11,
     539,   538,   232,   154,   542,   497,   496,   235,   544,   353,
     500,   498,   448,   262,   268,   547,   353,   548,   120,   549,
     551,   120,   284,   349,   353,   354,    69,    10,    11,   291,
     552,   364,   365,   571,   573,   546,   574,   581,   477,    35,
     583,   587,   589,    81,    37,   592,   594,   168,   596,   597,
     600,   601,   300,  -164,   115,   603,   612,   616,   167,    48,
      49,     9,   617,   169,   468,   618,    52,   499,  -165,   619,
     620,   621,   623,   141,   624,   358,   625,   627,   497,   496,
     629,   650,   638,   500,   498,   164,   652,   653,   173,   665,
     666,   109,   452,   673,   120,   672,    62,   250,   674,   494,
     675,   676,   682,   370,   506,    67,   651,   250,    65,   114,
      10,    11,   679,   610,   611,    37,   418,   114,   126,   509,
     353,   114,   381,   293,   150,   115,   560,   353,   154,   353,
      48,    49,     9,   382,   414,   181,   383,    52,   353,   361,
     353,   521,    93,   154,   228,   189,   492,   457,   556,   193,
     593,   458,   409,   580,   198,   199,   200,   201,   661,   576,
     464,   117,   658,   360,    81,    81,   422,   229,   475,   428,
     429,     0,   358,   559,     0,   566,     0,   181,     0,    65,
     468,    10,    11,   408,     0,     0,   468,   189,     0,   579,
     358,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,    81,   301,   302,   303,   304,   250,   305,   306,   307,
       0,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,     0,   164,     0,   328,     0,
     331,     0,   353,     0,   141,   141,   342,     0,     0,    37,
     353,     0,     0,   422,     0,     0,     0,   353,     0,   115,
       0,     0,     0,     0,    48,    49,     9,     0,     0,     0,
       0,    52,     0,     0,   555,   375,     0,     0,   228,     0,
     562,   565,   511,   570,     0,     0,     0,     0,     0,     0,
       0,     0,   575,   353,   577,   117,   560,   353,     0,     0,
       0,   229,     0,     0,   230,   532,     0,   289,     0,     0,
       0,     0,   250,    65,     0,    10,    11,   290,    81,     0,
       0,     0,   141,     0,     0,     0,   154,   179,  -286,     0,
       0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,   559,     0,     0,     0,   566,   468,   353,
       0,   353,   358,   358,     0,   435,     0,   180,   181,   164,
     182,   183,   184,   185,   186,   435,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,     0,    35,     0,     0,     0,   622,    37,     0,  -286,
       0,   172,     0,     0,   626,     0,     0,   115,   343,  -286,
       0,     0,    48,    49,     9,     0,     0,     0,   344,    52,
       0,   141,   141,   345,   346,   347,    56,     0,     0,     0,
     348,   605,     0,     0,     0,     0,     0,   349,     0,    57,
      58,     0,    59,    60,     0,     0,    61,     0,     0,    62,
     562,   659,     0,     0,   350,     0,     0,     0,     0,    63,
      64,    65,   141,    10,    11,     0,   351,     0,     0,     0,
       0,     0,   352,     0,     0,    11,   141,    -2,    34,     0,
      35,     0,     0,    36,   164,    37,    38,    39,    40,   173,
       0,    41,     0,    42,    43,    44,    45,    46,    47,     0,
      48,    49,     9,     0,     0,    50,    51,    52,    53,    54,
      55,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,     0,
      59,    60,   585,   586,    61,     0,     0,    62,     0,     0,
     -24,     0,     0,     0,     0,     0,     0,    63,    64,    65,
       0,    10,    11,     0,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,     0,     0,     0,   474,
       0,     0,     0,     0,     0,   344,   435,     0,     0,     0,
     345,   346,   347,   435,   608,   435,     0,   348,     0,     0,
     333,     0,    35,     0,   349,    36,  -260,    37,    38,    39,
      40,     0,  -260,    41,     0,    42,    43,   115,    45,    46,
      47,   350,    48,    49,     9,     0,     0,    50,    51,    52,
      53,    54,    55,     0,     0,     0,    56,     0,     0,   352,
       0,     0,    11,     0,     0,     0,     0,     0,     0,    57,
      58,     0,    59,    60,     0,     0,    61,     0,     0,    62,
       0,     0,  -260,     0,     0,     0,   173,   334,  -260,    63,
      64,    65,   181,    10,    11,     0,   184,   185,   186,     0,
       0,   188,   189,   190,   191,     0,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   669,   670,     0,   164,     0,
       0,   333,     0,    35,     0,     0,    36,   435,    37,    38,
      39,    40,     0,     0,    41,     0,    42,    43,   115,    45,
      46,    47,     0,    48,    49,     9,     0,     0,    50,    51,
      52,    53,    54,    55,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,     0,    59,    60,     0,     0,    61,     0,     0,
      62,    35,     0,  -260,     0,     0,    37,     0,   334,  -260,
      63,    64,    65,     0,    10,    11,   115,   343,     0,     0,
       0,    48,    49,     9,     0,   242,     0,   344,    52,     0,
       0,     0,   345,   346,   347,    56,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,   349,     0,    57,    58,
       0,    59,    60,     0,     0,    61,    35,     0,    62,     0,
       0,    37,     0,   350,     0,     0,     0,     0,    63,    64,
      65,   115,    10,    11,     0,     0,    48,    49,     9,     0,
       0,   352,     0,    52,    11,     0,     0,     0,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,    59,   163,     0,     0,
      61,    35,     0,    62,   323,     0,    37,     0,     0,     0,
       0,     0,     0,    63,    64,    65,   115,    10,    11,     0,
       0,    48,    49,     9,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,    59,    60,     0,     0,    61,    35,     0,    62,     0,
       0,    37,     0,     0,     0,     0,   434,     0,    63,    64,
      65,   115,    10,    11,     0,     0,    48,    49,     9,     0,
       0,     0,     0,    52,     0,   443,     0,     0,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,    59,   163,     0,     0,
      61,    35,     0,    62,     0,     0,    37,     0,     0,     0,
       0,     0,     0,    63,    64,    65,   115,    10,    11,     0,
       0,    48,    49,     9,     0,   489,     0,     0,    52,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,    59,    60,     0,     0,    61,    35,     0,    62,     0,
       0,    37,     0,     0,     0,     0,     0,     0,    63,    64,
      65,   115,    10,    11,     0,     0,    48,    49,     9,     0,
     490,     0,     0,    52,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,    59,    60,     0,     0,
      61,    35,     0,    62,     0,     0,    37,     0,     0,     0,
       0,     0,     0,    63,    64,    65,   115,    10,    11,     0,
       0,    48,    49,     9,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,    59,    60,     0,     0,    61,    35,     0,    62,     0,
       0,    37,     0,     0,     0,     0,   607,     0,    63,    64,
      65,   115,    10,    11,     0,     0,    48,    49,     9,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,    59,    60,     0,     0,
      61,    35,     0,    62,     0,     0,    37,     0,     0,     0,
       0,     0,     0,    63,    64,    65,   115,    10,    11,     0,
       0,    48,    49,     9,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
       0,    59,   163,     0,     0,    61,    35,     0,    62,     0,
       0,   292,     0,     0,     0,     0,     0,     0,    63,    64,
      65,   115,    10,    11,     0,     0,    48,    49,     9,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,     0,    59,    60,     0,     0,
      61,     0,     0,    62,     0,     0,    37,     0,     0,     0,
       0,     0,     0,    63,    64,    65,   115,    10,    11,     0,
       0,    48,    49,     9,     0,     0,     0,     0,    52,     0,
       0,    37,     0,     0,     0,   228,     0,     0,     0,     0,
      37,   115,     0,     0,   248,     0,    48,    49,     9,     0,
     115,     0,   117,    52,     0,    48,    49,     9,   229,   137,
     228,     0,    52,     0,   299,    37,     0,     0,     0,   228,
      65,     0,    10,    11,   290,   115,     0,   117,     0,     0,
      48,    49,     9,   229,     0,     0,   117,    52,     0,     0,
       0,   138,   229,    37,   116,    65,     0,    10,    11,     0,
       0,     0,     0,   115,    65,     0,    10,    11,    48,    49,
       9,   117,     0,     0,     0,    52,     0,   118,    37,     0,
       0,     0,   228,     0,     0,     0,    37,     0,   115,    65,
       0,    10,    11,    48,    49,     9,   115,     0,     0,   117,
      52,    48,    49,     9,     0,   229,     0,   420,    52,     0,
       0,   292,     0,     0,     0,   228,     0,    65,     0,    10,
      11,   115,     0,     0,   117,     0,    48,    49,     9,     0,
     421,     0,   117,    52,     0,     0,     0,     0,   493,   343,
     228,     0,    65,     0,    10,    11,     0,     0,     0,   344,
      65,     0,    10,    11,   345,   346,   347,   117,     0,     0,
       0,   348,     0,   229,   343,     0,     0,     0,   454,     0,
       0,     0,   343,     0,   344,    65,     0,    10,    11,   345,
     346,   558,   344,     0,     0,   350,   348,   345,   346,   347,
       0,   455,     0,   349,   348,     0,     0,     0,     0,     0,
       0,   349,     0,   352,     0,     0,    11,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,   630,     0,     0,     0,   352,     0,
      10,    11,     0,     0,     0,     0,   352,   180,   181,    11,
     182,     0,   184,   185,   186,     0,     0,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     180,   181,     0,   182,     0,   184,   185,   186,     0,   448,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,     0,     0,     0,     0,     0,     0,
     180,   181,     0,   182,     0,   184,   185,   186,     0,   445,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   180,   181,     0,   182,     0,   184,
     185,   186,     0,   541,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   180,   181,
       0,   182,     0,   184,   185,   186,     0,   680,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   180,   181,     0,   182,     0,   184,   185,   186,
       0,   681,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   180,   181,     0,     0,
       0,   184,   185,   186,     0,     0,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     180,   181,     0,     0,     0,   184,   185,   186,     0,     0,
     188,   189,   190,   191,     0,   193,   194,   195,   196,   197,
     198,   199,   200,   201
};

static const yytype_int16 yycheck[] =
{
      37,    37,    62,    22,   146,    37,    37,   205,   389,   147,
     265,    28,    68,   208,    62,   151,    37,   459,   227,   274,
     257,   467,   332,   502,    68,    62,   330,   282,    31,   127,
      62,     7,   130,   288,     3,    21,   325,    13,   139,    52,
     270,   271,   331,   298,   617,    25,     5,   256,    12,   486,
       0,    36,    63,    41,    39,    26,    26,    45,    69,    36,
      60,    46,    56,    57,    58,    59,    60,    61,     3,    63,
      64,     7,    85,    36,    54,    75,     5,    13,    91,   116,
     117,   118,    68,    60,   116,   117,   118,    63,   525,     1,
      25,    68,     3,    69,   131,   116,   117,   118,    25,   131,
     673,   401,   675,   140,    73,    68,   109,    66,   140,   409,
     131,   148,    76,   592,    25,   163,   148,    76,   155,   140,
     176,     3,     3,   155,    36,    60,   163,   148,     5,    64,
       3,   163,   176,    69,   155,   148,     7,    66,    67,    74,
      75,   178,    13,    61,    25,     1,   178,    76,   452,   438,
      61,   440,    25,    64,   139,   203,    68,   178,    76,   414,
     145,   262,    63,    74,    75,     3,   203,    50,   162,   163,
     400,   203,   402,    25,    22,   475,   618,    41,    51,   625,
      36,    45,    25,    64,    25,   394,   665,   629,   630,    66,
     227,   210,   229,    74,    75,   227,    25,   229,    69,    76,
      63,    74,    75,     7,    60,    64,   227,   224,   229,    13,
      63,   248,    68,   250,   451,    72,   248,    60,   250,   256,
     520,    36,    74,   533,   256,    63,    64,   248,     3,   250,
     540,    69,   427,    74,    75,   256,    63,    25,   257,   434,
      63,   278,    69,    67,     7,    60,   278,   130,   446,    73,
      13,   488,     3,    68,    68,   292,   292,   278,   295,   296,
     292,   292,    67,   295,   296,    69,   326,    67,     5,    36,
      60,   292,    60,   411,   295,   296,   374,   577,   326,   415,
      60,   536,   380,    20,   493,    22,    74,    75,     3,   326,
      25,    28,   390,    60,   326,   396,   596,   597,   283,    36,
      63,    68,    39,    36,    60,   686,    69,    44,    63,    46,
      25,   330,    96,    97,    69,    99,   100,    54,    55,    54,
      63,    97,   622,    99,   100,    60,    69,    60,   211,   212,
      75,    68,   369,    25,    69,    68,    51,   369,   386,    74,
      75,    25,    65,    36,   654,    60,    25,   384,   369,   386,
     386,    63,   384,    60,   386,   386,    64,   394,   595,    74,
      75,   398,   394,   384,    60,   386,   398,    60,    25,    68,
      54,    76,    36,   394,   430,    68,    60,   398,    25,    61,
     589,   441,    61,   420,   421,    69,    73,    73,   420,   421,
      74,    75,    60,   441,   131,    74,    75,    54,     3,   420,
     421,    61,   139,    60,   441,     8,   289,    61,   145,   441,
     147,   396,   607,    60,   151,   613,   299,    74,    75,   404,
      63,     9,    69,   408,    36,    36,    63,    74,    75,    61,
      18,   215,   451,   452,    22,    76,   484,   221,   222,   176,
      63,    25,    60,    25,    32,    33,    60,   484,   484,    60,
      64,    73,   484,   484,   502,    63,   493,    68,    72,    25,
       3,   493,    25,   484,   512,   502,   502,   204,    25,   488,
     502,   502,   493,   210,    25,   512,    63,    65,    60,   216,
     512,   502,    63,    63,    63,   583,    60,   224,    66,   587,
     227,    68,    74,    75,    60,   378,   379,    60,    66,    25,
     537,   238,    67,    72,    61,   537,    68,    68,    74,    75,
      61,    74,    75,     8,    66,    63,   537,    74,    75,   256,
     257,    63,    63,    74,    75,    63,    61,    61,    25,    36,
      61,    64,    61,    69,    60,    36,   419,    61,    61,    69,
     116,   117,   118,   685,   592,    61,   283,   603,    74,    75,
     433,    61,   589,   290,    76,   592,   592,   589,    69,   343,
     592,   592,    76,    60,   140,    61,   350,    61,   589,    61,
      61,   592,   148,    37,   358,   215,   595,    74,    75,   155,
      69,   221,   222,     3,    63,   645,    73,    61,    76,     3,
      63,    63,    60,   330,     8,    61,    67,   645,    61,    61,
      69,    61,   178,    60,    18,    63,    61,    61,   645,    23,
      24,    25,    61,   645,   351,    60,    30,   665,    60,    69,
      63,    73,    69,    50,    63,   362,    50,    63,   665,   665,
      60,    69,    61,   665,   665,    62,    61,    69,    65,    61,
      15,    31,    63,    61,   665,    73,    60,   384,    61,   386,
      61,    61,    69,   229,   391,    22,   603,   394,    72,   396,
      74,    75,   666,   542,   542,     8,   290,   404,    39,   396,
     454,   408,   248,   163,   411,    18,   460,   461,   415,   463,
      23,    24,    25,   250,   283,    35,   250,    30,   472,   217,
     474,   404,    22,   430,    37,    45,   384,   343,   455,    49,
     512,   343,   278,   477,    54,    55,    56,    57,   624,   473,
     350,    54,   620,   216,   451,   452,   292,    60,   358,   295,
     296,    -1,   459,   460,    -1,   462,    -1,    35,    -1,    72,
     467,    74,    75,    76,    -1,    -1,   473,    45,    -1,   476,
     477,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,   488,   179,   180,   181,   182,   493,   184,   185,   186,
      -1,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,    -1,   203,    -1,   205,    -1,
     207,    -1,   566,    -1,   211,   212,   213,    -1,    -1,     8,
     574,    -1,    -1,   369,    -1,    -1,    -1,   581,    -1,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,   454,   242,    -1,    -1,    37,    -1,
     460,   461,   398,   463,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   472,   617,   474,    54,   620,   621,    -1,    -1,
      -1,    60,    -1,    -1,   420,   421,    -1,    66,    -1,    -1,
      -1,    -1,   589,    72,    -1,    74,    75,    76,   595,    -1,
      -1,    -1,   289,    -1,    -1,    -1,   603,     4,     5,    -1,
      -1,    -1,   299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   618,    -1,   620,    -1,    -1,    -1,   624,   625,   673,
      -1,   675,   629,   630,    -1,   322,    -1,    34,    35,   326,
      37,    38,    39,    40,    41,   332,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,     3,    -1,    -1,    -1,   566,     8,    -1,    66,
      -1,    12,    -1,    -1,   574,    -1,    -1,    18,     8,    76,
      -1,    -1,    23,    24,    25,    -1,    -1,    -1,    18,    30,
      -1,   378,   379,    23,    24,    25,    37,    -1,    -1,    -1,
      30,   537,    -1,    -1,    -1,    -1,    -1,    37,    -1,    50,
      51,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,
     620,   621,    -1,    -1,    54,    -1,    -1,    -1,    -1,    70,
      71,    72,   419,    74,    75,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,   433,     0,     1,    -1,
       3,    -1,    -1,     6,   441,     8,     9,    10,    11,   446,
      -1,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    54,   489,   490,    57,    -1,    -1,    60,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    74,    75,    -1,    -1,   512,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,   533,    -1,    -1,    -1,
      23,    24,    25,   540,   541,   542,    -1,    30,    -1,    -1,
       1,    -1,     3,    -1,    37,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    54,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,    72,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    -1,    -1,    -1,   613,    68,    69,    70,
      71,    72,    35,    74,    75,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,   642,   643,    -1,   645,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,   654,     8,     9,
      10,    11,    -1,    -1,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      60,     3,    -1,    63,    -1,    -1,     8,    -1,    68,    69,
      70,    71,    72,    -1,    74,    75,    18,     8,    -1,    -1,
      -1,    23,    24,    25,    -1,    27,    -1,    18,    30,    -1,
      -1,    -1,    23,    24,    25,    37,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    57,     3,    -1,    60,    -1,
      -1,     8,    -1,    54,    -1,    -1,    -1,    -1,    70,    71,
      72,    18,    74,    75,    -1,    -1,    23,    24,    25,    -1,
      -1,    72,    -1,    30,    75,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      57,     3,    -1,    60,    61,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    18,    74,    75,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    57,     3,    -1,    60,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    18,    74,    75,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      57,     3,    -1,    60,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    18,    74,    75,    -1,
      -1,    23,    24,    25,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    57,     3,    -1,    60,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    18,    74,    75,    -1,    -1,    23,    24,    25,    -1,
      27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      57,     3,    -1,    60,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    18,    74,    75,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    57,     3,    -1,    60,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    18,    74,    75,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      57,     3,    -1,    60,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    18,    74,    75,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    57,     3,    -1,    60,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    18,    74,    75,    -1,    -1,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    18,    74,    75,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,     8,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
       8,    18,    -1,    -1,    12,    -1,    23,    24,    25,    -1,
      18,    -1,    54,    30,    -1,    23,    24,    25,    60,    36,
      37,    -1,    30,    -1,    66,     8,    -1,    -1,    -1,    37,
      72,    -1,    74,    75,    76,    18,    -1,    54,    -1,    -1,
      23,    24,    25,    60,    -1,    -1,    54,    30,    -1,    -1,
      -1,    68,    60,     8,    37,    72,    -1,    74,    75,    -1,
      -1,    -1,    -1,    18,    72,    -1,    74,    75,    23,    24,
      25,    54,    -1,    -1,    -1,    30,    -1,    60,     8,    -1,
      -1,    -1,    37,    -1,    -1,    -1,     8,    -1,    18,    72,
      -1,    74,    75,    23,    24,    25,    18,    -1,    -1,    54,
      30,    23,    24,    25,    -1,    60,    -1,    37,    30,    -1,
      -1,     8,    -1,    -1,    -1,    37,    -1,    72,    -1,    74,
      75,    18,    -1,    -1,    54,    -1,    23,    24,    25,    -1,
      60,    -1,    54,    30,    -1,    -1,    -1,    -1,    60,     8,
      37,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,    18,
      72,    -1,    74,    75,    23,    24,    25,    54,    -1,    -1,
      -1,    30,    -1,    60,     8,    -1,    -1,    -1,    37,    -1,
      -1,    -1,     8,    -1,    18,    72,    -1,    74,    75,    23,
      24,    25,    18,    -1,    -1,    54,    30,    23,    24,    25,
      -1,    60,    -1,    37,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    -1,    72,    34,    35,    75,
      37,    -1,    39,    40,    41,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    -1,    39,    40,    41,    -1,    76,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    -1,    39,    40,    41,    -1,    73,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    34,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    67,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    34,    35,
      -1,    37,    -1,    39,    40,    41,    -1,    67,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    34,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    67,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    78,    80,    81,     0,    26,    79,    26,    87,    25,
      74,    75,   146,   147,    82,    25,    89,    90,     3,    63,
      22,    83,   172,    25,    88,   220,    64,     3,    60,    64,
      84,    86,   146,    63,     1,     3,     6,     8,     9,    10,
      11,    14,    16,    17,    18,    19,    20,    21,    23,    24,
      28,    29,    30,    31,    32,    33,    37,    50,    51,    53,
      54,    57,    60,    70,    71,    72,    91,    92,    93,    99,
     111,   114,   122,   125,   128,   131,   132,   133,   134,   139,
     143,   146,   148,   149,   154,   155,   158,   161,   163,   164,
     167,   170,   171,   187,   192,    63,     9,    18,    22,    32,
      33,    65,   205,    25,    74,    61,    84,    85,     3,    87,
      89,     3,   143,   145,   146,    18,    37,    54,    60,   146,
     148,   153,   157,   158,   159,   167,   145,   129,   133,   139,
     112,    60,   146,   165,   133,   143,   115,    36,    68,   142,
      72,   131,   192,   199,   126,   142,   123,    60,    97,    98,
     146,    60,    94,   144,   146,   191,   132,   132,   132,   132,
     132,   132,    37,    54,   131,   140,   152,   158,   160,   167,
     132,   132,    12,   131,   198,    63,    60,    95,   191,     4,
      34,    35,    37,    38,    39,    40,    41,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    68,    60,    64,    72,    67,    60,   142,     1,
     142,     5,    66,    76,   147,   206,    60,   166,   206,    25,
     206,   207,   206,    65,    63,   196,    89,    60,    37,    60,
     151,   157,   158,   159,   160,   167,   151,   151,    64,    99,
     127,   200,    27,   108,   109,   110,   192,   200,    12,   141,
     146,   150,   151,   183,   184,   185,    60,    68,   168,   113,
     200,    25,    60,    69,   143,   177,   179,   181,   151,    36,
      54,    60,    69,   143,   176,   178,   179,   180,   190,   113,
      61,    98,   175,   142,   151,   162,    61,    94,   173,    66,
      76,   151,     8,   152,    61,    73,    73,    61,    95,    66,
     151,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   135,    61,   140,   193,    60,   146,   131,   198,
     188,   131,   135,     1,    68,    92,   101,   186,   187,   189,
     192,   192,   131,     8,    18,    23,    24,    25,    30,    37,
      54,    66,    72,   147,   208,   210,   211,   212,   146,   213,
     221,   168,    60,     3,   208,   208,    84,    61,   185,     8,
     151,    61,   146,   130,    63,   131,    36,   106,     5,    66,
      63,   151,   141,   150,    76,   197,    61,   185,   189,   116,
      63,    64,    25,   179,    60,   182,    63,   196,    73,   105,
      60,   180,    54,   180,    63,   196,     3,   204,    76,   151,
     124,    63,   196,    69,   176,    63,   196,   192,   144,    66,
      37,    60,   151,   157,   158,   159,   167,    68,   151,   151,
      63,   196,   192,    66,    68,   131,   136,   137,   194,   195,
      12,    76,   197,    32,   140,    73,    67,   186,    76,   197,
     195,   102,    63,    69,    37,    60,   209,   210,   212,    60,
      68,    72,    68,     8,   208,     3,    51,    60,   146,   218,
     219,     3,    73,    66,    12,   208,    61,    76,    63,   201,
     221,    63,    63,    63,    61,    61,    36,   200,   107,    27,
      27,   200,   183,    60,   146,   156,   157,   158,   159,   160,
     167,   169,    61,    69,   106,   200,   146,    61,   185,   181,
      69,   151,     7,    13,    69,   100,   103,   180,   204,   180,
      61,   178,    69,   143,   204,    36,    98,    61,   196,    94,
      61,   192,   151,   135,    95,    96,   174,   191,    61,   192,
     135,    67,    76,   197,    69,   197,   140,    61,    61,    61,
     198,    61,    69,   189,   186,   208,   211,   201,    25,   146,
     147,   203,   208,   215,   223,   208,   146,   202,   214,   222,
     208,     3,   218,    63,    73,   208,   219,   208,   204,   146,
     213,    61,   105,    63,   189,   131,   131,    63,   185,    60,
     169,   117,    61,   193,    67,   104,    61,    61,   204,   105,
      69,    61,   195,    63,   196,   151,   195,    68,   131,   138,
     136,   137,    61,    67,    73,    69,    61,    61,    60,    69,
      63,    73,   208,    69,    63,    50,   208,    63,   204,    60,
      60,   208,   216,   217,    69,   200,    69,   200,    61,   185,
     120,   169,     5,    66,    67,    76,   189,   204,   204,    69,
      69,    96,    61,    69,   135,   198,   216,   201,   215,   208,
     204,   214,   218,   201,   201,    61,    15,   118,   121,   131,
     131,   195,    73,    61,    61,    61,    61,   169,    21,   101,
      67,    67,    69,   216,   216,   119,   113,   106
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
#line 409 "go.y"
    {
		(yyval.node) = typedcl1((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), 1);
	}
    break;

  case 51:
#line 415 "go.y"
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

  case 52:
#line 433 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
		(yyval.node)->etype = (yyvsp[(2) - (3)].i);			// rathole to pass opcode
	}
    break;

  case 53:
#line 438 "go.y"
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

  case 54:
#line 450 "go.y"
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

  case 55:
#line 466 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (2)].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
    break;

  case 56:
#line 472 "go.y"
    {
		(yyval.node) = nod(OASOP, (yyvsp[(1) - (2)].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
    break;

  case 57:
#line 480 "go.y"
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

  case 58:
#line 500 "go.y"
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

  case 59:
#line 518 "go.y"
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[(2) - (5)].list), list1((yyvsp[(4) - (5)].node)), (yyvsp[(3) - (5)].i)));
	}
    break;

  case 60:
#line 527 "go.y"
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

  case 61:
#line 545 "go.y"
    {
		markdcl();
	}
    break;

  case 62:
#line 549 "go.y"
    {
		if((yyvsp[(3) - (4)].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[(3) - (4)].list));
		popdcl();
	}
    break;

  case 63:
#line 559 "go.y"
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

  case 64:
#line 570 "go.y"
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

  case 65:
#line 590 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 66:
#line 594 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node));
	}
    break;

  case 67:
#line 600 "go.y"
    {
		markdcl();
	}
    break;

  case 68:
#line 604 "go.y"
    {
		(yyval.list) = (yyvsp[(3) - (4)].list);
		popdcl();
	}
    break;

  case 69:
#line 611 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(4) - (4)].node));
		(yyval.node)->list = (yyvsp[(1) - (4)].list);
		(yyval.node)->etype = 0;	// := flag
	}
    break;

  case 70:
#line 617 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(4) - (4)].node));
		(yyval.node)->list = (yyvsp[(1) - (4)].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[(1) - (4)].list), (yyval.node));
	}
    break;

  case 71:
#line 624 "go.y"
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[(2) - (2)].node));
		(yyval.node)->etype = 0; // := flag
	}
    break;

  case 72:
#line 631 "go.y"
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

  case 73:
#line 642 "go.y"
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 75:
#line 651 "go.y"
    {
		(yyval.node) = (yyvsp[(1) - (2)].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[(2) - (2)].list));
	}
    break;

  case 76:
#line 658 "go.y"
    {
		markdcl();
	}
    break;

  case 77:
#line 662 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (3)].node);
		popdcl();
	}
    break;

  case 78:
#line 669 "go.y"
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 79:
#line 675 "go.y"
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[(1) - (3)].node) != N)
			(yyval.node)->ninit = list1((yyvsp[(1) - (3)].node));
		(yyval.node)->ntest = (yyvsp[(3) - (3)].node);
	}
    break;

  case 80:
#line 686 "go.y"
    {
		markdcl();
	}
    break;

  case 81:
#line 690 "go.y"
    {
		if((yyvsp[(3) - (3)].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
    break;

  case 82:
#line 695 "go.y"
    {
		(yyvsp[(3) - (5)].node)->nbody = (yyvsp[(5) - (5)].list);
	}
    break;

  case 83:
#line 699 "go.y"
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

  case 84:
#line 716 "go.y"
    {
		markdcl();
	}
    break;

  case 85:
#line 720 "go.y"
    {
		if((yyvsp[(4) - (5)].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[(4) - (5)].node)->nbody = (yyvsp[(5) - (5)].list);
		(yyval.list) = list1((yyvsp[(4) - (5)].node));
	}
    break;

  case 86:
#line 728 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 87:
#line 732 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list));
	}
    break;

  case 88:
#line 737 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 89:
#line 741 "go.y"
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[(2) - (2)].node);
		node->end = node;
		(yyval.list) = node;
	}
    break;

  case 90:
#line 752 "go.y"
    {
		markdcl();
	}
    break;

  case 91:
#line 756 "go.y"
    {
		Node *n;
		n = (yyvsp[(3) - (3)].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
    break;

  case 92:
#line 764 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (7)].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[(6) - (7)].list);
		typesw = typesw->left;
		popdcl();
	}
    break;

  case 93:
#line 774 "go.y"
    {
		typesw = nod(OXXX, typesw, N);
	}
    break;

  case 94:
#line 778 "go.y"
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
		typesw = typesw->left;
	}
    break;

  case 95:
#line 787 "go.y"
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

  case 96:
#line 798 "go.y"
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[(1) - (1)].node);
	}
    break;

  case 97:
#line 806 "go.y"
    {
		// for
		markdcl();	
	}
    break;

  case 98:
#line 811 "go.y"
    {
		// select
		typesw = nod(OXXX, typesw, N);
	}
    break;

  case 99:
#line 816 "go.y"
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

  case 101:
#line 836 "go.y"
    {
		(yyval.node) = nod(OOROR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 102:
#line 840 "go.y"
    {
		(yyval.node) = nod(OANDAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 103:
#line 844 "go.y"
    {
		(yyval.node) = nod(OEQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 104:
#line 848 "go.y"
    {
		(yyval.node) = nod(ONE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 105:
#line 852 "go.y"
    {
		(yyval.node) = nod(OLT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 106:
#line 856 "go.y"
    {
		(yyval.node) = nod(OLE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 107:
#line 860 "go.y"
    {
		(yyval.node) = nod(OGE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 108:
#line 864 "go.y"
    {
		(yyval.node) = nod(OGT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 109:
#line 868 "go.y"
    {
		(yyval.node) = nod(OADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 110:
#line 872 "go.y"
    {
		(yyval.node) = nod(OSUB, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 111:
#line 876 "go.y"
    {
		(yyval.node) = nod(OOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 112:
#line 880 "go.y"
    {
		(yyval.node) = nod(OXOR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 113:
#line 884 "go.y"
    {
		(yyval.node) = nod(OMUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 114:
#line 888 "go.y"
    {
		(yyval.node) = nod(ODIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 115:
#line 892 "go.y"
    {
		(yyval.node) = nod(OMOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 116:
#line 896 "go.y"
    {
		(yyval.node) = nod(OAND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 117:
#line 900 "go.y"
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 118:
#line 904 "go.y"
    {
		(yyval.node) = nod(OLSH, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 119:
#line 908 "go.y"
    {
		(yyval.node) = nod(ORSH, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 120:
#line 912 "go.y"
    {
		(yyval.node) = nod(OSEND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 122:
#line 919 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 123:
#line 923 "go.y"
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

  case 124:
#line 934 "go.y"
    {
		(yyval.node) = nod(OPLUS, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 125:
#line 938 "go.y"
    {
		(yyval.node) = nod(OMINUS, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 126:
#line 942 "go.y"
    {
		(yyval.node) = nod(ONOT, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 127:
#line 946 "go.y"
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 128:
#line 951 "go.y"
    {
		(yyval.node) = nod(OCOM, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 129:
#line 955 "go.y"
    {
		(yyval.node) = nod(ORECV, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 130:
#line 965 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (3)].node), N);
	}
    break;

  case 131:
#line 969 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (5)].node), N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
	}
    break;

  case 132:
#line 974 "go.y"
    {
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (6)].node), N);
		(yyval.node)->list = (yyvsp[(3) - (6)].list);
		(yyval.node)->isddd = 1;
	}
    break;

  case 133:
#line 982 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(1) - (1)].val));
	}
    break;

  case 135:
#line 987 "go.y"
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

  case 136:
#line 998 "go.y"
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
	}
    break;

  case 137:
#line 1002 "go.y"
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[(1) - (5)].node));
	}
    break;

  case 138:
#line 1006 "go.y"
    {
		(yyval.node) = nod(OINDEX, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
	}
    break;

  case 139:
#line 1010 "go.y"
    {
		(yyval.node) = nod(OSLICE, (yyvsp[(1) - (6)].node), nod(OKEY, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node)));
	}
    break;

  case 140:
#line 1014 "go.y"
    {
		if((yyvsp[(5) - (8)].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[(7) - (8)].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[(1) - (8)].node), nod(OKEY, (yyvsp[(3) - (8)].node), nod(OKEY, (yyvsp[(5) - (8)].node), (yyvsp[(7) - (8)].node))));
	}
    break;

  case 142:
#line 1023 "go.y"
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[(1) - (5)].node), N);
		(yyval.node)->list = list1((yyvsp[(3) - (5)].node));
	}
    break;

  case 143:
#line 1029 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (5)].node);
		(yyval.node)->right = (yyvsp[(1) - (5)].node);
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 144:
#line 1036 "go.y"
    {
		(yyval.node) = (yyvsp[(3) - (5)].node);
		(yyval.node)->right = (yyvsp[(1) - (5)].node);
		(yyval.node)->list = (yyvsp[(4) - (5)].list);
	}
    break;

  case 145:
#line 1042 "go.y"
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[(5) - (7)].node);
		(yyval.node)->right = (yyvsp[(2) - (7)].node);
		(yyval.node)->list = (yyvsp[(6) - (7)].list);
	}
    break;

  case 147:
#line 1051 "go.y"
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
    break;

  case 148:
#line 1059 "go.y"
    {
		(yyval.node) = nod(OKEY, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
	}
    break;

  case 149:
#line 1065 "go.y"
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

  case 150:
#line 1082 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (4)].node);
		(yyval.node)->list = (yyvsp[(3) - (4)].list);
	}
    break;

  case 152:
#line 1090 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (4)].node);
		(yyval.node)->list = (yyvsp[(3) - (4)].list);
	}
    break;

  case 154:
#line 1098 "go.y"
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

  case 158:
#line 1124 "go.y"
    {
		(yyval.i) = LBODY;
	}
    break;

  case 159:
#line 1128 "go.y"
    {
		(yyval.i) = '{';
	}
    break;

  case 160:
#line 1139 "go.y"
    {
		if((yyvsp[(1) - (1)].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[(1) - (1)].sym));
	}
    break;

  case 161:
#line 1148 "go.y"
    {
		(yyval.node) = dclname((yyvsp[(1) - (1)].sym));
	}
    break;

  case 162:
#line 1153 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 164:
#line 1160 "go.y"
    {
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[(1) - (1)].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg);
	}
    break;

  case 166:
#line 1168 "go.y"
    {
		(yyval.sym) = S;
	}
    break;

  case 167:
#line 1174 "go.y"
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

  case 168:
#line 1187 "go.y"
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

  case 169:
#line 1202 "go.y"
    {
		(yyval.node) = oldname((yyvsp[(1) - (1)].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
    break;

  case 171:
#line 1222 "go.y"
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
    break;

  case 172:
#line 1227 "go.y"
    {
		(yyval.node) = nod(ODDD, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 178:
#line 1238 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
	}
    break;

  case 182:
#line 1247 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 187:
#line 1257 "go.y"
    {
		(yyval.node) = (yyvsp[(2) - (3)].node);
	}
    break;

  case 197:
#line 1278 "go.y"
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

  case 198:
#line 1291 "go.y"
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
	}
    break;

  case 199:
#line 1295 "go.y"
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[(4) - (4)].node));
	}
    break;

  case 200:
#line 1300 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(2) - (2)].node), N);
		(yyval.node)->etype = Cboth;
	}
    break;

  case 201:
#line 1305 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(3) - (3)].node), N);
		(yyval.node)->etype = Csend;
	}
    break;

  case 202:
#line 1310 "go.y"
    {
		(yyval.node) = nod(OTMAP, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
	}
    break;

  case 205:
#line 1318 "go.y"
    {
		(yyval.node) = nod(OIND, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 206:
#line 1324 "go.y"
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[(3) - (3)].node), N);
		(yyval.node)->etype = Crecv;
	}
    break;

  case 207:
#line 1331 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 208:
#line 1337 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[(2) - (3)].i));
	}
    break;

  case 209:
#line 1344 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[(2) - (4)].list);
		fixlbrace((yyvsp[(1) - (4)].i));
	}
    break;

  case 210:
#line 1350 "go.y"
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[(1) - (2)].i));
	}
    break;

  case 211:
#line 1357 "go.y"
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		fixlbrace((yyvsp[(2) - (5)].i));
	}
    break;

  case 212:
#line 1363 "go.y"
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[(2) - (3)].i));
	}
    break;

  case 213:
#line 1374 "go.y"
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

  case 214:
#line 1389 "go.y"
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

  case 215:
#line 1418 "go.y"
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

  case 216:
#line 1456 "go.y"
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

  case 217:
#line 1481 "go.y"
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

  case 218:
#line 1499 "go.y"
    {
		(yyvsp[(3) - (5)].list) = checkarglist((yyvsp[(3) - (5)].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[(3) - (5)].list);
		(yyval.node)->rlist = (yyvsp[(5) - (5)].list);
	}
    break;

  case 219:
#line 1507 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 220:
#line 1511 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (3)].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
    break;

  case 221:
#line 1519 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 222:
#line 1523 "go.y"
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[(1) - (1)].node)));
	}
    break;

  case 223:
#line 1527 "go.y"
    {
		(yyvsp[(2) - (3)].list) = checkarglist((yyvsp[(2) - (3)].list), 0);
		(yyval.list) = (yyvsp[(2) - (3)].list);
	}
    break;

  case 224:
#line 1534 "go.y"
    {
		closurehdr((yyvsp[(1) - (1)].node));
	}
    break;

  case 225:
#line 1540 "go.y"
    {
		(yyval.node) = closurebody((yyvsp[(3) - (4)].list));
		fixlbrace((yyvsp[(2) - (4)].i));
	}
    break;

  case 226:
#line 1545 "go.y"
    {
		(yyval.node) = closurebody(nil);
	}
    break;

  case 227:
#line 1556 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 228:
#line 1560 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(2) - (3)].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
	}
    break;

  case 230:
#line 1572 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 232:
#line 1579 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 233:
#line 1585 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 234:
#line 1589 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 236:
#line 1596 "go.y"
    {
		(yyval.list) = concat((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list));
	}
    break;

  case 237:
#line 1602 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 238:
#line 1606 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 239:
#line 1612 "go.y"
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

  case 240:
#line 1635 "go.y"
    {
		(yyvsp[(1) - (2)].node)->val = (yyvsp[(2) - (2)].val);
		(yyval.list) = list1((yyvsp[(1) - (2)].node));
	}
    break;

  case 241:
#line 1640 "go.y"
    {
		(yyvsp[(2) - (4)].node)->val = (yyvsp[(4) - (4)].val);
		(yyval.list) = list1((yyvsp[(2) - (4)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 242:
#line 1646 "go.y"
    {
		(yyvsp[(2) - (3)].node)->right = nod(OIND, (yyvsp[(2) - (3)].node)->right, N);
		(yyvsp[(2) - (3)].node)->val = (yyvsp[(3) - (3)].val);
		(yyval.list) = list1((yyvsp[(2) - (3)].node));
	}
    break;

  case 243:
#line 1652 "go.y"
    {
		(yyvsp[(3) - (5)].node)->right = nod(OIND, (yyvsp[(3) - (5)].node)->right, N);
		(yyvsp[(3) - (5)].node)->val = (yyvsp[(5) - (5)].val);
		(yyval.list) = list1((yyvsp[(3) - (5)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 244:
#line 1659 "go.y"
    {
		(yyvsp[(3) - (5)].node)->right = nod(OIND, (yyvsp[(3) - (5)].node)->right, N);
		(yyvsp[(3) - (5)].node)->val = (yyvsp[(5) - (5)].val);
		(yyval.list) = list1((yyvsp[(3) - (5)].node));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 245:
#line 1668 "go.y"
    {
		Node *n;

		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		n = oldname((yyvsp[(1) - (1)].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
    break;

  case 246:
#line 1677 "go.y"
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

  case 247:
#line 1692 "go.y"
    {
		(yyval.node) = embedded((yyvsp[(1) - (1)].sym), localpkg);
	}
    break;

  case 248:
#line 1698 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
		ifacedcl((yyval.node));
	}
    break;

  case 249:
#line 1703 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[(1) - (1)].sym)));
	}
    break;

  case 250:
#line 1707 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[(2) - (3)].sym)));
		yyerror("cannot parenthesize embedded type");
	}
    break;

  case 251:
#line 1714 "go.y"
    {
		// without func keyword
		(yyvsp[(2) - (4)].list) = checkarglist((yyvsp[(2) - (4)].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[(2) - (4)].list);
		(yyval.node)->rlist = (yyvsp[(4) - (4)].list);
	}
    break;

  case 253:
#line 1728 "go.y"
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[(1) - (2)].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[(2) - (2)].node));
	}
    break;

  case 254:
#line 1734 "go.y"
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[(1) - (2)].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[(2) - (2)].node));
	}
    break;

  case 256:
#line 1743 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 257:
#line 1747 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 258:
#line 1752 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 259:
#line 1756 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (2)].list);
	}
    break;

  case 260:
#line 1764 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 262:
#line 1769 "go.y"
    {
		(yyval.node) = liststmt((yyvsp[(1) - (1)].list));
	}
    break;

  case 264:
#line 1774 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 271:
#line 1786 "go.y"
    {
		(yyvsp[(1) - (2)].node) = nod(OLABEL, (yyvsp[(1) - (2)].node), N);
		(yyvsp[(1) - (2)].node)->sym = dclstack;  // context, for goto restrictions
	}
    break;

  case 272:
#line 1791 "go.y"
    {
		NodeList *l;

		(yyvsp[(1) - (4)].node)->defn = (yyvsp[(4) - (4)].node);
		l = list1((yyvsp[(1) - (4)].node));
		if((yyvsp[(4) - (4)].node))
			l = list(l, (yyvsp[(4) - (4)].node));
		(yyval.node) = liststmt(l);
	}
    break;

  case 273:
#line 1801 "go.y"
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
    break;

  case 274:
#line 1807 "go.y"
    {
		(yyval.node) = nod(OBREAK, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 275:
#line 1811 "go.y"
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 276:
#line 1815 "go.y"
    {
		(yyval.node) = nod(OPROC, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 277:
#line 1819 "go.y"
    {
		(yyval.node) = nod(ODEFER, (yyvsp[(2) - (2)].node), N);
	}
    break;

  case 278:
#line 1823 "go.y"
    {
		(yyval.node) = nod(OGOTO, (yyvsp[(2) - (2)].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
    break;

  case 279:
#line 1828 "go.y"
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

  case 280:
#line 1847 "go.y"
    {
		(yyval.list) = nil;
		if((yyvsp[(1) - (1)].node) != N)
			(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 281:
#line 1853 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (3)].list);
		if((yyvsp[(3) - (3)].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 282:
#line 1861 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 283:
#line 1865 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 284:
#line 1871 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 285:
#line 1875 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 286:
#line 1881 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 287:
#line 1885 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
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
#line 1904 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 291:
#line 1908 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 292:
#line 1912 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 293:
#line 1916 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 294:
#line 1921 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 295:
#line 1925 "go.y"
    {
		(yyval.list) = (yyvsp[(1) - (2)].list);
	}
    break;

  case 300:
#line 1939 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 302:
#line 1945 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 304:
#line 1951 "go.y"
    {
		(yyval.node) = N;
	}
    break;

  case 306:
#line 1957 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 308:
#line 1963 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 310:
#line 1969 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 312:
#line 1975 "go.y"
    {
		(yyval.val).ctype = CTxxx;
	}
    break;

  case 314:
#line 1985 "go.y"
    {
		importimport((yyvsp[(2) - (4)].sym), (yyvsp[(3) - (4)].val).u.sval);
	}
    break;

  case 315:
#line 1989 "go.y"
    {
		importvar((yyvsp[(2) - (4)].sym), (yyvsp[(3) - (4)].type));
	}
    break;

  case 316:
#line 1993 "go.y"
    {
		importconst((yyvsp[(2) - (5)].sym), types[TIDEAL], (yyvsp[(4) - (5)].node));
	}
    break;

  case 317:
#line 1997 "go.y"
    {
		importconst((yyvsp[(2) - (6)].sym), (yyvsp[(3) - (6)].type), (yyvsp[(5) - (6)].node));
	}
    break;

  case 318:
#line 2001 "go.y"
    {
		importtype((yyvsp[(2) - (4)].type), (yyvsp[(3) - (4)].type));
	}
    break;

  case 319:
#line 2005 "go.y"
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

  case 320:
#line 2025 "go.y"
    {
		(yyval.sym) = (yyvsp[(1) - (1)].sym);
		structpkg = (yyval.sym)->pkg;
	}
    break;

  case 321:
#line 2032 "go.y"
    {
		(yyval.type) = pkgtype((yyvsp[(1) - (1)].sym));
		importsym((yyvsp[(1) - (1)].sym), OTYPE);
	}
    break;

  case 327:
#line 2052 "go.y"
    {
		(yyval.type) = pkgtype((yyvsp[(1) - (1)].sym));
	}
    break;

  case 328:
#line 2056 "go.y"
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

  case 329:
#line 2066 "go.y"
    {
		(yyval.type) = aindex(N, (yyvsp[(3) - (3)].type));
	}
    break;

  case 330:
#line 2070 "go.y"
    {
		(yyval.type) = aindex(nodlit((yyvsp[(2) - (4)].val)), (yyvsp[(4) - (4)].type));
	}
    break;

  case 331:
#line 2074 "go.y"
    {
		(yyval.type) = maptype((yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].type));
	}
    break;

  case 332:
#line 2078 "go.y"
    {
		(yyval.type) = tostruct((yyvsp[(3) - (4)].list));
	}
    break;

  case 333:
#line 2082 "go.y"
    {
		(yyval.type) = tointerface((yyvsp[(3) - (4)].list));
	}
    break;

  case 334:
#line 2086 "go.y"
    {
		(yyval.type) = ptrto((yyvsp[(2) - (2)].type));
	}
    break;

  case 335:
#line 2090 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(2) - (2)].type);
		(yyval.type)->chan = Cboth;
	}
    break;

  case 336:
#line 2096 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (4)].type);
		(yyval.type)->chan = Cboth;
	}
    break;

  case 337:
#line 2102 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (3)].type);
		(yyval.type)->chan = Csend;
	}
    break;

  case 338:
#line 2110 "go.y"
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[(3) - (3)].type);
		(yyval.type)->chan = Crecv;
	}
    break;

  case 339:
#line 2118 "go.y"
    {
		(yyval.type) = functype(nil, (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list));
	}
    break;

  case 340:
#line 2124 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[(2) - (3)].type)));
		if((yyvsp[(1) - (3)].sym))
			(yyval.node)->left = newname((yyvsp[(1) - (3)].sym));
		(yyval.node)->val = (yyvsp[(3) - (3)].val);
	}
    break;

  case 341:
#line 2131 "go.y"
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

  case 342:
#line 2147 "go.y"
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

  case 343:
#line 2169 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[(1) - (5)].sym)), typenod(functype(fakethis(), (yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].list))));
	}
    break;

  case 344:
#line 2173 "go.y"
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[(1) - (1)].type)));
	}
    break;

  case 345:
#line 2178 "go.y"
    {
		(yyval.list) = nil;
	}
    break;

  case 347:
#line 2185 "go.y"
    {
		(yyval.list) = (yyvsp[(2) - (3)].list);
	}
    break;

  case 348:
#line 2189 "go.y"
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[(1) - (1)].type))));
	}
    break;

  case 349:
#line 2199 "go.y"
    {
		(yyval.node) = nodlit((yyvsp[(1) - (1)].val));
	}
    break;

  case 350:
#line 2203 "go.y"
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

  case 351:
#line 2222 "go.y"
    {
		(yyval.node) = oldname(pkglookup((yyvsp[(1) - (1)].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
    break;

  case 353:
#line 2231 "go.y"
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

  case 356:
#line 2247 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 357:
#line 2251 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 358:
#line 2257 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 359:
#line 2261 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;

  case 360:
#line 2267 "go.y"
    {
		(yyval.list) = list1((yyvsp[(1) - (1)].node));
	}
    break;

  case 361:
#line 2271 "go.y"
    {
		(yyval.list) = list((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node));
	}
    break;


/* Line 1267 of yacc.c.  */
#line 5026 "y.tab.c"
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


#line 2275 "go.y"


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}


