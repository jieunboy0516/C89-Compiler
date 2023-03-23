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
	// std::cout << "IM HERE1" <<std::endl;
	// std::cout << ss.str() <<std::endl;
	return ss.str();

	// 	std::stringstream ss;
	// ss << ".text\n" << ".align 2\n";	
	// ss << ".globl  " << name << "\n";
	// ss << ".ent  " << name << "\n";
	// ss << ".type  " << name << ", @function" << "\n";
	// ss << name << ":\n";
	// cont.variableMap[param1->getId()] = 1;
	// cont.variableMap[param2->getId()] = 2;
	// for(int i = 4; i <= 7; i++) {
	// 	ss << "sw  $" << i << ", 0($sp)" << "\n";
	// 	ss << "addiu $sp, $sp, -4\n";
	// 	cont.currentStackOffset++;
	// }
	// ss << cs->codeprint(cont);
	// return ss.str();
}