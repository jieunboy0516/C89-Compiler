#include "ast_all.h"
#include "ast_expressions.h"
#include <string>
#include <iostream>

std::string Identifier::cprint() {
	std::stringstream ss;
	ss << name;
	return ss.str();
}

std::string Identifier::print() {
	std::stringstream ss;
	ss << name;
	return ss.str();
}

std::string Identifier::codeprint(Context& cont){
	std::stringstream ss;
	return ss.str();
};


std::string BinaryExpression::print() {
	std::stringstream ss;
	ss << "BIN_EXP {" << "\n";
	ss << left->print() << "\n";
	ss << op << "\n";
	ss <<  right->print() << "\n";
	ss << "}" << "\n";
	return ss.str();
}

std::string BinaryExpression::cprint() {
	std::stringstream ss;
	ss << "(" << left->cprint() << op << right->cprint() << ")";
	return ss.str();
}

std::string BinaryExpression::codeprint(Context &cont) {
	std::stringstream ss;
	return ss.str();
}

std::string InitializerList::print(){
	std::stringstream ss;
	ss << "INIT_LIST {" << "\n";
	for (auto i : elist){
		ss << i->print() << "\n";
	}
	ss << "}" << "\n";
	return ss.str();
}

std::string InitializerList::cprint(){
	std::stringstream ss;
	ss << "{";
	for (auto i : elist){
		ss << i->cprint() << ",";
	}
	ss << "}";
	return ss.str();
}

std::string InitializerList::codeprint(Context &cont){
	std::stringstream ss;
	return ss.str();
}

void InitializerList::addToList(Expression *exp){
	elist.push_back(exp);
}