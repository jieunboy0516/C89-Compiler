CPPFLAGS += -W -Wall -g 

# This avoids error: ‘fileno’ was not declared in this scope
CPPFLAGS += -std=c++0x

# Avoid warnings about yyunput not used
CPPFLAGS += -Wno-unused-function

all : lexertest

lexertest_lexer.yy.cpp : lexertest_lexer.flex lexertest.hpp
	flex -o lexertest_lexer.yy.cpp  lexertest_lexer.flex

lexertest : lexertest_lexer.yy.o lexertest_main.o lexertest.hpp
	g++ $(CPPFLAGS) -o lexertest  lexertest_lexer.yy.o lexertest_main.o

