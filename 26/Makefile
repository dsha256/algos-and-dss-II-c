CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm15

hm15: main.o my_strlen.o my_strncat.o my_strncmp.o my_strncpy.o
	$(CC) $(CFLAGS) -o main main.o my_strlen.o my_strncat.o my_strncmp.o my_strncpy.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

my_strlen.o : my_strlen.c
	$(CC) $(CFLAGS) -c -o my_strlen.o my_strlen.c

my_strncat.o : my_strncat.c
	$(CC) $(CFLAGS) -c -o my_strncat.o my_strncat.c

my_strncmp.o : my_strncmp.c
	$(CC) $(CFLAGS) -c -o my_strncmp.o my_strncmp.c

my_strncpy.o : my_strncpy.c
	$(CC) $(CFLAGS) -c -o my_strncpy.o my_strncpy.c

.PHONY : clear
clear :
	rm -rf *.o
