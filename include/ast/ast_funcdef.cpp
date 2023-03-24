#include "ast_funcdef.h"
#include "ast_statement_comound.h"
#include "ast_node.h"

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

	ss << "li fp, " << cont.currentStackOffset << "\n";
	ss << name << ":" << "\n";
	//funcContext.currentStackOffset = 0;
	Helper::enterNewScope(cont);
	ss << "li sp, " << cont.currentStackOffset << "\n";


	//push all registers onto stack 
	for(int i = 4; i <= 7; i++) {
		Helper::pushStack(i,cont);
	}

	int stackoffetbefore = cont.currentStackOffset;

	//prepare the stack pointer for next push
	ss << "addi sp, sp, -4\n";
	cont.currentStackOffset--;
	ss << cs->codeprint(cont);

	//restoring the stack pointer
	int bytediff = (cont.currentStackOffset - stackoffetbefore)* 4;	//even the 4 bytes for stack preparation are removed
	ss << "addi sp, sp, " << bytediff <<"\n";

	//pop all registers on stack back into the registers 
	for(int i = 7; i >= 4; i--) {
		Helper::popStack(i,cont);
	}



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