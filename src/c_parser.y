%code requires{
  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  char* str;
  int num;
  double floatnum;

  class FuncDef* FuncDefPtr;
  class StatList* StatListPtr;
  class Declarator* DecPtr;
  class Statement* StatPtr;
  //class Expression* ExpPtr;
  

  
}

// C89 Keywords: int, float, if, etc...
%token KW_AUTO KW_DOUBLE KW_INT KW_STRUCT KW_BREAK KW_ELSE KW_LONG KW_SWITCH KW_CASE KW_ENUM KW_REGISTER KW_TYPEDEF KW_CHAR KW_EXTERN KW_RETURN 
%token KW_UNION KW_CONST KW_FOR KW_SIGNED KW_VOID KW_DEFUALT KW_GOTO KW_SIZEOF KW_VOLATILE KW_DO KW_IF KW_STATIC KW_WHILE


// C89 constant operators

%token T_LSQUAREBRACKET T_RSQUAREBRACKET T_LBRACKET T_RBRACKET T_LCURLYBRACKET T_RCURLEYBRACKET
%token T_PERIOD T_HYPHON T_EXCLAIM T_EXPONENT T_QUESTION T_COMMA T_SEMICOLON T_LESSTHAN T_GREATERTHAN T_AND T_PERCENT T_PLUS T_MINUS T_TIMES T_DIVIDE T_TILDE 
%token T_COLON T_VERTICALBAR T_EQUALS T_HASH

%token T_NUMBER

// C89 Constants: Floating consts, digits, exponents etc...
%token T_DECIMAL_CONST T_OCTAL_CONST T_HEX_CONST T_CHAR_CONST
%token T_IDENTIFIER T_E T_SUFFIX_F T_SUFFIX_L T_SUFFIX_U T_DOUBLE_QUOTE T_SINGLE_QUOTE
%token T_LITERAL_STRING

%left T_PLUS T_MINUS
%left T_TIMES T_DIVIDE
%right T_EXPONENT

%type <str> TIdentifier
%type <num> INTEGER_CONST //need it to accept hex dec bin
//%type <ExpPtr> 
%type <StatPtr> ExpStat JumpStat Statement CompoundStat IterStat 
%type <DecPtr> 
%type <StatListPtr> 
%type <DecListPtr> 
%type <FuncDefPtr> FunctionDef

%start ROOT

%%


ROOT : EXPR { g_root = $1; }

// FUNCTIONS

FUNCTION_DEF: TYPE TIdentifier TOpenBracket TCloseBracket CompoundStat



COMPOUND_STATEMENT:  
              T_LCURLYBRACKET STATEMENT_LIST T_RBRACKET

STATEMENT_LIST: STATEMENT 
              | STATEMENT_LIST STATEMENT



STATEMENT: COMPOUND_STATEMENT
         | EXPRESSION T_SEMICOLON
         | KW_IF T_LBRACKET EXPRESSION T_RBRACKET STATEMENT
         | KW_IF T_LBRACKET EXPRESSION T_RBRACKET STATEMENT KW_ELSE STATEMENT
         | KW_SWITCH T_LBRACKET EXPRESSION T_RBRACKET STATEMENT
         | KW_WHILE T_LBRACKET EXPRESSION T_RBRACKET STATEMENT
         | KW_DO STATEMENT KW_WHILE T_LBRACKET EXPRESSION T_RBRACKET T_SEMICOLON
         | KW_FOR T_LBRACKET EXPRESSION T_SEMICOLON EXPRESSION T_SEMICOLON EXPRESSION T_SEMICOLON T_RBRACKET STATEMENT
         | DECLARATION_LIST

DECLARATION_LIST: DECLARATION
                | DECLARATION_LIST DECLARATION

DECLARATION : 
          TYPE TIdentifier TSemicolon 
        | TYPE TIdentifier TAssign Exp TSemicolon 

TYPE: KW_AUTO 
      |KW_DOUBLE 
      |KW_INT 
      |KW_STRUCT 
      |KW_LONG 
      |KW_ENUM 
      |KW_CHAR

CONSTANT :  FLOATING_CONST
            | INTEGER_CONST
            | ENUM_CONST
            | CHAR_CONST

FLOATING_CONST : FRACTIONAL_CONST
                | FRACTIONAL_CONST EXPONENT_PART
                | FRACTIONAL_CONST FLOATING_SUFFIX
                | FRACTIONAL_CONST EXPONENT_PART FLOATING_SUFFIX

FRACTIONAL_CONST : T_DECIMAL_CONST T_PERIOD T_DECIMAL_CONST
                | T_DECIMAL_CONST T_PERIOD

EXPONENT_PART : T_E SIGN T_DECIMAL_CONST

SIGN : T_PLUS
    | T_MINUS

FLOATING_SUFFIX : T_SUFFIX_F
                | T_SUFFIX_L

INTEGER_CONST : T_DECIMAL_CONST INTEGER_SUFFIX
              | T_DECIMAL_CONST
              | T_OCTAL_CONST INTEGER_SUFFIX
              | T_OCTAL_CONST
              | T_HEX_CONST INTEGER_SUFFIX
              | T_HEX_CONST

INTEGER_SUFFIX : T_SUFFIX_U
                | T_SUFFIX_L

ENUM_CONST : T_IDENTIFIER

CHAR_CONST : T_CHAR_CONST


%%

const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
