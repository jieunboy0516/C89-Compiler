#include <fstream>
#include <iostream>
#include <unistd.h>

#include "../include/cli.h"
#include "../include/ast.hpp"

void compile(std::ostream &w)
{
    w << ".text" << std::endl;
    w << ".globl f" << std::endl;
    w << std::endl;

    w << "f:" << std::endl;
    w << "addi  t0, zero, 0" << std::endl;
    w << "addi  t0, t0,   5" << std::endl;
    w << "add   a0, zero, t0" << std::endl;
    w << "ret" << std::endl;
}

int main(int argc, char **argv)
{
    // Parse CLI arguments, to fetch the values of the source and output files.
    std::string sourcePath = "";
    std::string outputPath = "";
    if (parse_command_line_args(argc, argv, sourcePath, outputPath))
    {
        return 1;
    }

    Node *ast=parseAST(sourcePath);

    // Open the output file in truncation mode (to overwrite the contents)
    std::ofstream output;
    output.open(outputPath, std::ios::trunc);
    Context cont = Context();

    // Compile the input
    std::cout << "Compiling: " << sourcePath << std::endl;
    output << ast->codeprint(cont);
    std::cout << "Compiled to: " << outputPath << std::endl;

    output.close();
    return 0;
}
