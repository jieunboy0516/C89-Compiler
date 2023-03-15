%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "../bin/c_small.tab.hpp"
#include <string>
%}

%%



int         { std::string* strptr = new std::string(yytext); 
              yylval.str=strptr; std::cout<<yytext<<std::endl;return KW_INT; }
return      { std::cout<<yytext<<std::endl; return KW_RETURN; }


[\(]             {std::cout<<yytext<<std::endl; return T_LBRACKET; }
[\)]             { std::cout<<yytext<<std::endl;return T_RBRACKET; }
[\[]            {std::cout<<yytext<<std::endl; return T_LSQUAREBRACKET; }
[\]]            { std::cout<<yytext<<std::endl;return T_RSQUAREBRACKET; }
[\{]            { std::cout<<yytext<<std::endl;return T_LCURLYBRACKET;  }
[\}]            {std::cout<<yytext<<std::endl; return T_RCURLYBRACKET;  }
[\;]            { std::cout<<yytext<<std::endl;return T_SEMICOLON; }


0[0-7]*             { std::string* strptr = new std::string(yytext);
                      yylval.str=strptr; return T_OCTAL_CONST; }
0[xX][0-9a-fA-F]+   {std::string* strptr = new std::string(yytext);
                      yylval.str=strptr; return T_HEX_CONST; }
[1-9][0-9]*         { std::string* strptr = new std::string(yytext);
                      yylval.str=strptr; return T_DECIMAL_CONST; }
L?'[^\'\\\n]+'      { std::string* strptr = new std::string(yytext);
                      yylval.str=strptr;  return T_CHAR_CONST; }
[A-z_][0-9A-z_]*    { std::string* strptr = new std::string(yytext);  return T_IDENTIFIER; }

[ \t\r\n]+		{std::cout<<yytext<<std::endl;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
