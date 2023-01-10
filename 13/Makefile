CC=gcc
CFLAGS=-Wall

.PHONY : all
all : task

task : main.o my_getchar.o get_line.o
	$(CC) $(CFLAGS) -o main main.o my_getchar.o get_line.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

my_getchar.o : my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

get_line.o : get_line.c
	$(CC) $(CFLAGS) -c -o get_line.o get_line.c

.PHONY : clear
clear :
	rm -rf *.o
