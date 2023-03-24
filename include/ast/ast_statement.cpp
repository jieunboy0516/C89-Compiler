#include "ast_declarator.h"
#include "ast_statement.h"
#include <string>
#include "ast_expressions.h"
#include "ast_node.h"
#include <initializer_list>


std::string IfStatement::print(){
	std::stringstream ss;
	ss << "If: \n";
	ss << e->print();
	ss << "Then: \n";
	ss << s->print();
	return ss.str();
}
std::string IfStatement::cprint(){
	std::stringstream ss;
    
	return ss.str();
}
std::string IfStatement::codeprint(Context& cont){
	std::stringstream ss;
	ss << "If: \n";
	ss << e->codeprint(cont);
	ss << "Then: \n";
	ss << s->codeprint(cont);
	return ss.str();
}

std::string WhileStatement::print() {
		std::stringstream ss;
		if(DoWhile){
		ss << "Do: \n";
		ss << s->print();
		ss << "While: \n";
		ss << e->print();
		}
		else{
		ss << "While: \n";
		ss << e->print();
		ss << "Do: \n";
		ss << s->print();
		}
	}

std::string WhileStatement::cprint(){
	std::stringstream ss;
	return ss.str();
}

std::string WhileStatement::codeprint(Context& cont){
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

std::string ExpressionStatement::print(){
    std::stringstream ss;
    ss << e->print();
    return ss.str();
}
std::string ExpressionStatement::cprint(){
    std::stringstream ss;
    return ss.str();
}
std::string ExpressionStatement::codeprint(Context& cont){
    std::stringstream ss;
    ss << e->codeprint(cont);
    return ss.str();
}