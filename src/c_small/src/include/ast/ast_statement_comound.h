#ifndef __STATEMENTCOMPOUND__
#define __STATEMENTCOMPOUND__



#include "ast_declarator.h"
#include "ast_list_dec_stat.h"
#include "ast_all.h"
#include <iostream>

class CompoundStatement : public Statement {
private:
	DecList* dl;
	StatList* sl;

public:
	CompoundStatement(DecList* dl_in, StatList* sl_in ) : dl(dl_in), sl(sl_in) {}


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
		if (dl != NULL) {
			ss << dl->codeprint(cont);
		}
		if (sl != NULL) {
			ss << sl->codeprint(cont);;
		}
		return ss.str();
	}

};


#endif