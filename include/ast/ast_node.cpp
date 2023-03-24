#include <iomanip>
#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <string>
#include <sstream>
#include <list>
#include <map>
#include <iostream>

#include "ast_node.h"

Context::Context()
{
    currentStackOffset = 0;
    labelNum = 1;
    scopeIndex = 0;	//scope index used to access variableMaps. eg, variableMaps[scopeIndex]		
    std::map<std::string, int> firstMap;
    variableMaps.push_back(firstMap);
}



namespace Helper {

	std::string pushStack(int reg, Context& cont) {
		std::stringstream ss;
		ss << "sw  " << reg << ", 0(sp)" << "\n";
		ss << "addi sp, sp, -4\n";
		cont.currentStackOffset--;
		return ss.str();
	}
	std::string popStack(int reg, Context& cont) {
		std::stringstream ss;
		ss << "addi sp, sp, +4\n";
		ss << "lw  " << reg << ", 0(sp)" << "\n";
		
		cont.currentStackOffset++;
		return ss.str();
	}		


	//read a variable and load it to specified register
	std::string readVar(std::string name, Context& cont,int targetreg){
		std::stringstream ss;
		int variableoffset;
		for (int i = cont.scopeIndex; i >= 0; i--) {
			if (cont.variableMaps[i].find(name) != cont.variableMaps[i].end()) {
				variableoffset = cont.variableMaps[i][name];
				ss << "# " << name <<  " = " << variableoffset << "\n";
				break;
			}
		}
		int currentoffset = cont.currentStackOffset;
		ss << "# " << "current stack offset" <<  " = " << currentoffset << "\n";
		int x = 4*(variableoffset-currentoffset +1); //add 1 because everytime we push something onto the stack, we decrease the currentStackOffset by 1 for the next push
		ss << "#ReadVar name\n";
		ss << "lw a" << targetreg<< ", " << x << "(sp)\n";
		return ss.str();
	}

	std::string writeVar(std::string name, Context& cont) {
		std::stringstream ss;
		int variableoffset;
		for (int i = cont.scopeIndex; i >= 0; i--) {
			if (cont.variableMaps[i].find(name) != cont.variableMaps[i].end()) {
				variableoffset = cont.variableMaps[i][name];
				ss << "# " << name <<  " = " << variableoffset << "\n";
				break;
			}
		}
		int currentoffset = cont.currentStackOffset;
		int x = 4*(variableoffset-currentoffset+1);
		ss << "#WriteVar " << name << "\n";
		ss << "sw a0, " << x << "(sp)\n";
		return ss.str();
	}

	//write the content of a0 into the stack
	//during declaration, there might be no expression to be evaluated. In that case just push whatever in a0 to the stack. 
	std::string writeNewVar(std::string name, Context& cont) {
		std::stringstream ss;


		ss << "#WriteNEWVar" << name << "\n";
		ss << "sw a0, 0(sp)\n";
		cont.variableMaps[cont.scopeIndex][name] = cont.currentStackOffset; //changing variable map

		//prepare the stack pointer for next push
		ss << "addi sp, sp, -4\n";
		cont.currentStackOffset--;


		return ss.str();
	}


	//create a new variable map for the new scope & increase the scopeindex
	void enterNewScope(Context& cont){

		std::map<std::string, int> newmap;
		cont.variableMaps.push_back(newmap);
		cont.scopeIndex ++;
	}

	//count how many bytes in the current variable map and increase the SP by that amount
	std::string ExitScope(Context& cont){
		std::stringstream ss;
		ss<< "#exiting scope \n"; 

		//get the size of the final variable map
		std::map <std::string, int> temp = cont.variableMaps[cont.variableMaps.size()-1];
		
		//loop through map and print out the key and value
		for (std::map<std::string, int>::iterator it = temp.begin(); it != temp.end(); ++it) {
			ss << "#" << it->first << " => " << it->second << '\n';
		}
		
		int size = temp.size();
		
		
		ss << "addi sp, sp," << size*4 << "\n";

		//pop the final variable map
		cont.variableMaps.pop_back();
		cont.scopeIndex--;

		ss<< "#done exiting scope \n"; 

		return ss.str();
	}




}