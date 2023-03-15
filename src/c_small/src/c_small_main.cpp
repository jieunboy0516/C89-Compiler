//#include "lexertest.hpp"

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iomanip>

#include "./include/ast.hpp"
#include "../bin/c_small.tab.hpp"



int main()
{

    // while(1){
    //     yytokentype type=(yytokentype)yylex();

    //     //std::string word = *yylval.string;

    //     std::cout << type << std::endl;
    //     //delete yylval.string;

    //     // Parse the AST
        
        
    //     // evaluate it with the bindings given
        
    //     std::cout<<std::endl;

      
    // }

    Node *ast=parseAST("mycode.txt");
    Context cont = Context();
    std::cout<<"=====CODE GENERATION====="<<std::endl;
    std::cout<< ast->codeprint(cont) << std::endl;
    //ast->codeprint(cont);
    //printf("Address of x is %p\n", (void *)ast);  
 
    return 0;
}
