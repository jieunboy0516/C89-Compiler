%code requires{
  #include "../src/include/ast.hpp"
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
}

// Represents the value associated with any kind of
// AST node.
%union{
  std::string* str;
  int num;
  double floatnum;

  class FuncDef* FuncDefPtr;
  class StatList* StatListPtr;
  class Declarator* DecPtr;
  class Statement* StatPtr;
  class Expression* ExpPtr;
  class DecList* DecListPtr;
  class ExternalDecList* ExternalDecListPtr;
  class CompoundStatement* CompoundStatPtr;
   
}
%type <FuncDefPtr> TOPLEVEL
%type <FuncDefPtr> FUNCTION_DEF
%type <StatPtr> STATEMENT
%type <CompoundStatPtr> COMPOUND_STATEMENT
%type <StatListPtr> STATEMENT_LIST 
%type <StatPtr> KW_RETURN
%type <StatPtr> JUMP_STATEMENT
%type <ExpPtr> EXPRESSION
%type <ExpPtr> CONSTANT
%type <str> TYPE
%type <str> T_IDENTIFIER

// C89 Keywords: int, float, if, etc...
%token KW_INT KW_RETURN


// C89 constant operators



%token T_NUMBER
%token T_LSQUAREBRACKET T_RSQUAREBRACKET T_LBRACKET T_RBRACKET T_LCURLYBRACKET T_RCURLYBRACKET T_SEMICOLON;

// C89 Constants: Floating consts, digits, exponents etc...
%token T_DECIMAL_CONST T_OCTAL_CONST T_HEX_CONST T_CHAR_CONST
%token T_IDENTIFIER T_E T_SUFFIX_F T_SUFFIX_L T_SUFFIX_U T_DOUBLE_QUOTE T_SINGLE_QUOTE
%token T_LITERAL_STRING

%left T_PLUS T_MINUS
%left T_TIMES T_DIVIDE
%right T_EXPONENT

%start ROOT

%%

ROOT: TOPLEVEL { g_root = $1;}
    ;

TOPLEVEL: FUNCTION_DEF {$$ = $1;}
        | TOPLEVEL FUNCTION_DEF {$$ = $2;}
        ;

FUNCTION_DEF: TYPE T_IDENTIFIER T_LBRACKET T_RBRACKET COMPOUND_STATEMENT {$$ = new FuncDef(*$1, *$2, $5);}
            ;

COMPOUND_STATEMENT: T_LCURLYBRACKET STATEMENT_LIST T_RCURLYBRACKET {$$ = new CompoundStatement(0,$2);  }
                  ;

//printf("Address of x is %p\n", (void *)$2); 
//std::cout << "start" << std::endl; Context test = Context(); $$->codeprint(test); std::cout << "done" << std::endl;

STATEMENT_LIST: STATEMENT {$$ = new StatList();
                           $$->addToList($1);
                                    std::cout << "start" << std::endl; Context test = Context(); std::cout << $$->codeprint(test) << std::endl;; std::cout << "done" << std::endl; 
                          }
              | STATEMENT_LIST STATEMENT  {$1->addToList($2);
                           $$ = $1;
                                    std::cout << "start" << std::endl; Context test = Context(); std::cout << $$->codeprint(test) << std::endl;; std::cout << "done" << std::endl;  
                           }
              ;

STATEMENT: JUMP_STATEMENT {$$ = $1; }
        ;

JUMP_STATEMENT: KW_RETURN EXPRESSION T_SEMICOLON {$$ = new JumpStatement(*yylval.str, $2);
                                                  std::cout << "STATEMENT LOL" <<std::endl;

 
                                                  }
              ;

EXPRESSION: CONSTANT {$$ = $1;}
          ;

CONSTANT: T_DECIMAL_CONST {$$ = new ConstantValue(std::stoi(*yylval.str));}
        /* | T_OCTAL_CONST {} 
        | T_HEX_CONST  {}
        | T_CHAR_CONST {} */
        ;


TYPE: KW_INT {$$ = yylval.str;}
    ;  

%%

Node *g_root;

Node *parseAST(std::string filename)
{
  yyin = fopen(filename.c_str(), "r");
  if(yyin == NULL){
    std::cerr << "Couldn't open input file: " << filename << std::endl;
    exit(1);
  }

  // std::ifstream fs;
  // fs.open(filename.c_str());
  // std::string line ;
  // while(fs >> line)
  // {
  //   std::cout << line << std::endl;
  // }

  g_root = NULL;
  std::cout << yyparse() << std::endl;
  //std::cout << (int)(g_root == 0)<< std::endl;
  return g_root;
}



