%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "../bin/c_small.tab.hpp"
%}

%%



int         { return KW_INT; }
return      { return KW_RETURN; }


[(]             { return T_LBRACKET; }
[)]             { return T_RBRACKET; }
[\[]            { return T_LSQUAREBRACKET; }
[\]]            { return T_RSQUAREBRACKET; }
[\{]            { return T_LCURLYBRACKET;  }
[\}]            { return T_RCURLYBRACKET;  }
[\;]            { return T_SEMICOLON; }


0[0-7]*             { yylval.str=yytext; return T_OCTAL_CONST; }
0[xX][0-9a-fA-F]+   { yylval.str=yytext; return T_HEX_CONST; }
[1-9][0-9]*         { yylval.str=yytext; return T_DECIMAL_CONST; }
L?'[^\'\\\n]+'      { yylval.str=yytext; return T_CHAR_CONST; }
[A-z_][0-9A-z_]*    { yylval.str=yytext; return T_IDENTIFIER; }

[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
