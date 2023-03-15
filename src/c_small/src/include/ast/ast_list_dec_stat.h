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
	DecList(std::initializer_list<Declarator*> list) : dlist(list) {}
	void addToList(Declarator* dec_in) {
	}

};

class StatList : public Node {
private:
	std::list<Statement*> slist;
public:
	StatList(std::initializer_list<Statement*> list) : slist(list) {}
	void addToList(Statement* stat_in) {}

};

class ExternalDecList : public Node{
private:
	std::list<ExternalDeclaration*> exdeclist;
public:
	ExternalDecList(std::initializer_list<ExternalDeclaration*> list):	exdeclist(list) {};
	
	void addToList(ExternalDeclaration* external_dec){}
};

#endif