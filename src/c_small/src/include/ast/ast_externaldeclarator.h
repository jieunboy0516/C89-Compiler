#pragma once
#include "ast_declarator.h"
//#include "ast_funcdef.h"


class FuncDef;

class ExternalDeclaration : public Node
{
private:
	Declarator *d;
	FuncDef *f;

public:
	ExternalDeclaration(FuncDef *f_in) : f(f_in){};
	ExternalDeclaration(Declarator *d_in) : d(d_in){};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};
