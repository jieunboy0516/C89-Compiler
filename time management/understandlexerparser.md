## Studying the Parser

This folder is created to learn how to work with the lexer and the parser together. 

What we have learnt:

To use the lexer and parser together, we have to compile the parser (.y) file first because the compiled parser parsertest.tab.hpp contains the necessary yytokentypes for the lexer.

Then in the lexer (.flex) file, we do ```#include "../bin/parsertest.tab.hpp"``` so that we can use the tokens in the lexer.

Example of tokens include: 
```

    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_TIMES = 258,                 /* T_TIMES  */
    T_DIVIDE = 259,                /* T_DIVIDE  */
    T_PLUS = 260,                  /* T_PLUS  */
    T_MINUS = 261,                 /* T_MINUS  */
    T_EXPONENT = 262,              /* T_EXPONENT  */
    T_LBRACKET = 263,              /* T_LBRACKET  */
    T_RBRACKET = 264,              /* T_RBRACKET  */
    T_LOG = 265,                   /* T_LOG  */
    T_EXP = 266,                   /* T_EXP  */
    T_SQRT = 267,                  /* T_SQRT  */
    T_NUMBER = 268,                /* T_NUMBER  */
    T_VARIABLE = 269,              /* T_VARIABLE  */
    TAuto = 270,                   /* TAuto  */
    TDouble = 271,                 /* TDouble  */

```

also, that hpp file contains the definition of ```TokenValue yylval; ``` so we dont need to define it again in our lexer and main.cpp


Then, we understood that the parser is linked to the main.cpp (supposed to be a compiler in our case). So we have to compile the main.cpp to main.o so that we can link main.o and the lexer and parser together (done by the linker)


so that we execute the following instruction in order to compile everything:

1. Parser to object 
```


	bison -o bin/parsertest.tab.cpp -d src/parsertest.y


	bison -o bin/parsertest.tab.cpp -d -v src/parsertest.y

````

-v means verbose here which produces an ouput file (not needed)


2. Lexer to object 

```
	

	flex -o bin/parsertest.yy.cpp src/parsertest.flex


```


3. main.cpp

```



	g++ -Wall -g -c src/parsertest_main.cpp -o src/parsertest_main.o

```

4. parser and lexer to object 

```

	g++ -o bin/parsertest.yy.o -c bin/parsertest.yy.cpp 


	g++ -o bin/parsertest.tab.o -c bin/parsertest.tab.cpp 
	

```

yy is lexer
tab is parser(bison)



5. compile everything together 

```
	g++ -o bin/c_compiler bin/parsertest.tab.o bin/parsertest.yy.o src/parsertest_main.o

```

