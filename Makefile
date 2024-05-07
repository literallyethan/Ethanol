bin/ethanol: obj/main.o
	g++ obj/main.o -o bin/ethanol

obj/main.o: main.cpp
	g++ -c main.cpp -o obj/main.o

clean:
	rm obj/*.o bin/*