
#ifndef __DECLARATOR1__
#define __DECLARATOR1__

#include "types.hpp"
#include "ast_node.h"


class Declarator : public Node
{
private:
	DataType type;
	std::string id;
	Expression *e;

public:
	Declarator(DataType type_in, std::string id_in, Expression *e_in) : type(type_in), id(id_in), e(e_in){};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};

class ArrayDeclarator : public Declarator
{
private:
	DataType type;
	std::string id;
	Expression *e;
	Expression *size;

public:
	explicit ArrayDeclarator(DataType type_in, std::string id_in, Expression *e_in, Expression* size_in) : Declarator(type_in,id_in,e_in), size(size_in){};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};

#endif