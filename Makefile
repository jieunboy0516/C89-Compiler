CPPFLAGS += -std=c++20 -W -Wall -g -I include

.PHONY: default
.PHONY: tree

default: bin/c_compiler

bin/c_compiler : src/cli.cpp src/compiler.cpp tree
	@mkdir -p bin
	g++ $(CPPFLAGS) -o bin/c_compiler src/cli.cpp src/compiler.cpp bin/c_lexer.yy.o bin/c_parser.tab.o ./*.o

tree: bin/c_parser.tab.o bin/c_lexer.yy.o
	g++ -Wall -c ./include/ast/*.cpp 

bin/c_lexer.yy.o: bin/c_lexer.yy.cpp bin/c_parser.tab.hpp
	g++ -o bin/c_lexer.yy.o -c bin/c_lexer.yy.cpp -w

bin/c_parser.tab.o: bin/c_parser.tab.cpp bin/c_parser.tab.hpp
	g++ -o bin/c_parser.tab.o  -c bin/c_parser.tab.cpp -w  -I ./include/ast 
	
bin/c_parser.tab.cpp bin/c_parser.tab.hpp: src/c_parser.y
	bison -o bin/c_parser.tab.cpp -d src/c_parser.y
	
bin/c_lexer.yy.cpp: src/c_lexer.flex
	flex -o bin/c_lexer.yy.cpp src/c_lexer.flex

clean:
	rm -rf bin/* ./*.o
