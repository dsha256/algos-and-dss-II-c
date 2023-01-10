#include "stdio.h"

int my_getchar() {
    int c;

    c = getchar();

    if (c == EOF) {
        perror("\nRETURNED EOF");

        if (feof(stdin)) {
            perror("end-of-file.");
        } else if (ferror(stdin)) {
            perror("A read error occurs, the error indicator for the stream is set.");
        } else perror("Only god knows what happened.");
    }

    return c;
}