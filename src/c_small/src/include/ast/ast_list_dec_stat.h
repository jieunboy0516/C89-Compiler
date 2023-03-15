#ifndef __LISTDECSTAT__
#define __LISTDECSTAT__

class Declarator;  // forward declaration
class ExternalDeclaration;

#include "ast_declarator.h"
#include "ast_statement.h"
#include "ast_all.h"
#include <initializer_list>

class DecList : public Node {
private:
	std::list<Declarator*> dlist;
public:
	DecList(){};
	void addToList(Declarator* dec_in) {
	};

};

class StatList : public Node {
private:
	std::list<Statement*> slist;
public:
	StatList() {};
	void addToList(Statement* stat_in) {};

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

		return ss.str();
	}

};

class ExternalDecList : public Node{
private:
	std::list<ExternalDeclaration*> exdeclist;
public:
	ExternalDecList(std::initializer_list<ExternalDeclaration*> list):	exdeclist(list) {};
	
	void addToList(ExternalDeclaration* external_dec){}
};


#endif