
#ifndef __FUNCDEF__
#define __FUNCDEF__


#include "ast_all.h"
#include "ast_param.h"
#include "ast_statement.h"
#include "ast_statement_comound.h"

class FuncDef : public Node {
private:
	std::string returnType;
	std::string name;
	CompoundStatement* cs;
public:
	FuncDef(std::string& returnType_in, std::string& name_in, CompoundStatement* cs_in) :
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

		return ss.str();
	}

};



#endif