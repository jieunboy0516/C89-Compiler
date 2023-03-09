//#include "lexertest.hpp"

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iomanip>

#include "./include/ast.hpp"




int main()
{

    // while(1){
    //     TokenType type=(TokenType)yylex();

    //     //std::string word = *yylval.string;

    //     std::cout << type << std::endl;
    //     //delete yylval.string;

    //     // Parse the AST
        
        
    //     // evaluate it with the bindings given
        
    //     std::cout<<std::endl;

      
    // }

    const Expression *ast=parseAST();
    ast->print(std::cout);

    return 0;
}
