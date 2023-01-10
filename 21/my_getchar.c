#include <stdio.h>
#include <stdlib.h>

int my_getchar() {
    int c;

    c = getchar();

    if (c == EOF) {
        perror("\nRETURNED EOF");

        if (feof(stdin)) {
            perror("end-of-file.");
            exit(0);
        } else if (ferror(stdin)) {
            perror("A read error occurs, the error indicator for the stream is set.");
            exit(1);
        } else perror("Only god knows what happened.");
    }

    return c;
}