### Steps to assemble a simple function:

```
int f(){
    return 5;
}
```

- evaluate return expression (5 in this case)
- `ret`


### our stack:

----------------    higher address
               |         
content old    |
---------------|    
content new    |    
               |
----------------    lower address


To access the content new, we access with the lower address.
Also, we always decrease the stack at the end of operations to prepare for the next push. 
so everytime we push, we do 

```
store word into SP
decrease SP
```


## Context Class and helper functions 

In ast_node, we implemented a Context class and some helper fucntions to use our stack in diferent places.

```

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

	//create a new variable map for the new scope & increase the scopeindex
	void enterNewScope(Context& cont);

	//count how many bytes in the current variable map and increase the SP by that amount
	std::string ExitScope(Context& cont);
}

```


VariableMaps is a vector. A more local scope is at the later of the list. After the local scope is exited, the map from the list (at the end) is popped.