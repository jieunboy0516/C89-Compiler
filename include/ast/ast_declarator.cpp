
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
	if(e==NULL) {
		std::stringstream ss;
		ss << "addiu $sp, $sp, -4\n";
		cont.variableMap[id] = cont.currentStackOffset;
		cont.currentStackOffset++;
		return ss.str();
	}
}

std::string ArrayDeclarator::print() {
	std::stringstream ss;
	return ss.str();
}
std::string ArrayDeclarator::cprint() {
	std::stringstream ss;
	return ss.str();
}
std::string ArrayDeclarator::codeprint(Context& cont) {
	std::stringstream ss;
	return ss.str();
}