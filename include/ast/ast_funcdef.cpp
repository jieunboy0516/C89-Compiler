#include "ast_funcdef.h"
#include "ast_statement_comound.h"


std::string FuncDef::print() {
		std::stringstream ss;
		ss << "start of function and return type" << name << " " << returnType << "\n";
		ss << cs->print();
		return ss.str();
	}

std::string FuncDef::cprint(){
		std::stringstream ss;

		return ss.str();
	}

std::string FuncDef::codeprint(Context& cont) {
	std::stringstream ss;
	Context funcContext = Context();
	ss << "li $fp, " << cont.currentStackOffset << "\n";
	ss << name << ":" << "\n";
	funcContext.currentStackOffset = cont.getNewVariableAddress(); //Set new stack offset to the end of the previous stack.
	ss << "li $sp, " << funcContext.currentStackOffset << "\n";
	ss << cs->codeprint(funcContext);
	return ss.str();
}