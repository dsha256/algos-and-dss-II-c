CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm6

hm6 : main.o my_getchar.o
	$(CC) $(CFLAGS) -o main main.o my_getchar.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

my_getchar.o : my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

.PHONY : clear
clear :
	rm -rf *.o
