#include "ast_all.h"


Identifier::cprint() {
	std::stringstream ss;
	ss << name;
	return ss.str();
}

Identifier::print() {
	std::stringstream ss;
	ss << name;
	return ss.str();
}


BinaryExpression::print() {
	std::stringstream ss;
	ss << "BIN_EXP {" << "\n";
	ss << left->print() << "\n";
	ss << op << "\n";
	ss <<  right->print() << "\n";
	ss << "}" << "\n";
	return ss.str();
}

BinaryExpression::cprint() {
	std::stringstream ss;
	ss << "(" << left->cprint() << op << right->cprint() << ")";
	return ss.str();
}