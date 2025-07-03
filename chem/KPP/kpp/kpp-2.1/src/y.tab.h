/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    JACOBIAN = 258,                /* JACOBIAN  */
    DOUBLE = 259,                  /* DOUBLE  */
    FUNCTION = 260,                /* FUNCTION  */
    DEFVAR = 261,                  /* DEFVAR  */
    DEFRAD = 262,                  /* DEFRAD  */
    DEFFIX = 263,                  /* DEFFIX  */
    SETVAR = 264,                  /* SETVAR  */
    SETRAD = 265,                  /* SETRAD  */
    SETFIX = 266,                  /* SETFIX  */
    HESSIAN = 267,                 /* HESSIAN  */
    STOICMAT = 268,                /* STOICMAT  */
    STOCHASTIC = 269,              /* STOCHASTIC  */
    INITVALUES = 270,              /* INITVALUES  */
    EQUATIONS = 271,               /* EQUATIONS  */
    LUMP = 272,                    /* LUMP  */
    INIEQUAL = 273,                /* INIEQUAL  */
    EQNEQUAL = 274,                /* EQNEQUAL  */
    EQNCOLON = 275,                /* EQNCOLON  */
    LMPCOLON = 276,                /* LMPCOLON  */
    LMPPLUS = 277,                 /* LMPPLUS  */
    SPCPLUS = 278,                 /* SPCPLUS  */
    SPCEQUAL = 279,                /* SPCEQUAL  */
    ATOMDECL = 280,                /* ATOMDECL  */
    CHECK = 281,                   /* CHECK  */
    CHECKALL = 282,                /* CHECKALL  */
    REORDER = 283,                 /* REORDER  */
    MEX = 284,                     /* MEX  */
    DUMMYINDEX = 285,              /* DUMMYINDEX  */
    EQNTAGS = 286,                 /* EQNTAGS  */
    LOOKAT = 287,                  /* LOOKAT  */
    LOOKATALL = 288,               /* LOOKATALL  */
    TRANSPORT = 289,               /* TRANSPORT  */
    TRANSPORTALL = 290,            /* TRANSPORTALL  */
    MONITOR = 291,                 /* MONITOR  */
    USES = 292,                    /* USES  */
    SPARSEDATA = 293,              /* SPARSEDATA  */
    WRFCONFORM = 294,              /* WRFCONFORM  */
    WRITE_ATM = 295,               /* WRITE_ATM  */
    WRITE_SPC = 296,               /* WRITE_SPC  */
    WRITE_MAT = 297,               /* WRITE_MAT  */
    WRITE_OPT = 298,               /* WRITE_OPT  */
    INITIALIZE = 299,              /* INITIALIZE  */
    XGRID = 300,                   /* XGRID  */
    YGRID = 301,                   /* YGRID  */
    ZGRID = 302,                   /* ZGRID  */
    USE = 303,                     /* USE  */
    LANGUAGE = 304,                /* LANGUAGE  */
    INTFILE = 305,                 /* INTFILE  */
    DRIVER = 306,                  /* DRIVER  */
    RUN = 307,                     /* RUN  */
    INLINE = 308,                  /* INLINE  */
    ENDINLINE = 309,               /* ENDINLINE  */
    PARAMETER = 310,               /* PARAMETER  */
    SPCSPC = 311,                  /* SPCSPC  */
    INISPC = 312,                  /* INISPC  */
    INIVALUE = 313,                /* INIVALUE  */
    EQNSPC = 314,                  /* EQNSPC  */
    EQNSIGN = 315,                 /* EQNSIGN  */
    EQNCOEF = 316,                 /* EQNCOEF  */
    RATE = 317,                    /* RATE  */
    LMPSPC = 318,                  /* LMPSPC  */
    SPCNR = 319,                   /* SPCNR  */
    ATOMID = 320,                  /* ATOMID  */
    LKTID = 321,                   /* LKTID  */
    MNIID = 322,                   /* MNIID  */
    INLCTX = 323,                  /* INLCTX  */
    INCODE = 324,                  /* INCODE  */
    SSPID = 325,                   /* SSPID  */
    EQNLESS = 326,                 /* EQNLESS  */
    EQNTAG = 327,                  /* EQNTAG  */
    EQNGREATER = 328,              /* EQNGREATER  */
    TPTID = 329,                   /* TPTID  */
    USEID = 330                    /* USEID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define JACOBIAN 258
#define DOUBLE 259
#define FUNCTION 260
#define DEFVAR 261
#define DEFRAD 262
#define DEFFIX 263
#define SETVAR 264
#define SETRAD 265
#define SETFIX 266
#define HESSIAN 267
#define STOICMAT 268
#define STOCHASTIC 269
#define INITVALUES 270
#define EQUATIONS 271
#define LUMP 272
#define INIEQUAL 273
#define EQNEQUAL 274
#define EQNCOLON 275
#define LMPCOLON 276
#define LMPPLUS 277
#define SPCPLUS 278
#define SPCEQUAL 279
#define ATOMDECL 280
#define CHECK 281
#define CHECKALL 282
#define REORDER 283
#define MEX 284
#define DUMMYINDEX 285
#define EQNTAGS 286
#define LOOKAT 287
#define LOOKATALL 288
#define TRANSPORT 289
#define TRANSPORTALL 290
#define MONITOR 291
#define USES 292
#define SPARSEDATA 293
#define WRFCONFORM 294
#define WRITE_ATM 295
#define WRITE_SPC 296
#define WRITE_MAT 297
#define WRITE_OPT 298
#define INITIALIZE 299
#define XGRID 300
#define YGRID 301
#define ZGRID 302
#define USE 303
#define LANGUAGE 304
#define INTFILE 305
#define DRIVER 306
#define RUN 307
#define INLINE 308
#define ENDINLINE 309
#define PARAMETER 310
#define SPCSPC 311
#define INISPC 312
#define INIVALUE 313
#define EQNSPC 314
#define EQNSIGN 315
#define EQNCOEF 316
#define RATE 317
#define LMPSPC 318
#define SPCNR 319
#define ATOMID 320
#define LKTID 321
#define MNIID 322
#define INLCTX 323
#define INCODE 324
#define SSPID 325
#define EQNLESS 326
#define EQNTAG 327
#define EQNGREATER 328
#define TPTID 329
#define USEID 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 67 "scan.y"

  char str[80];

#line 221 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
