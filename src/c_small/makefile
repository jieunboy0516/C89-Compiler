bin/c_compiler: bin/c_small.tab.o bin/c_small.yy.o
	g++ -o bin/c_compiler bin/c_small.tab.o bin/c_small.yy.o src/c_small_main.o -w

bin/c_small.yy.o: bin/c_small.yy.cpp bin/c_small.tab.hpp
	g++ -o bin/c_small.yy.o -c bin/c_small.yy.cpp -w

bin/c_small.tab.o: bin/c_small.tab.cpp bin/c_small.tab.hpp
	g++ -o bin/c_small.tab.o -c bin/c_small.tab.cpp -w
	
bin/c_small.tab.cpp bin/c_small.tab.hpp: src/c_small.y src/ast.hpp
	bison -o bin/c_small.tab.cpp -d src/c_small.y
	
bin/c_small.yy.cpp: src/c_small.flex
	flex -o bin/c_small.yy.cpp src/c_small.flex

src/c_small_main.o src/ast.hpp: src/c_small_main.cpp
	g++ -Wall -g -c src/c_small_main.cpp -o src/c_small_main.o

clean:
	rm -f bin/*.cpp bin/*.o bin/c_compiler bin/*.hpp