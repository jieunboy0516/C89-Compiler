
#include "ast_list_dec_stat.h"
#include "ast_declarator.h"
#include "ast_statement.h"
#include <string>

DecList::DecList(){

}
StatList::StatList(){
	
}

std::string DecList::print()
{
	std::stringstream ss;

	return ss.str();
}

std::string DecList::cprint()
{
	std::stringstream ss;

	return ss.str();
}
std::string DecList::codeprint(Context &cont)
{
	std::stringstream ss;
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->codeprint(cont));   			
		}
	}
	return ss.str();
}

std::string StatList::print()
{
	std::stringstream ss;

	return ss.str();
}

std::string StatList::cprint()
{
	std::stringstream ss;

	return ss.str();
}

std::string StatList::codeprint(Context &cont)
{
		std::stringstream ss;
		for (std::list<Statement*>::iterator it=slist.begin(); it!=slist.end(); ++it) {
    		if((*it)!=NULL) {
    			//std::cerr << "STAT2" << std::endl;
				ss << ((*it)->codeprint(cont)); 
    		}
		}
		return ss.str();
}





std::string ExternalDecList::print()
{
	std::stringstream ss;

	return ss.str();
}

std::string ExternalDecList::cprint()
{
	std::stringstream ss;

	return ss.str();
}

std::string ExternalDecList::codeprint(Context &cont)
{
		std::stringstream ss;
		for (std::list<ExternalDeclaration*>::iterator it=exdeclist.begin(); it!=exdeclist.end(); ++it) {
    		if((*it)!=NULL) {
    			//std::cerr << "STAT2" << std::endl;
				ss << ((*it)->codeprint(cont)); 
				

    		}
		}
		return ss.str();
}
