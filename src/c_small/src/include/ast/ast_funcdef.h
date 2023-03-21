
#ifndef __FUNCDEF__
#define __FUNCDEF__


#include "ast_all.h"
#include "ast_param.h"
#include "ast_statement.h"
#include "ast_statement_comound.h"
#include "types.hpp"

class FuncDef : public Node {
private:
	DataType returnType;
	std::string name;
	CompoundStatement* cs;
public:
	FuncDef(DataType returnType_in, std::string& name_in, CompoundStatement* cs_in) :
	returnType(returnType_in), name(name_in), cs(cs_in)
	{};

	std::string print() override{
		std::stringstream ss;

		return ss.str();
	}

	std::string cprint() override{
		std::stringstream ss;

		return ss.str();
	}

	std::string codeprint(Context& cont) override{
		std::stringstream ss;
		ss << "start of function and return type" << name << " " << returnType << "\n";
		ss << cs->codeprint(cont);
		return ss.str();
	}

};



#endif