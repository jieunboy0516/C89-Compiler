## Making a compiler with basic feature

To make a compiler with simple feature which only compile a single function without parameters, we make a new folder c_small . We start building the AST nodes and try to resolve errors for the AST. This allowed us to work on the parser while debugging as we go. This compiler doesnt produce any assembly code, but it does parse and generate the tree correctly.

## AST nodes

We have build the framework for many nodes, including `if` statements and `while` loops and have put these in the parser.

## Bug fixes

We have also fixed many errors involving circular dependencies by moving the definitions and declarations into their correct locations, and including the correct headers in the source files rather than the header files. In doing this we have build a better foundation to continue building the compiler.

## Next steps
From here we will move our code into the main folder and begin code generation. We will start working on the code generation for the AST nodes we have already built, and then move on to the rest of the AST nodes. (currently our code generation function is not producing anything useful, only some psuedo codes)