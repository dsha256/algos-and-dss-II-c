#include <stdio.h>
#include "my_library.h"

#define IN 1 /* inside a word */
#define OUT 0  /* outside a word */

int main() {

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = my_getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    if ((printf("New Lines - %d \tNew Words - %d \tNew Characters - %d\n", nl, nw, nc)) < 0)
        perror("printf error.");

    return 0;
}