#ifndef ast_hpp
#define ast_hpp

#include <vector>
#include <memory>
#include <string>
#include "c_parser.tab.hpp"

typedef std::shared_ptr<TreeAst> TreePtr;


class TreeAst{
    
    Type type;
    double numVal;
    std::string value;
    std::vector<TreePtr> branches;

    TreeAst(double val=null, std::string strVal="", std::vector<TreePtr> brnch){
        numVal = val;
        value = strVal;
        branches = brnch;
    }
};

#endif