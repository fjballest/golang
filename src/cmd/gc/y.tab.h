/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 162 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

