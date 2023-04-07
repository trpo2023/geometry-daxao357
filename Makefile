CC = g++
CFLAGS = -Wall -Wextra

./bin/output: ./obj/main.o ./obj/message.o
	$(CC) $(CFLAGS) ./obj/main.o ./obj/message.o -o ./bin/output

./obj/main.o: ./src/message/main.cpp
	$(CC) $(CFLAGS) -c ./src/message/main.cpp -o ./obj/main.o

./obj/lib.a: ./obj/message.o
	ar rcs

./obj/message.o: ./src/lib/message.cpp ./src/lib/message.h
	$(CC) $(CFLAGS) -c ./src/lib/message.cpp -o ./obj/message.o

run: ./bin/output
	./bin/output

clean:
	rm -f ./bin/output ./obj/*.o 
