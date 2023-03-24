
#ifndef __EXPRESSIONS_
#define __EXPRESSIONS_


#include "ast_all.h"
#include "ast_node.h"
#include "types.hpp"



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
		ss << "#constant value " << value<< "\n";
		ss << "li a0, " << value << "\n"; // store the result to r0
        if(value != 0){
            ss << "li t0, 0\n"; //store tuthieness to t0
        }
        else{
            ss << "li t0, 1\n";
        }

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
	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);

};

class BinaryExpression : public Expression {
private:
	Expression* left;
	Operator op;
	Expression* right;

public:
	BinaryExpression(Expression *left_in, const Operator op_in, Expression *right_in) :
	left(left_in), op(op_in) , right(right_in)
	{};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};

class UnaryExpression : public Expression {
private:
	Operator op;
	Expression* expr;

public:
	UnaryExpression(const Operator op_in, Expression *expr_in) :  op(op_in) , expr(expr_in)
	{};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};

class InitializerList: public Expression{
private:
	std::vector<Expression*> elist;
public:
	InitializerList();

	void addToList(Expression* e);
	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};


class AssignmentExpression : public Expression {
private:
	std::string name;
	Expression* assignmentexpr;
	Operator op;
public:
	AssignmentExpression(std::string name, Expression* assignmentexpr, Operator op_in) :  name(name) , assignmentexpr(assignmentexpr) , op(op_in)
	{};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};

class RelationalExpression : public Expression {
    private:
    Expression* left;
    Comparator cmp;
    Expression* right;
    public:
    RelationalExpression(Expression* left_in, Comparator cmp_in, Expression* right_in) : left(left_in), cmp(cmp_in), right(right_in) {};
    std::string print();
    std::string cprint();
    std::string codeprint(Context& cont);
};

#endif
