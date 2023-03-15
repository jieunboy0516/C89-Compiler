%option noyywrap

%{
// Avoid error "error: `fileno' was not declared in this scope"
extern "C" int fileno(FILE *stream);

#include "lexertest.hpp"
%}

%%



[*]             { return T_TIMES; } //C89 Operators
[+]             { return T_PLUS; }
[\^]            { return T_EXPONENT; }
[-]             { return T_MINUS; }
[\/]            { return T_DIVIDE; }
[\.]            { return T_PERIOD; }
[\-]            { return T_HYPHON; }
[\!]            { return T_EXCLAIM; }
[\?]            { return T_QUESTION; }
[\,]            { return T_COMMA; }
[\;]            { return T_SEMICOLON; }
[\<]            { return T_LESSTHAN; }
[\>]            { return T_GREATERTHAN; }
[\&]            { return T_AND; }
[\%]            { return T_PERCENT; }
[\~]            { return T_TILDE; }
[\:]            { return T_COLON; }
[\|]            { return T_VERTICALBAR; }
[\=]            { return T_EQUALS;}
[\#]            { return T_HASH; }



[(]             { return T_LBRACKET; } //C89 Punctuators
[)]             { return T_RBRACKET; }
[\[]            { return T_LSQUAREBRACKET; }
[\]]            { return T_RSQUAREBRACKET; }
[\{]            { return T_LCURLYBRACKET;  }
[\}]            { return T_RCURLYBRACKET;  }





auto        { return KW_AUTO; } //C89 keywords 
double      { return KW_DOUBLE; }
int         { return KW_INT; }
struct      { return KW_STRUCT; }
break       { return KW_BREAK; }
else        { return KW_ELSE; }
long        { return KW_LONG; }
switch      { return KW_SWITCH; }
case        { return KW_CASE; }
enum        { return KW_ENUM; }
register    { return KW_REGISTER; }
typedef     { return KW_TYPEDEF; }
char        { return KW_CHAR; }
extern      { return KW_EXTERN; }
return      { return KW_RETURN; }
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

0[0-7]*             { yyval.string=yytext; return T_OCTAL_CONST}
0[xX][0-9a-fA-F]+   { yyval.string=yytext; return T_HEX_CONST}
[1-9][0-9]*         { yyval.string=yytext; return T_DECIMAL_CONST}
L?'[^\'\\\n]+'      { yyval.string=yytext; return T_CHAR_CONST} //important: Multicharacter constants are valid but are yucky and might cause issues with implementation



[A-z_]   { yyval.string=yytext; return T_NONDIGIT; }
[eE]     { return T_E; }
[fF]     { return T_SUFFIX_F}
[lL]     { return T_SUFFIX_L}
[uU]     { return T_SUFFIX_U}



[ \t\r\n]+		{;}

.               { fprintf(stderr, "Invalid token\n"); exit(1); }
%%


void yyerror (char const *s)
{
  fprintf (stderr, "Parse error : %s\n", s);
  exit(1);
}
