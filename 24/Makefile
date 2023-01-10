CC=gcc
CFLAGS=-Wall

.PHONY : all
all : task

task : main.o my_strcat.o
	$(CC) $(CFLAGS) -o main main.o my_strcat.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

my_strcat.o : my_strcat.c
	$(CC) $(CFLAGS) -c -o my_strcat.o my_strcat.c

.PHONY : clear
clear :
	rm -rf *.o
