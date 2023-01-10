CC=gcc
CFLAGS=-Wall

.PHONY : all
all : task

task : main.o get_line.o my_getchar.o squeeze.o my_printf.o
	$(CC) $(CFLAGS) -o main main.o get_line.o my_getchar.o squeeze.o my_printf.o

my_printf.o:
	$(CC) $(CFLAGS) -c -o my_printf.o my_printf.c

main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

get_line.o: get_line.c
	$(CC) $(CFLAGS) -c -o get_line.o get_line.c

my_getchar.o: my_getchar.c
	$(CC) $(CFLAGS) -c -o my_getchar.o my_getchar.c

squeeze.o: squeeze.c
	$(CC) $(CFLAGS) -c -o squeeze.o squeeze.c

.PHONY : clear
clear :
	rm -rf *.o
