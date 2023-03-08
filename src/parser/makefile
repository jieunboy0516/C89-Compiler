bin/c_compiler: bin/parsertest.tab.o bin/parsertest.yy.o
	g++ -o bin/c_compiler bin/parsertest.tab.o bin/parsertest.yy.o	

bin/parsertest.yy.o: bin/parsertest.yy.cpp bin/parsertest.tab.hpp
	g++ -o bin/parsertest.yy.o -c bin/parsertest.yy.cpp 

bin/parsertest.tab.o: bin/parsertest.tab.cpp bin/parsertest.tab.hpp
	g++ -o bin/parsertest.tab.o -c bin/parsertest.tab.cpp 

bin/parsertest.tab.cpp bin/parsertest.tab.hpp: src/parsertest.y src/ast.hpp
    bison -o bin/parsertest.tab.cpp -d src/parsertest.y

bin/parsertest.tab.cpp : src/parsertest.y
	bison -o bin/parsertest.tab.cpp -d -v src/parsertest.y

bin/parsertest.yy.cpp: src/c_lexer.l
	flex -o bin/parsertest.yy.cpp src/c_lexer.l

clean:
	rm -f bin/*.cpp bin/*.o bin/c_compiler bin/*.hpp