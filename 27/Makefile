CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm15

hm15 : main.o get_line.o my_getchar.o
	$(CC) $(CFLAGS) -o main main.o get_line.o my_getchar.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

get_line.o : get_line.c
	$(CC) $(CFLAGS) -c -o get_line.o get_line.c

my_getchar.o : my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

.PHONY : clear
clear :
	rm -rf *.o
