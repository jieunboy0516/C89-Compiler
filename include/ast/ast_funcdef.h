
#ifndef __FUNCDEF__
#define __FUNCDEF__

class CompoundStatement;

#include "ast_all.h"
#include "ast_param.h"
#include "ast_statement.h"
#include "types.hpp"
#include "ast_node.h"



class FuncDef : public Node {
private:
	DataType returnType;
	std::string name;
	CompoundStatement* cs;
public:
	FuncDef(DataType returnType_in, std::string& name_in, CompoundStatement* cs_in) :
	returnType(returnType_in), name(name_in), cs(cs_in)
	{};


	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};

#endif