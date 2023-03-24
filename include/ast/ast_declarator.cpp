
#include "ast_declarator.h"
#include "ast_expressions.h"
#include <iostream>


std::string Declarator::print() {
	std::stringstream ss;
	return ss.str();
}
std::string Declarator::cprint() {
	std::stringstream ss;
	return ss.str();
}
std::string Declarator::codeprint(Context& cont) {

	std::stringstream ss;
	ss << "#declaring " << id << "\n";

	//stack pointer is already pointing to a blank space

	//evaluate expression if have
	if(e != NULL) ss << e->codeprint(cont); // result in a0
	//prepare the stack
	ss << "addi sp, sp, -4\n";

	//write a0 to the stack and prepare stack for next push
	ss << Helper::writeNewVar(id,cont);

	ss << "#finish declaring " << "\n";


	return ss.str();

}

std::string ArrayDeclarator::print() {
	std::stringstream ss;
	return ss.str();
}
std::string ArrayDeclarator::cprint() {
	std::stringstream ss;
	return ss.str();
}


std::string ArrayDeclarator::codeprint(Context& cont) {
	std::stringstream ss;
	ss << "#declaring " << "\n";


    // Run through each variable in teh array and declare it seperately keeping each name unique
    if(size != NULL && e != NULL) {
        for(int i = 0; i < ((ConstantValue*)size)->getValue(); i++){
            ss << "li a0, " << ((ConstantValue*)e->getExpression(i))->getValue() << "\n";
            ss << Helper::writeNewVar(id+"["+std::to_string(i)+"]",cont);

        }
    }
    else if(e != NULL){
        for(int i = 0; i < e->getSize(); i++){
            ss << "li a0, " << ((ConstantValue*)e->getExpression(i))->getValue() << "\n";
            ss << Helper::writeNewVar(id+"["+std::to_string(i)+"]",cont);
        }
    }

	//write a0 to the stack and prepare stack for next push
	Helper::writeNewVar(id,cont);

	ss << "#finish declaring " << "\n";


	return ss.str();
}
