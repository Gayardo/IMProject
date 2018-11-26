#declaure the variable
CC=g++
CFLAGS=-c -Wall

output: main.o graph.o
	$(CC) main.o graph.o -o output

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

graph.o: graph.cpp graph.h
	$(CC) $(CFLAGS) graph.cpp

clean:
	rm -rf *o IMHany
