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




/* First part of user prologue.  */
#line 34 "scan.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <malloc.h>
  #include <string.h>
  #include <unistd.h>
  #include "scan.h"

  #define __YYSCLASS

  #define YYDEBUG 1
  extern char yytext[];
  extern FILE * yyin;
  /* extern int yyerrstatus; */
  
  int nError   = 0;
  int nWarning = 0;

  int crt_section;
  int eqState;
  int isPhoto = 0;

  char crt_term[ 30 ];
  char crt_coef[ 30 ];

  char * InlineBuf;
  int InlineLen;

  void SemicolonError();
  extern int yyerrflag;


#line 104 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 311 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_JACOBIAN = 3,                   /* JACOBIAN  */
  YYSYMBOL_DOUBLE = 4,                     /* DOUBLE  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_DEFVAR = 6,                     /* DEFVAR  */
  YYSYMBOL_DEFRAD = 7,                     /* DEFRAD  */
  YYSYMBOL_DEFFIX = 8,                     /* DEFFIX  */
  YYSYMBOL_SETVAR = 9,                     /* SETVAR  */
  YYSYMBOL_SETRAD = 10,                    /* SETRAD  */
  YYSYMBOL_SETFIX = 11,                    /* SETFIX  */
  YYSYMBOL_HESSIAN = 12,                   /* HESSIAN  */
  YYSYMBOL_STOICMAT = 13,                  /* STOICMAT  */
  YYSYMBOL_STOCHASTIC = 14,                /* STOCHASTIC  */
  YYSYMBOL_INITVALUES = 15,                /* INITVALUES  */
  YYSYMBOL_EQUATIONS = 16,                 /* EQUATIONS  */
  YYSYMBOL_LUMP = 17,                      /* LUMP  */
  YYSYMBOL_INIEQUAL = 18,                  /* INIEQUAL  */
  YYSYMBOL_EQNEQUAL = 19,                  /* EQNEQUAL  */
  YYSYMBOL_EQNCOLON = 20,                  /* EQNCOLON  */
  YYSYMBOL_LMPCOLON = 21,                  /* LMPCOLON  */
  YYSYMBOL_LMPPLUS = 22,                   /* LMPPLUS  */
  YYSYMBOL_SPCPLUS = 23,                   /* SPCPLUS  */
  YYSYMBOL_SPCEQUAL = 24,                  /* SPCEQUAL  */
  YYSYMBOL_ATOMDECL = 25,                  /* ATOMDECL  */
  YYSYMBOL_CHECK = 26,                     /* CHECK  */
  YYSYMBOL_CHECKALL = 27,                  /* CHECKALL  */
  YYSYMBOL_REORDER = 28,                   /* REORDER  */
  YYSYMBOL_MEX = 29,                       /* MEX  */
  YYSYMBOL_DUMMYINDEX = 30,                /* DUMMYINDEX  */
  YYSYMBOL_EQNTAGS = 31,                   /* EQNTAGS  */
  YYSYMBOL_LOOKAT = 32,                    /* LOOKAT  */
  YYSYMBOL_LOOKATALL = 33,                 /* LOOKATALL  */
  YYSYMBOL_TRANSPORT = 34,                 /* TRANSPORT  */
  YYSYMBOL_TRANSPORTALL = 35,              /* TRANSPORTALL  */
  YYSYMBOL_MONITOR = 36,                   /* MONITOR  */
  YYSYMBOL_USES = 37,                      /* USES  */
  YYSYMBOL_SPARSEDATA = 38,                /* SPARSEDATA  */
  YYSYMBOL_WRFCONFORM = 39,                /* WRFCONFORM  */
  YYSYMBOL_WRITE_ATM = 40,                 /* WRITE_ATM  */
  YYSYMBOL_WRITE_SPC = 41,                 /* WRITE_SPC  */
  YYSYMBOL_WRITE_MAT = 42,                 /* WRITE_MAT  */
  YYSYMBOL_WRITE_OPT = 43,                 /* WRITE_OPT  */
  YYSYMBOL_INITIALIZE = 44,                /* INITIALIZE  */
  YYSYMBOL_XGRID = 45,                     /* XGRID  */
  YYSYMBOL_YGRID = 46,                     /* YGRID  */
  YYSYMBOL_ZGRID = 47,                     /* ZGRID  */
  YYSYMBOL_USE = 48,                       /* USE  */
  YYSYMBOL_LANGUAGE = 49,                  /* LANGUAGE  */
  YYSYMBOL_INTFILE = 50,                   /* INTFILE  */
  YYSYMBOL_DRIVER = 51,                    /* DRIVER  */
  YYSYMBOL_RUN = 52,                       /* RUN  */
  YYSYMBOL_INLINE = 53,                    /* INLINE  */
  YYSYMBOL_ENDINLINE = 54,                 /* ENDINLINE  */
  YYSYMBOL_PARAMETER = 55,                 /* PARAMETER  */
  YYSYMBOL_SPCSPC = 56,                    /* SPCSPC  */
  YYSYMBOL_INISPC = 57,                    /* INISPC  */
  YYSYMBOL_INIVALUE = 58,                  /* INIVALUE  */
  YYSYMBOL_EQNSPC = 59,                    /* EQNSPC  */
  YYSYMBOL_EQNSIGN = 60,                   /* EQNSIGN  */
  YYSYMBOL_EQNCOEF = 61,                   /* EQNCOEF  */
  YYSYMBOL_RATE = 62,                      /* RATE  */
  YYSYMBOL_LMPSPC = 63,                    /* LMPSPC  */
  YYSYMBOL_SPCNR = 64,                     /* SPCNR  */
  YYSYMBOL_ATOMID = 65,                    /* ATOMID  */
  YYSYMBOL_LKTID = 66,                     /* LKTID  */
  YYSYMBOL_MNIID = 67,                     /* MNIID  */
  YYSYMBOL_INLCTX = 68,                    /* INLCTX  */
  YYSYMBOL_INCODE = 69,                    /* INCODE  */
  YYSYMBOL_SSPID = 70,                     /* SSPID  */
  YYSYMBOL_EQNLESS = 71,                   /* EQNLESS  */
  YYSYMBOL_EQNTAG = 72,                    /* EQNTAG  */
  YYSYMBOL_EQNGREATER = 73,                /* EQNGREATER  */
  YYSYMBOL_TPTID = 74,                     /* TPTID  */
  YYSYMBOL_USEID = 75,                     /* USEID  */
  YYSYMBOL_76_ = 76,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_program = 78,                   /* program  */
  YYSYMBOL_section = 79,                   /* section  */
  YYSYMBOL_semicolon = 80,                 /* semicolon  */
  YYSYMBOL_atomlist = 81,                  /* atomlist  */
  YYSYMBOL_atomdef = 82,                   /* atomdef  */
  YYSYMBOL_lookatlist = 83,                /* lookatlist  */
  YYSYMBOL_lookatspc = 84,                 /* lookatspc  */
  YYSYMBOL_monitorlist = 85,               /* monitorlist  */
  YYSYMBOL_monitorspc = 86,                /* monitorspc  */
  YYSYMBOL_translist = 87,                 /* translist  */
  YYSYMBOL_transspc = 88,                  /* transspc  */
  YYSYMBOL_uselist = 89,                   /* uselist  */
  YYSYMBOL_usefile = 90,                   /* usefile  */
  YYSYMBOL_setspclist = 91,                /* setspclist  */
  YYSYMBOL_setspcspc = 92,                 /* setspcspc  */
  YYSYMBOL_species = 93,                   /* species  */
  YYSYMBOL_spc = 94,                       /* spc  */
  YYSYMBOL_spcname = 95,                   /* spcname  */
  YYSYMBOL_spcdef = 96,                    /* spcdef  */
  YYSYMBOL_atoms = 97,                     /* atoms  */
  YYSYMBOL_atom = 98,                      /* atom  */
  YYSYMBOL_initvalues = 99,                /* initvalues  */
  YYSYMBOL_assignment = 100,               /* assignment  */
  YYSYMBOL_equations = 101,                /* equations  */
  YYSYMBOL_equation = 102,                 /* equation  */
  YYSYMBOL_rate = 103,                     /* rate  */
  YYSYMBOL_eqntag = 104,                   /* eqntag  */
  YYSYMBOL_lefths = 105,                   /* lefths  */
  YYSYMBOL_righths = 106,                  /* righths  */
  YYSYMBOL_expresion = 107,                /* expresion  */
  YYSYMBOL_term = 108,                     /* term  */
  YYSYMBOL_lumps = 109,                    /* lumps  */
  YYSYMBOL_lump = 110,                     /* lump  */
  YYSYMBOL_inlinecode = 111                /* inlinecode  */
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
#define YYFINAL  123
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    76,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    93,    95,    98,   101,   104,   107,   110,
     113,   116,   119,   122,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   184,   186,   188,   190,   192,   194,   197,   201,
     204,   206,   207,   208,   211,   218,   219,   220,   223,   227,
     228,   229,   232,   236,   237,   238,   241,   245,   246,   247,
     250,   254,   255,   256,   259,   267,   268,   269,   272,   273,
     275,   283,   291,   292,   294,   297,   301,   302,   303,   306,
     309,   310,   311,   316,   321,   326,   330,   334,   338,   341,
     344,   347,   350,   354,   358,   363,   364,   365,   368,   371,
     376,   380
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
  "\"end of file\"", "error", "\"invalid token\"", "JACOBIAN", "DOUBLE",
  "FUNCTION", "DEFVAR", "DEFRAD", "DEFFIX", "SETVAR", "SETRAD", "SETFIX",
  "HESSIAN", "STOICMAT", "STOCHASTIC", "INITVALUES", "EQUATIONS", "LUMP",
  "INIEQUAL", "EQNEQUAL", "EQNCOLON", "LMPCOLON", "LMPPLUS", "SPCPLUS",
  "SPCEQUAL", "ATOMDECL", "CHECK", "CHECKALL", "REORDER", "MEX",
  "DUMMYINDEX", "EQNTAGS", "LOOKAT", "LOOKATALL", "TRANSPORT",
  "TRANSPORTALL", "MONITOR", "USES", "SPARSEDATA", "WRFCONFORM",
  "WRITE_ATM", "WRITE_SPC", "WRITE_MAT", "WRITE_OPT", "INITIALIZE",
  "XGRID", "YGRID", "ZGRID", "USE", "LANGUAGE", "INTFILE", "DRIVER", "RUN",
  "INLINE", "ENDINLINE", "PARAMETER", "SPCSPC", "INISPC", "INIVALUE",
  "EQNSPC", "EQNSIGN", "EQNCOEF", "RATE", "LMPSPC", "SPCNR", "ATOMID",
  "LKTID", "MNIID", "INLCTX", "INCODE", "SSPID", "EQNLESS", "EQNTAG",
  "EQNGREATER", "TPTID", "USEID", "';'", "$accept", "program", "section",
  "semicolon", "atomlist", "atomdef", "lookatlist", "lookatspc",
  "monitorlist", "monitorspc", "translist", "transspc", "uselist",
  "usefile", "setspclist", "setspcspc", "species", "spc", "spcname",
  "spcdef", "atoms", "atom", "initvalues", "assignment", "equations",
  "equation", "rate", "eqntag", "lefths", "righths", "expresion", "term",
  "lumps", "lump", "inlinecode", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     111,   -35,   -32,   -29,    27,    27,    27,     3,     3,     3,
     -24,   -21,   -11,     9,     8,    24,     6,     6,   -87,    10,
      15,    31,    42,    18,   -87,     0,   -87,     5,     1,    44,
     -87,   -87,   -87,   -87,   -87,    45,    47,    48,    50,    51,
      53,    54,    56,    57,    12,    55,   111,   -87,   -87,   -87,
      58,   105,    74,    58,   -87,   -87,    74,    74,    58,   -87,
      61,    58,    61,    61,   -87,   -87,   -87,    58,   114,    76,
      58,    58,   -87,     2,   106,    63,   -20,    58,    -1,    -1,
      -8,   -87,    58,    68,   103,    58,    58,   -87,   102,    58,
     102,   -87,   -87,   -87,   -87,    58,   -87,   104,    58,    58,
     -87,    94,    58,    58,   -87,   107,    58,    58,   -87,    96,
      58,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   100,   -87,   -87,   -87,    97,   -34,    58,    97,
      97,    58,    97,    97,   117,    58,    97,    97,   -87,   -87,
      99,    58,    97,    -1,   115,    -4,   -87,     2,    97,   113,
     103,    58,    97,    97,    58,    97,    97,    58,    97,    97,
      58,    97,    97,    58,    97,    97,    58,    97,   -87,   -42,
     -87,   -87,   122,   156,   -87,    97,    97,   -87,    97,   -87,
      97,   115,   115,   -87,   -87,   -87,   -87,   -87,    97,    97,
      97,    97,    97,    97,   -87,   -87,   -87,   -34,   -87,   -87,
     -87
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,    29,     0,    30,     0,     0,     0,
      48,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     4,     7,    12,
       0,    81,    16,     0,    78,    79,    17,    18,     0,    74,
      19,     0,    20,    21,     5,     6,    13,     0,     0,    22,
       0,     0,   104,     0,     0,     0,    23,     0,     0,     0,
       0,   102,     0,     0,    24,     0,     0,    54,    14,     0,
      15,     8,     9,    10,    11,     0,    58,    25,     0,     0,
      66,    27,     0,     0,    62,    26,     0,     0,    70,    46,
       0,    47,    37,    38,    39,    40,    35,    36,    43,    44,
      45,    42,     0,     1,     3,    50,    77,     0,     0,    76,
      73,     0,    72,    88,     0,     0,    87,    92,   101,   103,
       0,     0,    91,     0,     0,     0,    98,     0,   107,     0,
       0,     0,   106,    53,     0,    52,    57,     0,    56,    65,
       0,    64,    61,     0,    60,    69,     0,    68,   111,     0,
      49,    85,     0,    80,    83,    75,    71,    89,    86,    97,
      90,     0,    96,    94,    99,   100,   109,   108,   105,    51,
      55,    63,    59,    67,    41,   110,    84,     0,    93,    95,
      82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   134,   -87,   -53,   164,   -26,   -87,    85,   -87,    78,
     -87,    84,   -87,    75,    83,   -25,    88,    -9,   -87,   -87,
     -87,   -10,   -87,   119,   -87,   110,   -86,   -87,   112,    46,
     -58,   -70,   -87,   -69,   -87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    45,    46,   126,    88,    89,    97,    98,   105,   106,
     101,   102,   109,   110,    60,    61,    52,    53,    54,    55,
     173,   174,    69,    70,    76,    77,   183,    78,    79,   144,
      80,    81,    84,    85,   169
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     129,    99,   107,   138,    58,   130,   103,    86,   132,    71,
      67,   146,   194,   121,   133,   151,   184,   136,   137,    95,
      47,   145,   171,    48,   142,    82,    49,   195,    50,   148,
     172,    64,   152,   153,    65,   131,   155,   131,   131,    72,
      73,    74,   156,   128,    66,   158,   159,   128,   128,   161,
     162,    75,   147,   164,   165,   123,   147,   167,    72,    73,
      74,    72,   154,    74,   154,    91,    68,    72,    73,    74,
      92,    87,   104,    59,   100,   175,   108,   185,   176,    75,
     122,   187,   178,    51,    96,   145,    93,    83,   180,   149,
     150,    62,    63,    56,    57,   198,   199,    94,   188,   111,
     112,   189,   113,   114,   190,   115,   116,   191,   117,   118,
     192,   119,   120,   193,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   127,
      51,    59,   134,    68,   125,   140,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   139,    83,    87,   100,   168,
      96,   108,   179,   170,   104,   177,   186,   182,   196,   197,
     124,    90,   157,   163,   166,   160,   141,   200,   135,   181,
     143
};

