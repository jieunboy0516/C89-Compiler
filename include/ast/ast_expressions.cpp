#include "ast_all.h"


ConstantValue::print() {
	std::stringstream ss;
	ss << value;
	return ss.str();
}

ConstantValue::cprint() {
	std::stringstream ss;
	ss << value;
	return ss.str();
}
ConstantValue::codeprint(Context& cont) {
	std::stringstream ss;
	ss << "li $9, " << value << "\n";
	ss << "sw  $9, 0($sp)" << "\n";
	ss << "addiu $sp, $sp, -4\n";
	cont.currentStackOffset--;
	return ss.str();
}

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