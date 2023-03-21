
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


	std::string print() override{
		std::stringstream ss;

		return ss.str();
	}

	std::string cprint() override{
		std::stringstream ss;

		return ss.str();
	}

	std::string codeprint(Context& cont) override{
		std::stringstream ss;
		ss << "using constant value " << value<< "\n";
		return ss.str();
	}
	
};

class Identifier : public Expression {
private:
	std::string name;
public:
	Identifier(std::string name_in) : 
	name(name_in)
	{};

	std::string codeprint(Context& cont) override{
		std::stringstream ss;
		ss << "using identifer " << name << "\n";
		return ss.str();
	}
	
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