#include <stdio.h>
#include "my_library.h"

#define IN 1
#define OUT 0

int main() {
    int c, state;

    state = OUT;
    while ((c = my_getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                my_putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            my_putchar(c);
        } else {
            my_putchar(c);
        }
    }
}
