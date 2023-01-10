#include "stdio.h"

int my_putchar(int c) {
    c = putchar(c);

    if (c == EOF) {
        perror("RETURNED EOF");
        if (ferror(stdout)) {
            perror("A write error occurs, the error indicator for the stream is set.");
        } else perror("Only god knows what happened.");
    }

    return c;
}