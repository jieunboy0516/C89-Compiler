#ifndef __STATEMENTCOMPOUND__
#define __STATEMENTCOMPOUND__


#include "ast_all.h"
#include "ast_list_dec_stat.h"

class CompoundStatement : public Statement {
private:
	StatList* sl;
	DecList* dl;
public:
	CompoundStatement(StatList* sl_in, DecList* dl_in) : sl(sl_in), dl(dl_in) {}

};


#endif