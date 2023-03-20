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

#ifndef YY_YY_BIN_C_SMALL_TAB_HPP_INCLUDED
# define YY_YY_BIN_C_SMALL_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/c_small.y"

  #include "../src/include/ast.hpp"
  #include "../src/include/ast/tokens.hpp"
  #include <cassert>
  #include <string>
  #include <iostream>

  extern Node *g_root; // A way of getting the AST out
  extern FILE *yyin;

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 66 "bin/c_small.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    KW_AUTO = 258,                 /* KW_AUTO  */
    KW_DOUBLE = 259,               /* KW_DOUBLE  */
    KW_INT = 260,                  /* KW_INT  */
    KW_STRUCT = 261,               /* KW_STRUCT  */
    KW_BREAK = 262,                /* KW_BREAK  */
    KW_ELSE = 263,                 /* KW_ELSE  */
    KW_LONG = 264,                 /* KW_LONG  */
    KW_SWITCH = 265,               /* KW_SWITCH  */
    KW_CASE = 266,                 /* KW_CASE  */
    KW_ENUM = 267,                 /* KW_ENUM  */
    KW_REGISTER = 268,             /* KW_REGISTER  */
    KW_TYPEDEF = 269,              /* KW_TYPEDEF  */
    KW_CHAR = 270,                 /* KW_CHAR  */
    KW_EXTERN = 271,               /* KW_EXTERN  */
    KW_RETURN = 272,               /* KW_RETURN  */
    KW_UNION = 273,                /* KW_UNION  */
    KW_CONST = 274,                /* KW_CONST  */
    KW_FOR = 275,                  /* KW_FOR  */
    KW_SIGNED = 276,               /* KW_SIGNED  */
    KW_VOID = 277,                 /* KW_VOID  */
    KW_DEFUALT = 278,              /* KW_DEFUALT  */
    KW_GOTO = 279,                 /* KW_GOTO  */
    KW_SIZEOF = 280,               /* KW_SIZEOF  */
    KW_VOLATILE = 281,             /* KW_VOLATILE  */
    KW_DO = 282,                   /* KW_DO  */
    KW_IF = 283,                   /* KW_IF  */
    KW_STATIC = 284,               /* KW_STATIC  */
    KW_WHILE = 285,                /* KW_WHILE  */
    T_LSQUAREBRACKET = 286,        /* T_LSQUAREBRACKET  */
    T_RSQUAREBRACKET = 287,        /* T_RSQUAREBRACKET  */
    T_LBRACKET = 288,              /* T_LBRACKET  */
    T_RBRACKET = 289,              /* T_RBRACKET  */
    T_LCURLYBRACKET = 290,         /* T_LCURLYBRACKET  */
    T_RCURLYBRACKET = 291,         /* T_RCURLYBRACKET  */
    T_PERIOD = 292,                /* T_PERIOD  */
    T_HYPHON = 293,                /* T_HYPHON  */
    T_EXCLAIM = 294,               /* T_EXCLAIM  */
    T_EXPONENT = 295,              /* T_EXPONENT  */
    T_QUESTION = 296,              /* T_QUESTION  */
    T_COMMA = 297,                 /* T_COMMA  */
    T_SEMICOLON = 298,             /* T_SEMICOLON  */
    T_LESSTHAN = 299,              /* T_LESSTHAN  */
    T_GREATERTHAN = 300,           /* T_GREATERTHAN  */
    T_AND = 301,                   /* T_AND  */
    T_PERCENT = 302,               /* T_PERCENT  */
    T_PLUS = 303,                  /* T_PLUS  */
    T_MINUS = 304,                 /* T_MINUS  */
    T_TIMES = 305,                 /* T_TIMES  */
    T_DIVIDE = 306,                /* T_DIVIDE  */
    T_TILDE = 307,                 /* T_TILDE  */
    T_COLON = 308,                 /* T_COLON  */
    T_VERTICALBAR = 309,           /* T_VERTICALBAR  */
    T_EQUALS = 310,                /* T_EQUALS  */
    T_HASH = 311,                  /* T_HASH  */
    T_NUMBER = 312,                /* T_NUMBER  */
    T_DECIMAL_CONST = 313,         /* T_DECIMAL_CONST  */
    T_OCTAL_CONST = 314,           /* T_OCTAL_CONST  */
    T_HEX_CONST = 315,             /* T_HEX_CONST  */
    T_CHAR_CONST = 316,            /* T_CHAR_CONST  */
    T_IDENTIFIER = 317,            /* T_IDENTIFIER  */
    T_E = 318,                     /* T_E  */
    T_SUFFIX_F = 319,              /* T_SUFFIX_F  */
    T_SUFFIX_L = 320,              /* T_SUFFIX_L  */
    T_SUFFIX_U = 321,              /* T_SUFFIX_U  */
    T_DOUBLE_QUOTE = 322,          /* T_DOUBLE_QUOTE  */
    T_SINGLE_QUOTE = 323,          /* T_SINGLE_QUOTE  */
    T_LITERAL_STRING = 324         /* T_LITERAL_STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "src/c_small.y"

  std::string* str;
  int num;
  double floatnum;
  yytokentype tokentype;

  class FuncDef* FuncDefPtr;
  class StatList* StatListPtr;
  class Declarator* DecPtr;
  class Statement* StatPtr;
  class Expression* ExpPtr;
  class DecList* DecListPtr;
  class ExternalDecList* ExternalDecListPtr;
  class CompoundStatement* CompoundStatPtr;
   

#line 169 "bin/c_small.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BIN_C_SMALL_TAB_HPP_INCLUDED  */
