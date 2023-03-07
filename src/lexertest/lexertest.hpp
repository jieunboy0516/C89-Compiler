#ifndef histogram_hpp
#define histogram_hpp

#include <string>

  enum TokenType
  {
    T_TIMES ,
    T_DIVIDE ,
    T_PLUS ,
    T_MINUS ,
    T_EXPONENT ,
    T_LBRACKET ,
    T_RBRACKET ,
    T_LOG ,
    T_EXP ,
    T_SQRT ,
    T_NUMBER ,
    T_VARIABLE ,
  };

union TokenValue{
    double numberValue;     //not used here
    std::string *string;
};

// This is a global variable used to move the
// attribute value from the lexer back to the
// main program.
// By convention it is called yylval, as that is
// the name that will be automatically generated
// by Bison (see next lab).
extern TokenValue yylval;

// This is the lexer function defined by flex. Each
// time it is called, a token type value will be
// returned.
extern int yylex();

#endif
