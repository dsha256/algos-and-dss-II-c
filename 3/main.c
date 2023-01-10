#include <stdio.h>
#include "my_library.h"

int main() {
    int c;

    while ((c = my_getchar()) != EOF) {
        my_putchar(c);
    }

    return 0;
}