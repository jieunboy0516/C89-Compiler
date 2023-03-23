## Learning to compile multiple source files with GCC

It is our first time that we encounter the need of using GCC to compile multiple files, including header and sources files, without the help of IDE. So we make a folder and build some test cpp and header files to learn how we can compile everything properly. At the end, we found out the following complilation and linker commands work. 

```

	g++ -Wall -c ./src/include/ast/*.cpp 
	g++  -o bin/c_compiler bin/c_small.tab.o bin/c_small.yy.o ./*.o ./src/c_small_main.cpp -w 

```

The first command assembles and compiles all cpp files in "included" folder to object files. 
The second command link everything including the main.cpp, lexer object file, parser object file and the inlcudes object files to a simple executable.


After learning to use GCC, we have to fix a large amount of errors in our code so that we can compile a basic compiler.