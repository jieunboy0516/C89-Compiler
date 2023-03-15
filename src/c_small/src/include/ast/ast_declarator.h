#ifndef __DECLARATOR__
#define __DECLARATOR__
#include "ast_all.h"
#include "ast_node.h"
#include "ast_funcdef.h"

class Declarator : public Node {
private:
	std::string type;
	std::string id;
	Expression* e;

public:
	Declarator(std::string type_in, std::string id_in, Expression* e_in) : type(type_in), id(id_in), e(e_in) {};


};

class ExternalDeclaration : public Node {
private:
	Declarator* d;
	FuncDef* f;

public:
	ExternalDeclaration(FuncDef* f_in): f(f_in) {};
	ExternalDeclaration(Declarator* d_in): d(d_in) {};
};


#endif