#include "ast_all.h"
#include "ast_expressions.h"
#include <string>
#include <iostream>
#include "ast_node.h"

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

	//read the variable to target a0
	ss << Helper::readVar(name, cont, 0); 


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

	ss << right->codeprint(cont) << "\n";	//get right into a0
	ss << "mv a1, a0 \n";				//move right into a1
	ss << left->codeprint(cont) << "\n";	//get left into a0


	//   enum Operator{
	//     PLUS,
	//     MINUS,
	//     TIMES,
	//     DIVIDE,
	//     MOD,
	//     AND,
	//     OR,
	//     NOT
	//   };
	switch (op)
	{
	case PLUS:
		ss << "addi a0, a0, a1";
		break;

	case MINUS:
		ss << "addi a0, a0, a1";
		break;	
	case TIMES:
		ss << "MULH a3, a0, a1"; //Multiply and store upper bits in a3
		ss << "MUL a0, a0, a1"; //Multiply and store lower bits in a0
		ss << "MV a1, a3"; //Move upper bits to a1 for return
		break;
	// case DIVIDE:
	// 	ss << "DIVU a3, a0, a1"; //Divide and store lower bits in a0
	// 	ss << "DIVU a1, a0, a1"; //Divide and store upper bits in a1
	// 	break;
	//more ops here

	default:
		//error i guess
		ss << "error in binary expression";
		break;
	}

	

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

InitializerList::InitializerList(){
}

std::string UnaryExpression::print() {
	std::stringstream ss;
	ss << "UNARY_EXP {" << "\n";
	ss << op << "\n";
	ss << expr->print() << "\n";
	ss << "}" << "\n";
	return ss.str();
}

std::string UnaryExpression::cprint() {
	std::stringstream ss;
	ss << "(" << op << expr->cprint() << ")";
	return ss.str();
}

std::string UnaryExpression::codeprint(Context &cont) {
	std::stringstream ss;
	ss << expr->codeprint(cont) << "\n";	//get expr into a0
	switch (op)
	{
	case MINUS:
		ss << "neg a0, a0 \n"; // Take twos complement of register
		break;
	case NOT:
		ss << "not a0, a0 \n"; // Take ones complement of register
		break;
	}
	return ss.str();
}