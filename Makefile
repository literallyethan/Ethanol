bin/ethanol: obj/main.o obj/lexer.o
	g++ obj/main.o obj/lexer.o -o bin/ethanol

obj/main.o: main.cpp
	g++ -c main.cpp -o obj/main.o

obj/lexer.o: lexer.cpp include/lexer.hpp
	g++ -c lexer.cpp -o obj/lexer.o

clean:
	rm obj/*.o bin/*
