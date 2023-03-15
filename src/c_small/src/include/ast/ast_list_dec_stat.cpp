#include "ast_all.h"

DecList::addToList(Statement* stat_in) {
		dlist.push_back(stat_in);
		return;
	}

DecList::print() {
	std::stringstream ss;
	//ss << "DEC_LIST {" << "\n";
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->print()) << "\n\n";   			
		}		
	} 
	//ss << "}" << "\n";
	return ss.str();
}

DecList::cprint() {
	std::stringstream ss;
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->cprint());   			
		}
	}
	return ss.str();
}
DecList::codeprint(Context& cont) {
	std::stringstream ss;
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->codeprint(cont));   			
		}
	}
	return ss.str();
}




ExternalDecList::print() {
	std::stringstream ss;
	//ss << "DEC_LIST {" << "\n";
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->print()) << "\n\n";   			
		}		
	} 
	//ss << "}" << "\n";
	return ss.str();
}

ExternalDecList::cprint() {
	std::stringstream ss;
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->cprint());   			
		}
	}
	return ss.str();
}
ExternalDecList::codeprint(Context& cont) {
	std::stringstream ss;
	for (std::list<Declarator*>::iterator it=dlist.begin(); it!=dlist.end(); ++it) {
		if((*it)!=NULL) {
			ss << ((*it)->codeprint(cont));   			
		}
	}
	return ss.str();
}


ExternalDecList::addToList(ExternalDeclaration* extDec_in){
	exdeclist.push_back(extDec_in);
	return;
}