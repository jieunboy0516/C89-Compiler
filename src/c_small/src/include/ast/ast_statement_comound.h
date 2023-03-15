#ifndef __STATEMENTCOMPOUND__
#define __STATEMENTCOMPOUND__

#include "ast_declarator.h"
#include "ast_list_dec_stat.h"
#include "ast_all.h"

class CompoundStatement : public Statement {
private:
	DecList* dl;
	StatList* sl;

public:
	CompoundStatement(DecList* dl_in, StatList* sl_in ) : dl(dl_in), sl(sl_in) {}

};


#endif