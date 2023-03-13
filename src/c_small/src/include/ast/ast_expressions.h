
#ifndef __EXPRESSIONS_
#define __EXPRESSIONS_


#include "ast_all.h"
#include "ast_node.h"




class ConstantValue : public Expression {
private:
	int value;
public:
	ConstantValue(int value_in) :
	value(value_in)
	{};


};

class Identifier : public Expression {
private:
	std::string name;
public:
	Identifier(std::string name_in) : 
	name(name_in)
	{};


};



class BinaryExpression : public Expression { 
private:
	Expression* left;
	std::string op;
	Expression* right;
	
public:
	BinaryExpression(Expression *left_in, const std::string &op_in, Expression *right_in) : 
	left(left_in), op(op_in) , right(right_in)
	{};


};



#endif