#include <map>

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    KW_INT = 258,                  /* KW_INT  */
    KW_RETURN = 259,               /* KW_RETURN  */
    KW_IF = 260,                   /* KW_IF  */
    T_NUMBER = 261,                /* T_NUMBER  */
    T_LSQUAREBRACKET = 262,        /* T_LSQUAREBRACKET  */
    T_RSQUAREBRACKET = 263,        /* T_RSQUAREBRACKET  */
    T_LBRACKET = 264,              /* T_LBRACKET  */
    T_RBRACKET = 265,              /* T_RBRACKET  */
    T_LCURLYBRACKET = 266,         /* T_LCURLYBRACKET  */
    T_RCURLYBRACKET = 267,         /* T_RCURLYBRACKET  */
    T_SEMICOLON = 268,             /* T_SEMICOLON  */
    T_DECIMAL_CONST = 269,         /* T_DECIMAL_CONST  */
    T_OCTAL_CONST = 270,           /* T_OCTAL_CONST  */
    T_HEX_CONST = 271,             /* T_HEX_CONST  */
    T_CHAR_CONST = 272,            /* T_CHAR_CONST  */
    T_IDENTIFIER = 273,            /* T_IDENTIFIER  */
    T_E = 274,                     /* T_E  */
    T_SUFFIX_F = 275,              /* T_SUFFIX_F  */
    T_SUFFIX_L = 276,              /* T_SUFFIX_L  */
    T_SUFFIX_U = 277,              /* T_SUFFIX_U  */
    T_DOUBLE_QUOTE = 278,          /* T_DOUBLE_QUOTE  */
    T_SINGLE_QUOTE = 279,          /* T_SINGLE_QUOTE  */
    T_LITERAL_STRING = 280,        /* T_LITERAL_STRING  */
    T_PLUS = 281,                  /* T_PLUS  */
    T_MINUS = 282,                 /* T_MINUS  */
    T_TIMES = 283,                 /* T_TIMES  */
    T_DIVIDE = 284,                /* T_DIVIDE  */
    T_EXPONENT = 285               /* T_EXPONENT  */
  };
  typedef enum yytokentype yytoken_kind_t;

std::ostream& operator<<(std::ostream& os, yytoken_kind_t token){
    static std::map<yytoken_kind_t, std::string> stringRep;
    //Map to string representation
    if(stringRep.size() == 0){
        stringRep[KW_INT] = "int";
        stringRep[KW_RETURN] = "return";
        stringRep[KW_IF] = "if";
        stringRep[T_NUMBER] = "number";
        stringRep[T_LSQUAREBRACKET] = "[";
        stringRep[T_RSQUAREBRACKET] = "]";
        stringRep[T_LBRACKET] = "(";
        stringRep[T_RBRACKET] = ")";
        stringRep[T_LCURLYBRACKET] = "{";
        stringRep[T_RCURLYBRACKET] = "}";
        stringRep[T_SEMICOLON] = ";";
        stringRep[T_E] = "e";
        stringRep[T_SUFFIX_F] = "f";
        stringRep[T_SUFFIX_L] = "l";
        stringRep[T_SUFFIX_U] = "u";
        stringRep[T_DOUBLE_QUOTE] = "\"";
        stringRep[T_SINGLE_QUOTE] = "'";
        stringRep[T_PLUS] = "+";
        stringRep[T_MINUS] = "-";
        stringRep[T_TIMES] = "*";
        stringRep[T_DIVIDE] = "/";
        stringRep[T_EXPONENT] = "^";
    }
    return os << stringRep[token];
}
#endif