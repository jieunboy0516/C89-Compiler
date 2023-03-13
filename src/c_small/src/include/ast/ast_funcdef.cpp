#include "ast_all.h"

FuncDef::print() {
	std::stringstream ss;
	ss << returnType << " " << name << "(" << param1->cprint() << ", " << param2->cprint() << ")\n";
	ss << cs->cprint();
	return ss.str();
}

FuncDef::cprint() {
	std::stringstream ss;
	ss << returnType << " " << name << "(" << param1->cprint() << ", " << param2->cprint() << ")\n";
	ss << cs->cprint();
	return ss.str();
}

FuncDef::codeprint(Context& cont) {
	std::stringstream ss;
	ss << "START OF FUNCTIONn";
    ss << "fucntion name:  " << name << "\n";
	ss << cs->codeprint(cont);  //CS is the compound statement
	return ss.str();
}