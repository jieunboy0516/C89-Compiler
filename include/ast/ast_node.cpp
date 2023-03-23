	#include <iomanip>
#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <string>
#include <sstream>
#include <list>
#include <map>

    #include "ast_node.h"
    
    Context::Context() {
		currentStackOffset = 0;
		labelNum = 1;
		scopeIndex = -1;
		std::map <std::string, int> firstMap;
		variableMaps.push_back(firstMap);
	}
		// Function to return the next memory address available for a new variable
	int Context::getNewVariableAddress() {
		//Get largest key value from varaibleMap
		int largestKey = 0;
		for (std::map<std::string, int>::iterator it = variableMap.begin(); it != variableMap.end(); ++it) {
			if (it->second > largestKey) {
				largestKey = it->second;
			}
		}
		return largestKey + 4;
	}