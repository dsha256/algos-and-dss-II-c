CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm10

hm10 : main.o my_strend.o
	$(CC) $(CFLAGS) -o main main.o my_strend.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

str_r_index.o : str_r_index.c
	$(CC) $(CFLAGS) -c -o my_strend.o my_strend.c

.PHONY : clear
clear :
	rm -rf *.o
