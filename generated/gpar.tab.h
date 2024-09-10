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

#ifndef YY_GPAR_GPAR_TAB_H_INCLUDED
# define YY_GPAR_GPAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int gpardebug;
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
    STR = 258,                     /* STR  */
    IDEN = 259,                    /* IDEN  */
    FNAME = 260,                   /* FNAME  */
    NUM = 261,                     /* NUM  */
    INUM = 262,                    /* INUM  */
    ASSIGNOP = 263,                /* ASSIGNOP  */
    EQUALS = 264,                  /* EQUALS  */
    MINUS = 265,                   /* MINUS  */
    TIMES = 266,                   /* TIMES  */
    DIVIDE = 267,                  /* DIVIDE  */
    COMMA = 268,                   /* COMMA  */
    OBRACK = 269,                  /* OBRACK  */
    CBRACK = 270,                  /* CBRACK  */
    LONG = 271,                    /* LONG  */
    DOUBLE = 272,                  /* DOUBLE  */
    STRING = 273,                  /* STRING  */
    IVEC = 274,                    /* IVEC  */
    FVEC = 275,                    /* FVEC  */
    VECTOR = 276,                  /* VECTOR  */
    SCALAR = 277                   /* SCALAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define STR 258
#define IDEN 259
#define FNAME 260
#define NUM 261
#define INUM 262
#define ASSIGNOP 263
#define EQUALS 264
#define MINUS 265
#define TIMES 266
#define DIVIDE 267
#define COMMA 268
#define OBRACK 269
#define CBRACK 270
#define LONG 271
#define DOUBLE 272
#define STRING 273
#define IVEC 274
#define FVEC 275
#define VECTOR 276
#define SCALAR 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "/home/auroradysis/code/rnpl_bbhutil/gpar.y"

  int inum;
  double num;
  char *str;
  value val;
  ivel_list *ivl;
  fvel_list *fvl;
  value_list *vl;
  assignment asgn;

#line 122 "gpar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE gparlval;


int gparparse (void);


#endif /* !YY_GPAR_GPAR_TAB_H_INCLUDED  */
