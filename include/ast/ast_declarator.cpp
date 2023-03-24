
#include "ast_declarator.h"
#include <iostream>


std::string Declarator::print() {
	std::stringstream ss;
	return ss.str();
}
std::string Declarator::cprint() {
	std::stringstream ss;
	return ss.str();
}
std::string Declarator::codeprint(Context& cont) {

	std::stringstream ss;
	ss << "#declaring " << id << "\n";

	//stack pointer is already pointing to a blank space 

	//evaluate expression if have
	if(e != NULL) ss << e->codeprint(cont); // result in a0
	//prepare the stack
	ss << "addi sp, sp, -4\n";

	//write a0 to the stack and prepare stack for next push
	Helper::writeNewVar(id,cont);

	ss << "#finish declaring " << "\n";


	return ss.str();
	
}

std::string ArrayDeclarator::print() {
	std::stringstream ss;
	return ss.str();
}
std::string ArrayDeclarator::cprint() {
	std::stringstream ss;
	return ss.str();
}



//// NOT DONE FIX ME
//TODO: fix this
std::string ArrayDeclarator::codeprint(Context& cont) {
	std::stringstream ss;
	// ss << "#declaring " << "\n";

	// //stack pointer is already pointing to a blank space 

	// //evaluate expression if have
	// if(e != NULL) ss << e->codeprint(cont); // result in a0
	// //prepare the stack
	// ss << "addi sp, sp, -4\n";

	// //write a0 to the stack and prepare stack for next push
	// Helper::writeNewVar(id,cont);

	// ss << "#finish declaring " << "\n";


	return ss.str();
}