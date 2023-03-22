
#ifndef __STATEMENTCOMPOUND__
#define __STATEMENTCOMPOUND__

#include "ast_list_dec_stat.h"


#include "ast_all.h"
#include <iostream>

class DecList;
class StatList;

class CompoundStatement : public Statement {
private:
	DecList* dl;
	StatList* sl;

public:
	CompoundStatement(DecList* dl_in, StatList* sl_in ) : dl(dl_in), sl(sl_in) {}
	std::string print();
	std::string cprint();
	std::string codeprint(Context& cont) ;

};


#endif