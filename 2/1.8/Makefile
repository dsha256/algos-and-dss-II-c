CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm7

hm7 : main.o is_blank.o is_tab.o is_newline.o my_getchar.o 
	$(CC) $(CFLAGS) -o main main.o is_blank.o is_tab.o is_newline.o my_getchar.o 

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

is_blank.o : is_blank.c
	$(CC) $(CFLAGS) -c -o is_blank.o is_blank.c

is_tab.o : is_tab.c
	$(CC) $(CFLAGS) -c -o is_tab.o is_tab.c

is_newline.o : is_newline.c
	$(CC) $(CFLAGS) -c -o is_newline.o is_newline.c

my_getchar.o : my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

.PHONY : clear
clear :
	rm -rf *.o
