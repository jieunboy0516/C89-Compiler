
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
	std::map <std::string, int> variableMap;
	Context() {
		currentStackOffset = 0;
	}
	// Function to return the next memory address available for a new variable
	int getNewVariableAddress() {
		//Get largest key value from varaibleMap
		int largestKey = 0;
		for (std::map<std::string, int>::iterator it = variableMap.begin(); it != variableMap.end(); ++it) {
			if (it->second > largestKey) {
				largestKey = it->second;
			}
		}
		return largestKey + 4;
	}

};

class Node {
public:
	virtual ~Node() 
	{};
	virtual std::string print()=0;
	virtual std::string cprint()=0;
	virtual std::string codeprint(Context& cont) {
		return "#NOT IMPLEMENTED YET\n";
	}
};

class Statement : public Node {

};
class Expression : public Node {
public:
	virtual std::string codeprint(Context& cont) {
		return "#NOT IMPLEMENTED YET\n";
	}
};



#endif