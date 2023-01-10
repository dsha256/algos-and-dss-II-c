CC=gcc
CFLAGS=-Wall

.PHONY : all
all : midterm

midterm : main.o
	$(CC) $(CFLAGS) -o main main.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

.PHONY : clear
clear :
	rm -rf *.o