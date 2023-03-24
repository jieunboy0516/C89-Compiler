#ifndef __STATEMENT__
#define __STATEMENT__
#include <string>
#include "ast_expressions.h"
#include "ast_node.h"

class JumpStatement : public Statement { 	//return statement
private:
	Expression* e;
	std::string kw;
public:
	JumpStatement(std::string keyword_in, Expression* e_in) : kw(keyword_in), e(e_in) {};

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

        ss << e->codeprint(cont);	// the expression result in r0

		//restoring the stack pointer
		ss << Helper::ExitScope(cont);
		ss << "addi sp, sp, 4\n";	//add back the 4 bytes to SP thats supposed to be prepared for the next push

		

		//int bytediff = (cont.currentStackOffset - stackoffetbefore)* 4;	//even the 4 bytes for stack preparation are removed
		//ss << "addi sp, sp, " << bytediff <<"\n";


		ss << "ret\n";	
		return ss.str();
	}

};

class IfStatement : public Statement {
private:
	Expression* e;
	Statement* s;
public:
	IfStatement(Expression* e_in, Statement* s_in) : e(e_in), s(s_in) {};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};

class WhileStatement : public Statement {
private:
	Expression* e;
	Statement* s;
	bool DoWhile;
public:
	WhileStatement(Expression* e_in, Statement* s_in, bool DoWhile) : e(e_in), s(s_in), DoWhile(DoWhile) {};

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};

class ExpressionStatement : public Statement {
	private:
		Expression* e;
	public:
		ExpressionStatement(Expression* e_in) : e(e_in) {};

		std::string print();
		std::string cprint();
		std::string codeprint(Context& cont);
};

#endif