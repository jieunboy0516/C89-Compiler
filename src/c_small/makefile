bin/c_compiler: bin/c_small.tab.o bin/c_small.yy.o
	g++ -Wall -c ./src/include/ast/*.cpp 
	g++  -o bin/c_compiler bin/c_small.tab.o bin/c_small.yy.o ./*.o ./src/c_small_main.cpp -w 

bin/c_small.yy.o: bin/c_small.yy.cpp bin/c_small.tab.hpp
	g++ -o bin/c_small.yy.o -c bin/c_small.yy.cpp -w  -I ./src/include/ast 

bin/c_small.tab.o: bin/c_small.tab.cpp bin/c_small.tab.hpp
	g++ -o bin/c_small.tab.o  -c bin/c_small.tab.cpp -w  -I ./src/include/ast 
	
bin/c_small.tab.cpp bin/c_small.tab.hpp: src/c_small.y src/ast.hpp
	bison -o bin/c_small.tab.cpp -d src/c_small.y
	
bin/c_small.yy.cpp: src/c_small.flex
	flex -o bin/c_small.yy.cpp src/c_small.flex

src/c_small_main.o src/ast.hpp: src/c_small_main.cpp ast_source
	g++ -Wall -g -o src/c_small_main.o -C src/c_small_main.cpp ./src/include/ast/*.cpp 

clean:
	rm -f bin/*.cpp bin/*.o bin/c_compiler bin/*.hpp ./*.o