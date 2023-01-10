CC=gcc
CFLAGS=-Wall

.PHONY : all
all : task

task : main.o setbits.o
	$(CC) $(CFLAGS) -o main main.o setbits.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

setbits.o : setbits.c
	$(CC) $(CFLAGS) -c -o setbits.o setbits.c

.PHONY : clear
clear :
	rm -rf *.o

