#include "ast_externaldeclarator.h"
#include "ast_funcdef.h"
#include "ast_declarator.h"


std::string ExternalDeclaration::print() 
{
	std::stringstream ss;
	return ss.str();
}
std::string ExternalDeclaration::cprint() 
{
	std::stringstream ss;
	
	return ss.str();
}

std::string ExternalDeclaration::codeprint(Context &cont)
{
	std::stringstream ss;
	
	if (d != NULL)
	{

		ss << d->codeprint(cont);
	}
	if (f != NULL)
	{
		ss << f->codeprint(cont);
	}
	return ss.str();
}