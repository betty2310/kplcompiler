CC = gcc

CFLAGS = -Wall -g

all: run

run:
	$(CC) -o main main.c parser.c scanner.c charcode.c error.c reader.c token.c 
clean:
	rm -f main