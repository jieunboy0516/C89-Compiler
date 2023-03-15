#include "ast_all.h"
#include "ast_declarator.h"
#include <iostream>

Declarator::print() {
	std::stringstream ss;
	ss << "DECL {" << "\n";
	ss << type << "\n";
	ss << id << "\n";
	ss << "=" << "\n";
	if(e!=NULL) {
		ss << e->print() << "\n";
	}
	ss << "}" << "\n";
	return ss.str();
}

Declarator::cprint() {
	
	std::stringstream ss;
	ss << type << " " << id << " ";
	if(e!=NULL) {
		ss << "= " << e->cprint();
	}
	ss << ";\n";
	return ss.str();
}
Declarator::codeprint(Context& cont) {
	if(e==NULL) {
		std::stringstream ss;
		ss << "new var declared\n";
		return ss.str();
	}
}

ExternalDeclaration::codeprint(Context& cont){
	if(d != NULL){
		d->codeprint(cont);
	}
	if(f != NULL){
		f->codeprint(cont);
	}
}