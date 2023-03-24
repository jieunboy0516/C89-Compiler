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

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont);
};

class IfStatement : public Statement {
private:
	Expression* e;
	Statement* is;
    Statement* es;
    bool hasElse;
public:
	IfStatement(Expression* e_in, Statement* s_in, Statement* es_in, bool hasElse_in) : e(e_in), is(s_in), es(es_in), hasElse(hasElse_in) {};

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
