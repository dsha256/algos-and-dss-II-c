#include <stdio.h>
#include "my_library.h"

int main() {
    long nc;

    nc = 0;
    while (my_getchar() != EOF) {
        ++nc;
    }
    if ((printf("%ld\n", nc)) < 0) {
        perror("printf error");
    }

    return 0;
}