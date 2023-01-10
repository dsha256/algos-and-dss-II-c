CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm10

hm10 : main.o str_r_index.o
	$(CC) $(CFLAGS) -o main main.o str_r_index.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

str_r_index.o : str_r_index.c
	$(CC) $(CFLAGS) -c -o str_r_index.o str_r_index.c

.PHONY : clear
clear :
	rm -rf *.o
