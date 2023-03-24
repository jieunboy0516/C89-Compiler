#include "ast_declarator.h"
#include "ast_statement.h"
#include <string>
#include "ast_expressions.h"
#include "ast_node.h"
#include <initializer_list>



std::string JumpStatement::print() {
	std::stringstream ss;
	return ss.str();
}
std::string JumpStatement::cprint() {
	std::stringstream ss;
	return ss.str();
}
std::string JumpStatement::codeprint(Context& cont){
	std::stringstream ss;
    ss << e->codeprint(cont);	// the expression result in a0
	//restoring the stack pointer
	ss << Helper::ExitScope(cont);
	ss << "addi sp, sp, 4\n";	//add back the 4 bytes to SP thats supposed to be prepared for the next push
	//int bytediff = (cont.currentStackOffset - stackoffetbefore)* 4;	//even the 4 bytes for stack preparation are removed
	//ss << "addi sp, sp, " << bytediff <<"\n";

    //pop all registers on stack back into the registers before leaving the function
	for(int i = 7; i >= 4; i--) {
		ss << Helper::popStack(i,cont);
	}
	ss << "ret\n"; //return
	return ss.str();
}


std::string IfStatement::print(){
	std::stringstream ss;
	ss << "If: \n";
	ss << e->print();
	ss << "Then: \n";
	ss << is->print();
	return ss.str();
}
std::string IfStatement::cprint(){
	std::stringstream ss;

	return ss.str();
}
std::string IfStatement::codeprint(Context& cont){
	std::stringstream ss;
    std::string endif = Helper::getUniqueLabel(cont);
    std::string endelse = Helper::getUniqueLabel(cont);
    ss << "#IF EXPRESSION\n";
	ss << e->codeprint(cont);
    ss << "bnez t0, "<< endif << "\n"; //Skip the if statement if t0 is not equal to 0
    ss << "#THEN STATEMENT\n";
    ss << is->codeprint(cont);
    if(hasElse){
        ss << "j " << endelse << "\n"; // Jump past else statement
    }
    ss << endif << ":\n";
    if(hasElse){
        ss << "#ELSE STATEMENT\n";
        ss << es->codeprint(cont);
        ss << endelse << ":\n";
    }
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
        std::string topOfDo = Helper::getUniqueLabel(cont);
        ss<<topOfDo<<":\n"; //Top of the do portion
        ss << "#DO WHILE STATEMENT\n";
        ss << s->codeprint(cont);
        ss << "#WHILE EXPRESSION\n";
        ss << e->codeprint(cont);
        ss << "beqz t0, "<< topOfDo << "\n"; //Loop to the do until t0 is not equal to 0 (false)
    }
	else{
        std::string topOfWhile = Helper::getUniqueLabel(cont);
        std::string bottomOfWhile = Helper::getUniqueLabel(cont);
        ss<<topOfWhile<<":\n"; //Top of the while portion
        ss << "#WHILE EXPRESSION\n";
        ss << e->codeprint(cont);
        ss << "bnez t0, "<< bottomOfWhile << "\n"; //skip over the do if t0 not equal to 0 (false)
        ss << "#DO WHILE STATEMENT\n";
        ss << s->codeprint(cont);
        ss << "j "<< topOfWhile << "\n"; //Jump back to the top of the while
        ss << bottomOfWhile<<":\n"; //Bottom of the while portion
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
