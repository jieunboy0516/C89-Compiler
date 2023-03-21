#ifndef __LISTDECSTAT__
#define __LISTDECSTAT__

class Declarator;  // forward declaration
class ExternalDeclaration;

#include "ast_declarator.h"
#include "ast_statement.h"
#include "ast_all.h"
#include <initializer_list>
#include <iostream>

class DecList : public Node {
private:
	std::list<Declarator*> dlist;
public:
	DecList(){};
	void addToList(Declarator* dec_in) {
	};
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
		for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
    		if((*it)!=NULL) {
				ss << ((*it)->codeprint(cont)); 
    		}
		}
		return ss.str();
	}

	void addToList(Declarator* stat_in) {
		dlist.push_back(stat_in);
		return;
	}

};

class StatList : public Node {
private:
	std::list<Statement*> slist;
public:
	StatList() {};

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
		for (std::list<Statement*>::iterator it=slist.begin(); it!=slist.end(); ++it) {
    		if((*it)!=NULL) {
				ss << ((*it)->codeprint(cont)); 
    		}
		}
		return ss.str();
	}

	void addToList(Statement* stat_in) {
		slist.push_back(stat_in);
		return;
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