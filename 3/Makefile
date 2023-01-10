CC=gcc
CFLAGS=-Wall

.PHONY : all
all : task

task : main.o my_getchar.o my_putchar.c
	$(CC) $(CFLAGS) -o main main.o my_getchar.o my_putchar.c

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

my_getchar.o : my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

my_putchar.o : my_putchar.c
	$(CC) $(CFLAGS) -c -o my_putchar.o my_putchar.c

.PHONY : clear
clear :
	rm -rf *.o
