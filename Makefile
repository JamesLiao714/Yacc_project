ifeq ($(shell uname -s), Darwin)
	javaa := ./javaa_mac
else
	javaa := ./javaa
endif

all: compiler

parser: lex.yy.cpp y.tab.cpp symbols.cpp symbols.hpp
	g++ y.tab.cpp symbols.cpp -o parser -ll -ly -std=c++11 -Wno-deprecated-register


compiler: lex.yy.cpp y.tab.cpp symbols.cpp symbols.hpp codeGen.hpp
	g++ y.tab.cpp symbols.cpp -o compiler -ll -ly -std=c++11 -Wno-deprecated-register

lex.yy.cpp: scanner.l
	lex -o lex.yy.cpp scanner.l

y.tab.cpp: parser.y
	yacc -d parser.y -o y.tab.cpp

clean:
	rm compiler lex.yy.cpp y.tab.*

run: compiler
	./compiler $(file).scala
	$(javaa) $(file).jasm
	java $(file)