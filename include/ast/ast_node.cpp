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

Context::Context()
{
    currentStackOffset = 0;
    labelNum = 1;
    scopeIndex = -1;
    std::map<std::string, int> firstMap;
    variableMaps.push_back(firstMap);
}
// Function to return the next memory address available for a new variable
int Context::getNewVariableAddress()
{
    // Get largest key value from varaibleMap
    int largestKey = 0;
    for (std::map<std::string, int>::iterator it = variableMap.begin(); it != variableMap.end(); ++it)
    {
        if (it->second > largestKey)
        {
            largestKey = it->second;
        }
    }
    return largestKey + 4;
}


namespace Helper {
	std::string pushStack(int reg, Context& cont) {
		std::stringstream ss;
		ss << "sw  $" << reg << ", 0($sp)" << "\n";
		ss << "addiu $sp, $sp, -4\n";
		cont.currentStackOffset++;
		return ss.str();
	}
	std::string popStack(int reg, Context& cont) {
		std::stringstream ss;
		ss << "addiu $sp, $sp, +4\n";
		ss << "lw  $" << reg << ", 0($sp)" << "\n";
		
		cont.currentStackOffset--;
		return ss.str();
	}
	std::string readVar(std::string name, Context& cont) {
		std::stringstream ss;
		int a;
		for (int i = cont.scopeIndex; i >= 0; i--) {
			if (cont.variableMaps[i].find(name) != cont.variableMaps[i].end()) {
				a = cont.variableMaps[i][name];
				ss << "# " << name <<  " = " << a << "\n";
				break;
			}
		}
		int b = cont.currentStackOffset;
		ss << "# " << "stack" <<  " = " << b << "\n";
		int x = 4*(b-a+1);
		ss << "#ReadVar name\n";
		ss << "lw $9, " << x << "($sp)\n";
		return ss.str();
	}

	std::string writeVar(std::string name, Context& cont) {
		std::stringstream ss;
		int a;
		for (int i = cont.scopeIndex; i >= 0; i--) {
			if (cont.variableMaps[i].find(name) != cont.variableMaps[i].end()) {
				a = cont.variableMaps[i][name];
				ss << "# " << name <<  " = " << a << "\n";
				break;
			}
		}
		int b = cont.currentStackOffset;
		int x = 4*(b-a+1);
		ss << "#WriteVar" << name << "\n";
		ss << "sw $9, " << x << "($sp)\n";
		return ss.str();
	}

	std::string writeNewVar(std::string name, Context& cont) {
		std::stringstream ss;
		int b = cont.currentStackOffset;
		ss << "#WriteNEWVar" << name << "\n";
		ss << "sw $9, 0($sp)\n";
		ss << "addiu $sp, $sp, -4\n";
		cont.currentStackOffset++;
		cont.variableMaps[cont.scopeIndex][name] = cont.currentStackOffset;

		return ss.str();
	}
}