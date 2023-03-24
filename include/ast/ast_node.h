
#ifndef __NODE__
#define __NODE__

#include <iomanip>
#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <string>
#include <sstream>
#include <list>
#include <map>



class Context {
public:
	int currentStackOffset;
	int scopeIndex;
	int labelNum;
	std::vector<std::map <std::string, int> > variableMaps;
	//std::map <std::string, int> variableMap;
	Context() ;
		// Function to return the next memory address available for a new variable
	int getNewVariableAddress() ;

};

namespace Helper {
	std::string pushStack(int reg, Context& cont) ;
	std::string popStack(int reg, Context& cont) ;
	std::string readVar(std::string name, Context& cont,int targetreg);
	std::string writeVar(std::string name, Context& cont) ;
	std::string writeNewVar(std::string name, Context& cont) ;
    std::string getUniqueLabel(Context& cont);

	//create a new variable map for the new scope & increase the scopeindex
	void enterNewScope(Context& cont);

	//count how many bytes in the current variable map and increase the SP by that amount
	std::string ExitScope(Context& cont);
}

class Node
{
public:
	virtual ~Node(){};
	virtual std::string print() = 0;
	virtual std::string cprint() = 0;
	virtual std::string codeprint(Context &cont)
	{
		return "#NOT IMPLEMENTED YET\n";
	}
};

class Statement : public Node
{
};
class Expression : public Node
{
public:
	virtual std::string codeprint(Context &cont)
	{
		return "#NOT IMPLEMENTED YET\n";
	}
};

#endif
