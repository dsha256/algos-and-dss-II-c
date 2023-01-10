CC=gcc
CFLAGS=-Wall

.PHONY : all
all : hm7

hm7 : main.o is_blank.o is_tab.o my_getchar.o my_putchar.o
	$(CC) $(CFLAGS) -o main main.o is_blank.o is_tab.o my_getchar.o my_putchar.o

main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

is_blank.o : is_blank.c
	$(CC) $(CFLAGS) -c -o is_blank.o is_blank.c

is_tab.o : is_tab.c
	$(CC) $(CFLAGS) -c -o is_tab.o is_tab.c

my_getchar.o : my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

my_putchar.o : my_putchar.c
	$(CC) $(CFLAGS) -c -o my_putchar.o my_putchar.c

.PHONY : clear
clear :
	rm -rf *.o
