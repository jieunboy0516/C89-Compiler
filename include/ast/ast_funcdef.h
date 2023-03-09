#include "ast_all.h"
#include "ast_param.h"
#include "ast_statement.h"

class FunctionDef : public ASTNode {
private:
	std::string returnType;
	std::string name;
	CompoundStatement* cs;
public:
	FuncDef(std::string returnType_in, std::string name_in, Parameter* param1_in, Parameter* param2_in, CompoundStatement* cs_in) :
	returnType(returnType_in), name(name_in), param1(param1_in), param2(param2_in), cs(cs_in)
	{};


};
