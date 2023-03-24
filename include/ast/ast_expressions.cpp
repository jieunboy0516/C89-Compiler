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

    std::string truthinessCheck = Helper::getUniqueLabel(cont);
	//read the variable to target a0
	ss << Helper::readVar(name, cont, 0);
    ss << "li t0, 1\n"; //store tuthieness to t0 default false
    ss << "beqz a0, " << truthinessCheck << "\n"; //Check if a0 is 0 (false) and jump to truthinessCheck if it is
    ss << "li t0, 0\n"; //Set truthiness to true
    ss << truthinessCheck << ":\n";

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
		ss << "add a0, a0, a1\n";
		break;

	case MINUS:
		ss << "add a0, a0, a1\n";
		break;
	case TIMES:
		ss << "mulh a3, a0, a1\n"; //Multiply and store upper bits in a3
		ss << "mul a0, a0, a1\n"; //Multiply and store lower bits in a0
		ss << "mv a1, a3\n"; //Move upper bits to a1 for return
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




std::string AssignmentExpression::print() {
	std::stringstream ss;

	return ss.str();
}

std::string AssignmentExpression::cprint() {
	std::stringstream ss;

	return ss.str();
}

std::string AssignmentExpression::codeprint(Context &cont) {
	std::stringstream ss;

	ss << assignmentexpr->codeprint(cont) << "\n";	//get assignmentexpr into a0
    switch(op){
        case EQUAL:
            ss << Helper::writeVar(name,cont);
            break;
        case TIMES:
            ss << "mv a1, a0\n"; //move the assignment value into a1
            ss << Helper::readVar(name,cont,1);
            ss << "mul a0, a0, a1 \n"; //Multiply into a0
            ss << Helper::writeVar(name,cont);
            break;
        case PLUS:
            ss << "mv a1, a0\n"; //move the assignment value into a1
            ss << Helper::readVar(name,cont,1);
            ss << "add a0, a0, a1 \n"; //Add into a0
            ss << Helper::writeVar(name,cont);
            break;
    }


	return ss.str();
}

std::string RelationalExpression::print() {
    std::stringstream ss;
    ss << left->print() << "\n";
    ss << cmp << "\n";
    ss << right->print() << "\n";
    return ss.str();
}

std::string RelationalExpression::cprint() {
    std::stringstream ss;
    ss << "(" << left->cprint() << cmp << right->cprint() << ")";
    return ss.str();
}

std::string RelationalExpression::codeprint(Context& cont){
    std::stringstream ss;
    ss << "li t0, 1\n"; //Set t0 to 1 for assuming false
    std::string jumpEnd = Helper::getUniqueLabel(cont);
    ss << left->codeprint(cont); //Print the left expression
    ss << "mv a1, a0 \n"; //Move the left expression into a1
    ss << right->codeprint(cont); //Print the right expression
    switch (cmp)
    {
    case EQUALTO:
        ss << "BNE a0, a1, "<< jumpEnd <<"\n"; //Skip over the statement if it is not equal
        break;
    case NOTEQUALTO:
        ss << "BEQ a0, a1, "<< jumpEnd <<"\n"; //Skip over the statement if it is equal
        break;
    case LESSTHAN:
        ss << "BGE a0, a1, "<< jumpEnd <<"\n"; //Skip over the statement if it is not less than
        break;
    case GREATERTHAN:
        ss << "BLE a0, a1, "<< jumpEnd <<"\n"; //Skip over the statement if it is not greater than
        break;
    case LESSTHANEQUALTO:
        ss << "BGT a0, a1, "<< jumpEnd <<"\n"; //Skip over the statement if it is not less than or equal to
        break;
    case GREATERTHANEQUALTO:
        ss << "BLT a0, a1, "<< jumpEnd <<"\n"; //Skip over the statement if it is not greater than or equal to
        break;
    default:
        ss << "UNRECOGNIZED RELATIONAL EXPRESSION \n";
    }
    ss << "li t0, 0 \n"; //Set t0 to 0 which indicates to the if / while statement that it is true
    ss << jumpEnd << ":\n"; //This will be jumped to if any of the above statements are evaluated as true
    return ss.str();
}
