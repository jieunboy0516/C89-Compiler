#include "lexertest.hpp"

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iomanip>


// Define the instance of the variable that is declared in the histogram.hpp header
TokenValue yylval;

int main()
{

    while(1){
        TokenType type=(TokenType)yylex();

        //std::string word = *yylval.string;

        std::cout << type << std::endl;
        //delete yylval.string;

      
    }


    return 0;
}
