
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

	// std::string print() override
	// {
	// 	std::stringstream ss;
	// 	ss << "DECL {"
	// 	   << "\n";
	// 	ss << type << "\n";
	// 	ss << id << "\n";
	// 	ss << "="
	// 	   << "\n";
	// 	if (e != NULL)
	// 	{
	// 		ss << e->print() << "\n";
	// 	}
	// 	ss << "}"
	// 	   << "\n";
	// 	return ss.str();
	// }

	// std::string cprint() override
	// {

	// 	std::stringstream ss;
	// 	ss << type << " " << id << " ";
	// 	if (e != NULL)
	// 	{
	// 		ss << "= " << e->cprint();
	// 	}
	// 	ss << ";\n";
	// 	return ss.str();
	// }


	// std::string codeprint(Context &cont) override
	// {
	// 	// if (e == NULL)
	// 	// {
	// 	// 	std::stringstream ss;
	// 	// 	cont.variableMap[id] = cont.getNewVariableAddress();
	// 	// 	ss << "li $t0, 0\n";
	// 	// 	return ss.str();
	// 	// }
	// 	// else
	// 	// {
	// 	// 	std::stringstream ss;
	// 	// 	e->codeprint(cont);
	// 	// 	cont.variableMap[id] = cont.getNewVariableAddress();
	// 	// 	ss << "sw $t0, " << cont.currentStackOffset << "(" << cont.variableMap[id] << ")"
	// 	// 																				  "\n";
	// 	// 	return ss.str();
	// 	// }
	// 	std::stringstream ss;
	// 	return ss.str();
	// }


	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};






#endif