static const yytype_uint8 yycheck[] =
{
      53,     1,     1,    73,     1,    58,     1,     1,    61,     1,
       1,    19,    54,     1,    67,    84,    20,    70,    71,     1,
      55,    79,    56,    55,    77,     1,    55,    69,     1,    82,
      64,    55,    85,    86,    55,    60,    89,    62,    63,    59,
      60,    61,    95,    52,    55,    98,    99,    56,    57,   102,
     103,    71,    60,   106,   107,     0,    60,   110,    59,    60,
      61,    59,    88,    61,    90,    55,    57,    59,    60,    61,
      55,    65,    67,    70,    74,   128,    75,   147,   131,    71,
      68,   150,   135,    56,    66,   143,    55,    63,   141,    21,
      22,     8,     9,     5,     6,   181,   182,    55,   151,    55,
      55,   154,    55,    55,   157,    55,    55,   160,    55,    55,
     163,    55,    55,   166,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    24,
      56,    70,    18,    57,    76,    72,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    59,    63,    65,    74,    69,
      66,    75,    73,    76,    67,    58,    63,    62,    56,    23,
      46,    17,    97,   105,   109,   101,    76,   197,    69,   143,
      78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    78,    79,    55,    55,    55,
       1,    56,    93,    94,    95,    96,    93,    93,     1,    70,
      91,    92,    91,    91,    55,    55,    55,     1,    57,    99,
     100,     1,    59,    60,    61,    71,   101,   102,   104,   105,
     107,   108,     1,    63,   109,   110,     1,    65,    81,    82,
      81,    55,    55,    55,    55,     1,    66,    83,    84,     1,
      74,    87,    88,     1,    67,    85,    86,     1,    75,    89,
      90,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,     1,    68,     0,    78,    76,    80,    24,    94,    80,
      80,    92,    80,    80,    18,   100,    80,    80,   108,    59,
      72,   102,    80,   105,   106,   107,    19,    60,    80,    21,
      22,   110,    80,    80,    82,    80,    80,    84,    80,    80,
      88,    80,    80,    86,    80,    80,    90,    80,    69,   111,
      76,    56,    64,    97,    98,    80,    80,    58,    80,    73,
      80,   106,    62,   103,    20,   108,    63,   110,    80,    80,
      80,    80,    80,    80,    54,    69,    56,    23,   103,   103,
      98
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    82,    83,    83,    83,    84,    85,
      85,    85,    86,    87,    87,    87,    88,    89,    89,    89,
      90,    91,    91,    91,    92,    93,    93,    93,    94,    94,
      95,    96,    97,    97,    98,    98,    99,    99,    99,   100,
     101,   101,   101,   102,   102,   103,   103,   104,   105,   106,
     107,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     4,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     3,
       2,     2,     1,     3,     2,     2,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     1,
       3,     1,     3,     1,     2,     1,     3,     2,     2,     3,
       3,     2,     2,     4,     3,     2,     1,     3,     2,     2,
       3,     2,     1,     2,     1,     3,     2,     2,     3,     3,
       2,     1
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
  case 4: /* section: JACOBIAN PARAMETER  */
#line 96 "scan.y"
                  { CmdJacobian( (yyvsp[0].str) );
                  }
#line 1550 "y.tab.c"
    break;

  case 5: /* section: HESSIAN PARAMETER  */
#line 99 "scan.y"
                  { CmdHessian( (yyvsp[0].str) );
                  }
#line 1557 "y.tab.c"
    break;

  case 6: /* section: STOICMAT PARAMETER  */
#line 102 "scan.y"
                  { CmdStoicmat( (yyvsp[0].str) );
                  }
#line 1564 "y.tab.c"
    break;

  case 7: /* section: DOUBLE PARAMETER  */
#line 105 "scan.y"
                  { CmdDouble( (yyvsp[0].str) );
                  }
#line 1571 "y.tab.c"
    break;

  case 8: /* section: REORDER PARAMETER  */
#line 108 "scan.y"
                  { CmdReorder( (yyvsp[0].str) );
                  }
#line 1578 "y.tab.c"
    break;

  case 9: /* section: MEX PARAMETER  */
#line 111 "scan.y"
                  { CmdMex( (yyvsp[0].str) );
                  }
#line 1585 "y.tab.c"
    break;

  case 10: /* section: DUMMYINDEX PARAMETER  */
#line 114 "scan.y"
                  { CmdDummyindex( (yyvsp[0].str) );
                  }
#line 1592 "y.tab.c"
    break;

  case 11: /* section: EQNTAGS PARAMETER  */
#line 117 "scan.y"
                  { CmdEqntags( (yyvsp[0].str) );
                  }
#line 1599 "y.tab.c"
    break;

  case 12: /* section: FUNCTION PARAMETER  */
#line 120 "scan.y"
                  { CmdFunction( (yyvsp[0].str) );
                  }
#line 1606 "y.tab.c"
    break;

  case 13: /* section: STOCHASTIC PARAMETER  */
#line 123 "scan.y"
                  { CmdStochastic( (yyvsp[0].str) );
                  }
#line 1613 "y.tab.c"
    break;

  case 14: /* section: ATOMDECL atomlist  */
#line 126 "scan.y"
                  {}
#line 1619 "y.tab.c"
    break;

  case 15: /* section: CHECK atomlist  */
#line 128 "scan.y"
                  {}
#line 1625 "y.tab.c"
    break;

  case 16: /* section: DEFVAR species  */
#line 130 "scan.y"
                  {}
#line 1631 "y.tab.c"
    break;

  case 17: /* section: DEFRAD species  */
#line 132 "scan.y"
                  {}
#line 1637 "y.tab.c"
    break;

  case 18: /* section: DEFFIX species  */
#line 134 "scan.y"
                  {}
#line 1643 "y.tab.c"
    break;

  case 19: /* section: SETVAR setspclist  */
#line 136 "scan.y"
                  {}
#line 1649 "y.tab.c"
    break;

  case 20: /* section: SETRAD setspclist  */
#line 138 "scan.y"
                  {}
#line 1655 "y.tab.c"
    break;

  case 21: /* section: SETFIX setspclist  */
#line 140 "scan.y"
                  {}
#line 1661 "y.tab.c"
    break;

  case 22: /* section: INITVALUES initvalues  */
#line 142 "scan.y"
                  {}
#line 1667 "y.tab.c"
    break;

  case 23: /* section: EQUATIONS equations  */
#line 144 "scan.y"
                  {}
#line 1673 "y.tab.c"
    break;

  case 24: /* section: LUMP lumps  */
#line 146 "scan.y"
                  {}
#line 1679 "y.tab.c"
    break;

  case 25: /* section: LOOKAT lookatlist  */
#line 148 "scan.y"
                  {}
#line 1685 "y.tab.c"
    break;

  case 26: /* section: MONITOR monitorlist  */
#line 150 "scan.y"
                  {}
#line 1691 "y.tab.c"
    break;

  case 27: /* section: TRANSPORT translist  */
#line 152 "scan.y"
                  {}
#line 1697 "y.tab.c"
    break;

  case 28: /* section: CHECKALL  */
#line 154 "scan.y"
                  { CheckAll(); }
#line 1703 "y.tab.c"
    break;

  case 29: /* section: LOOKATALL  */
#line 156 "scan.y"
                  { LookAtAll(); }
#line 1709 "y.tab.c"
    break;

  case 30: /* section: TRANSPORTALL  */
#line 158 "scan.y"
                  { TransportAll(); }
#line 1715 "y.tab.c"
    break;

  case 31: /* section: WRITE_ATM  */
#line 160 "scan.y"
                  { WriteAtoms(); }
#line 1721 "y.tab.c"
    break;

  case 32: /* section: WRITE_SPC  */
#line 162 "scan.y"
                  { WriteSpecies(); }
#line 1727 "y.tab.c"
    break;

  case 33: /* section: WRITE_MAT  */
#line 164 "scan.y"
                  { WriteMatrices(); }
#line 1733 "y.tab.c"
    break;

  case 34: /* section: WRITE_OPT  */
#line 166 "scan.y"
                  { WriteOptions(); }
#line 1739 "y.tab.c"
    break;

  case 35: /* section: USE PARAMETER  */
#line 168 "scan.y"
                  { CmdUse( (yyvsp[0].str) ); }
#line 1745 "y.tab.c"
    break;

  case 36: /* section: LANGUAGE PARAMETER  */
#line 170 "scan.y"
                  { CmdLanguage( (yyvsp[0].str) ); }
#line 1751 "y.tab.c"
    break;

  case 37: /* section: INITIALIZE PARAMETER  */
#line 172 "scan.y"
                  { DefineInitializeNbr( (yyvsp[0].str) ); }
#line 1757 "y.tab.c"
    break;

  case 38: /* section: XGRID PARAMETER  */
#line 174 "scan.y"
                  { DefineXGrid( (yyvsp[0].str) ); }
#line 1763 "y.tab.c"
    break;

  case 39: /* section: YGRID PARAMETER  */
#line 176 "scan.y"
                  { DefineYGrid( (yyvsp[0].str) ); }
#line 1769 "y.tab.c"
    break;

  case 40: /* section: ZGRID PARAMETER  */
#line 178 "scan.y"
                  { DefineZGrid( (yyvsp[0].str) ); }
#line 1775 "y.tab.c"
    break;

  case 41: /* section: INLINE INLCTX inlinecode ENDINLINE  */
#line 180 "scan.y"
                  { 
		    AddInlineCode( (yyvsp[-2].str), InlineBuf );
                    free( InlineBuf );
		  }
#line 1784 "y.tab.c"
    break;

  case 42: /* section: INLINE error  */
#line 185 "scan.y"
                  { ParserErrorMessage(); }
#line 1790 "y.tab.c"
    break;

  case 43: /* section: INTFILE PARAMETER  */
#line 187 "scan.y"
                  { CmdIntegrator( (yyvsp[0].str) ); }
#line 1796 "y.tab.c"
    break;

  case 44: /* section: DRIVER PARAMETER  */
#line 189 "scan.y"
                  { CmdDriver( (yyvsp[0].str) ); }
#line 1802 "y.tab.c"
    break;

  case 45: /* section: RUN PARAMETER  */
#line 191 "scan.y"
                  { CmdRun( (yyvsp[0].str) ); }
#line 1808 "y.tab.c"
    break;

  case 46: /* section: USES uselist  */
#line 193 "scan.y"
                  {}
#line 1814 "y.tab.c"
    break;

  case 47: /* section: SPARSEDATA PARAMETER  */
#line 195 "scan.y"
                  { SparseData( (yyvsp[0].str) );
                  }
#line 1821 "y.tab.c"
    break;

  case 48: /* section: WRFCONFORM  */
#line 198 "scan.y"
                  { WRFConform(); 
                  }
#line 1828 "y.tab.c"
    break;

  case 49: /* semicolon: semicolon ';'  */
#line 202 "scan.y"
                  { ScanWarning("Unnecessary ';'");
                  }
#line 1835 "y.tab.c"
    break;

  case 53: /* atomlist: error semicolon  */
#line 209 "scan.y"
                  { ParserErrorMessage(); }
#line 1841 "y.tab.c"
    break;

  case 54: /* atomdef: ATOMID  */
#line 212 "scan.y"
                  { switch( crt_section ) {
                      case ATOMDECL: DeclareAtom( (yyvsp[0].str) ); break;
                      case CHECK:    SetAtomType( (yyvsp[0].str), DO_CHECK ); break;
                    }
                  }
#line 1851 "y.tab.c"
    break;

  case 57: /* lookatlist: error semicolon  */
#line 221 "scan.y"
                  { ParserErrorMessage(); }
#line 1857 "y.tab.c"
    break;

  case 58: /* lookatspc: LKTID  */
#line 224 "scan.y"
                  { AddLookAt( (yyvsp[0].str) );
                  }
#line 1864 "y.tab.c"
    break;

  case 61: /* monitorlist: error semicolon  */
#line 230 "scan.y"
                  { ParserErrorMessage(); }
#line 1870 "y.tab.c"
    break;

  case 62: /* monitorspc: MNIID  */
#line 233 "scan.y"
                  { AddMonitor( (yyvsp[0].str) );
                  }
#line 1877 "y.tab.c"
    break;

  case 65: /* translist: error semicolon  */
#line 239 "scan.y"
                  { ParserErrorMessage(); }
#line 1883 "y.tab.c"
    break;

  case 66: /* transspc: TPTID  */
#line 242 "scan.y"
                  { AddTransport( (yyvsp[0].str) );
                  }
#line 1890 "y.tab.c"
    break;

  case 69: /* uselist: error semicolon  */
#line 248 "scan.y"
                  { ParserErrorMessage(); }
#line 1896 "y.tab.c"
    break;

  case 70: /* usefile: USEID  */
#line 251 "scan.y"
                  { AddUseFile( (yyvsp[0].str) );
                  }
#line 1903 "y.tab.c"
    break;

  case 73: /* setspclist: error semicolon  */
#line 257 "scan.y"
                  { ParserErrorMessage(); }
#line 1909 "y.tab.c"
    break;

  case 74: /* setspcspc: SSPID  */
#line 260 "scan.y"
                  { switch( crt_section ) {
                      case SETVAR: SetSpcType( VAR_SPC, (yyvsp[0].str) ); break;
                      case SETRAD: SetSpcType( RAD_SPC, (yyvsp[0].str) ); break;
                      case SETFIX: SetSpcType( FIX_SPC, (yyvsp[0].str) ); break;
                    }
                  }
#line 1920 "y.tab.c"
    break;

  case 77: /* species: error semicolon  */
#line 270 "scan.y"
                  { ParserErrorMessage(); }
#line 1926 "y.tab.c"
    break;

  case 80: /* spcname: SPCSPC SPCEQUAL atoms  */
#line 276 "scan.y"
                  { switch( crt_section ) {
                      case DEFVAR: DeclareSpecies( VAR_SPC, (yyvsp[-2].str) ); break;
                      case DEFRAD: DeclareSpecies( RAD_SPC, (yyvsp[-2].str) ); break;
                      case DEFFIX: DeclareSpecies( FIX_SPC, (yyvsp[-2].str) ); break;
                    } 
                  }
#line 1937 "y.tab.c"
    break;

  case 81: /* spcdef: SPCSPC  */
#line 284 "scan.y"
                  { switch( crt_section ) {
                      case DEFVAR: DeclareSpecies( VAR_SPC, (yyvsp[0].str) ); break;
                      case DEFRAD: DeclareSpecies( RAD_SPC, (yyvsp[0].str) ); break;
                      case DEFFIX: DeclareSpecies( FIX_SPC, (yyvsp[0].str) ); break;
                    } 
                  }
#line 1948 "y.tab.c"
    break;

  case 84: /* atom: SPCNR SPCSPC  */
#line 295 "scan.y"
                  { AddAtom( (yyvsp[0].str), (yyvsp[-1].str) );
                  }
#line 1955 "y.tab.c"
    break;

  case 85: /* atom: SPCSPC  */
#line 298 "scan.y"
                  { AddAtom( (yyvsp[0].str), "1" );
                  }
#line 1962 "y.tab.c"
    break;

  case 88: /* initvalues: error semicolon  */
#line 304 "scan.y"
                  { ParserErrorMessage(); }
#line 1968 "y.tab.c"
    break;

  case 89: /* assignment: INISPC INIEQUAL INIVALUE  */
#line 307 "scan.y"
                  { AssignInitialValue( (yyvsp[-2].str), (yyvsp[0].str) ); }
#line 1974 "y.tab.c"
    break;

  case 92: /* equations: error semicolon  */
#line 312 "scan.y"
                  { ParserErrorMessage();
                    eqState = LHS; 
                  }
#line 1982 "y.tab.c"
    break;

  case 93: /* equation: eqntag lefths righths rate  */
#line 317 "scan.y"
                  { eqState = LHS;
                    StoreEquationRate( (yyvsp[0].str), (yyvsp[-3].str) ); 
                    CheckEquation();
                  }
#line 1991 "y.tab.c"
    break;

  case 94: /* equation: lefths righths rate  */
#line 322 "scan.y"
                  { eqState = LHS;
                    StoreEquationRate( (yyvsp[0].str), "          " ); 
                    CheckEquation();
                  }
#line 2000 "y.tab.c"
    break;

  case 95: /* rate: RATE rate  */
#line 327 "scan.y"
                  { strcpy( (yyval.str), (yyvsp[-1].str) );
                    strcat( (yyval.str), (yyvsp[0].str) ); 
                  }
#line 2008 "y.tab.c"
    break;

  case 96: /* rate: RATE  */
#line 331 "scan.y"
                  { strcpy( (yyval.str), (yyvsp[0].str) );
                  }
#line 2015 "y.tab.c"
    break;

  case 97: /* eqntag: EQNLESS EQNTAG EQNGREATER  */
#line 335 "scan.y"
                  { strcpy( (yyval.str), (yyvsp[-1].str) );
                  }
#line 2022 "y.tab.c"
    break;

  case 98: /* lefths: expresion EQNEQUAL  */
#line 339 "scan.y"
                  { eqState = RHS; }
#line 2028 "y.tab.c"
    break;

  case 99: /* righths: expresion EQNCOLON  */
#line 342 "scan.y"
                  { eqState = RAT; }
#line 2034 "y.tab.c"
    break;

  case 100: /* expresion: expresion EQNSIGN term  */
#line 345 "scan.y"
                  { ProcessTerm( eqState, (yyvsp[-1].str), crt_coef, crt_term ); 
                  }
#line 2041 "y.tab.c"
    break;

  case 101: /* expresion: EQNSIGN term  */
#line 348 "scan.y"
                  { ProcessTerm( eqState, (yyvsp[-1].str), crt_coef, crt_term );
                  }
#line 2048 "y.tab.c"
    break;

  case 102: /* expresion: term  */
#line 351 "scan.y"
                  { ProcessTerm( eqState, "+", crt_coef, crt_term );
                  }
#line 2055 "y.tab.c"
    break;

  case 103: /* term: EQNCOEF EQNSPC  */
#line 355 "scan.y"
                  { strcpy( crt_term, (yyvsp[0].str) );
                    strcpy( crt_coef, (yyvsp[-1].str) );  
                  }
#line 2063 "y.tab.c"
    break;

  case 104: /* term: EQNSPC  */
#line 359 "scan.y"
                  { strcpy( crt_term, (yyvsp[0].str) );         
                    strcpy( crt_coef, "1" ); 
                  }
#line 2071 "y.tab.c"
    break;

  case 107: /* lumps: error semicolon  */
#line 366 "scan.y"
                  { ParserErrorMessage(); }
#line 2077 "y.tab.c"
    break;

  case 108: /* lump: LMPSPC LMPPLUS lump  */
#line 369 "scan.y"
                  { AddLumpSpecies( (yyvsp[-2].str) );
                  }
#line 2084 "y.tab.c"
    break;

  case 109: /* lump: LMPSPC LMPCOLON LMPSPC  */
#line 372 "scan.y"
                  {
                    AddLumpSpecies( (yyvsp[-2].str) );
                    CheckLump( (yyvsp[0].str) );  
                  }
#line 2093 "y.tab.c"
    break;

  case 110: /* inlinecode: inlinecode INCODE  */
#line 377 "scan.y"
                  {
		    InlineBuf = AppendString( InlineBuf, (yyvsp[0].str), &InlineLen, MAX_INLINE );
		  }
#line 2101 "y.tab.c"
    break;

  case 111: /* inlinecode: INCODE  */
#line 381 "scan.y"
                  {
		    InlineBuf = malloc( MAX_INLINE ); 
                    InlineLen = MAX_INLINE;
		    strcpy( InlineBuf, (yyvsp[0].str));
		  }
#line 2111 "y.tab.c"
    break;


#line 2115 "y.tab.c"

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

#line 387 "scan.y"


void yyerror( char * str )
{
}

void ParserErrorMessage()
{
#ifndef YYBISON
  yyerrok;
#endif
/*
  Message("[%d,%s] -> [%d,%s]", crtTokType, crtToken, nextTokType, nextToken );  
*/
  if( crtToken[0] == ';' ) {
    ParserError("Misplaced ';'");
    return;
  }
  switch( crtTokType ) {
    case ATOMID:
      ParserError("Missing ';' after '%s'", crtToken );
      break; 

    case SPCSPC: 
      ParserError("Missing ';' or '+' after '%s'", crtToken );
      break; 
    case SPCNR:
      ParserError("Missing species after '%s'", crtToken );
      break; 
    case SPCPLUS:
      ParserError("Missing atom after '%s'", crtToken );
      break; 
    case SPCEQUAL:
      ParserError("Invalid '=' after '%s'", crtToken );
      break; 

    case INISPC: 
      ParserError("Missing '=' after '%s'", crtToken );
      break; 
    case INIEQUAL: 
      ParserError("Missing value after '%s'", crtToken );
      break; 
    case INIVALUE: 
      ParserError("Missing ';' after '%s'", crtToken );
      break; 

    case EQNSPC: 
      ParserError("Missing '+' or '=' after '%s'", crtToken );
      break; 
    case EQNEQUAL: 
      ParserError("Invalid right hand side of equation");
      break; 
    case EQNCOLON: 
      ParserError("Missing rate after '%s'", crtToken );
      break; 
    case EQNSIGN: 
      ParserError("Missing coeficient after '%s'", crtToken );
      break; 
    case EQNCOEF: 
      ParserError("Missing species after '%s'", crtToken );
      break; 
    case RATE: 
      ParserError("Missing ';' after '%s'", crtToken );
      break; 

    case LMPSPC: 
      ParserError("Missing '+' or ':' or ';' after '%s'", crtToken );
      break; 
    case LMPPLUS: 
      ParserError("Missing species after '%s'", crtToken );
      break; 
    case LMPCOLON: 
      ParserError("Missing species after '%s'", crtToken );
      break; 
    case INLINE:
      ParserError("Missing inline option after '%s'", crtToken );
      break;

    default:
      ParserError("Syntax error after '%s'", crtToken ); 
  }
}


int Parser( char * filename )
{
extern int yydebug;
FILE *f;

  crt_filename = filename;

  f = fopen( crt_filename, "r" );
  if( f == 0 ) {
    FatalError(7,"%s: File not found", crt_filename);
  } 
  
  yyin = f;
  nError   = 0;
  nWarning = 0;
  yydebug = 0;

  yyparse();

  fclose( f );

  return nError;
}          

