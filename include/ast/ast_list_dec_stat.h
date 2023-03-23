
#ifndef __LISTDECSTAT__
#define __LISTDECSTAT__

#include "ast_externaldeclarator.h"
#include "ast_statement.h"
#include "ast_declarator.h"
#include <iostream>


class DecList : public Node {
private:
	std::list<Declarator*> dlist;
public:
	DecList();
	void addToList(Declarator *dec_in)
{
	dlist.push_back(dec_in);
	return;
}

	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;

};

class StatList : public Node {
private:
	std::list<Statement*> slist;
public:
	StatList();


	void addToList(Statement *stat_in)
{
	slist.push_back(stat_in);
	return;
}
	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};

class ExternalDecList : public Node{
private:
	std::list<ExternalDeclaration*> exdeclist;
public:
	ExternalDecList(){};
	
	void addToList(ExternalDeclaration *extDec_in)
{
	exdeclist.push_back(extDec_in);
	return;
}
	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;
};


#endif