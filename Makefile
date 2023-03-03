CC = g++
CFLAGS = -Wall -Wextra

output: main.o message.o
	$(CC) $(CFLAGS) main.o message.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

message.o: message.cpp message.h
	$(CC) $(CFLAGS) -c message.cpp

run: output
	./output


clean:
	rm *.o output
