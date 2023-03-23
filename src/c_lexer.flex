%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "../bin/c_parser.tab.hpp"
#include <string>
#include "../include/ast/types.hpp"
%}

%%

[*]             { return T_TIMES; }
[+]             { return T_PLUS; }
[\^]            { return T_EXPONENT; }
[-]             { return T_MINUS; }
[\/]            { return T_DIVIDE; }
[\.]            { return T_PERIOD; }
[\-]            { return T_HYPHON; }
[\!]            { return T_EXCLAIM; }
[\?]            { return T_QUESTION; }
[\,]            { return T_COMMA; }
[\<]            { return T_LESSTHAN; }
[\>]            { return T_GREATERTHAN; }
[\&]            { return T_AND; }
[\%]            { return T_PERCENT; }
[\~]            { return T_TILDE; }
[\:]            { return T_COLON; }
[\|]            { return T_VERTICALBAR; }
[\=]            { return T_EQUALS;}
[\#]            { return T_HASH; }



int         { std::string* strptr = new std::string(yytext); 
              yylval.str=strptr;
              yylval.datatype = INT;
              return KW_INT; }
auto        { return KW_AUTO; }
double      { std::string* strptr = new std::string(yytext); 
              yylval.str=strptr;
              yylval.datatype = DOUBLE;
              return KW_INT; return KW_DOUBLE; }
struct      { return KW_STRUCT; }
break       { return KW_BREAK; }
else        { return KW_ELSE; }
long        { return KW_LONG; }
switch      { return KW_SWITCH; }
case        { return KW_CASE; }
enum        { return KW_ENUM; }
register    { return KW_REGISTER; }
typedef     { return KW_TYPEDEF; }
char        { std::string* strptr = new std::string(yytext); 
              yylval.str=strptr;
              yylval.datatype = CHAR;
              return KW_CHAR; }
extern      { return KW_EXTERN; }
union       { return KW_UNION; }
const       { return KW_CONST; }
for         { return KW_FOR; }
signed      { return KW_SIGNED; }
void        { return KW_VOID; }
default     { return KW_DEFUALT; }
goto        { return KW_GOTO; }
sizeof      { return KW_SIZEOF; }
volatile    { return KW_VOLATILE; }
do          { return KW_DO; }
if          { return KW_IF; }
static      { return KW_STATIC; }
while       { return KW_WHILE; }
return      { return KW_RETURN; }


[\(]             { return T_LBRACKET; }
[\)]             { return T_RBRACKET; }
[\[]             { return T_LSQUAREBRACKET; }
[\]]             { return T_RSQUAREBRACKET; }
[\{]             { return T_LCURLYBRACKET;  }
[\}]             { return T_RCURLYBRACKET;  }
[\;]             { return T_SEMICOLON; }


[+-]?0[0-7]*             { std::string* strptr = new std::string(yytext);
                      yylval.str=strptr; return T_OCTAL_CONST; }
[+-]?0[xX][0-9a-fA-F]+   {std::string* strptr = new std::string(yytext);
                      yylval.str=strptr; return T_HEX_CONST; }
[+-]?[1-9][0-9]*         { std::string* strptr = new std::string(yytext);
                      yylval.str=strptr; return T_DECIMAL_CONST; }
L?'[^\'\\\n]+'      { std::string* strptr = new std::string(yytext);
                      yylval.str=strptr;  return T_CHAR_CONST; }
[A-z_][0-9A-z_]*    { std::string* strptr = new std::string(yytext);  
                      yylval.str=strptr; return T_IDENTIFIER; }

[ \t\r\n]+		{}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%

void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
