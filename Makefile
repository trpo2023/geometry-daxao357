output: main.o message.o
	g++ main.o message.o -o output

main.o: main.cpp
	g++ -c main.cpp

prnt.o: message.cpp message.h
	g++ -c message.cpp

clean:
	rm *.o output