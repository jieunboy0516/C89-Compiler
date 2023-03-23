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
        //ss << "jumping to: \n";
        ss << e->codeprint(cont);	// the expression result in r0
		ss << "ret $0\n";	
		return ss.str();
	}

};

class IfStatement : public Statement {
private:
	Expression* e;
	Statement* s;
public:
	IfStatement(Expression* e_in, Statement* s_in) : e(e_in), s(s_in) {};

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
		ss << "If: \n";
		ss << e->codeprint(cont);
		ss << "Then: \n";
		ss << s->codeprint(cont);
		return ss.str();
	}
};

class WhileStatement : public Statement {
private:
	Expression* e;
	Statement* s;
	bool DoWhile;
public:
	WhileStatement(Expression* e_in, Statement* s_in, bool DoWhile) : e(e_in), s(s_in), DoWhile(DoWhile) {};

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
		if(DoWhile){
		ss << "Do: \n";
		ss << s->codeprint(cont);
		ss << "While: \n";
		ss << e->codeprint(cont);
		}
		else{
		ss << "While: \n";
		ss << e->codeprint(cont);
		ss << "Do: \n";
		ss << s->codeprint(cont);
		}
		return ss.str();
	}
};

#endif