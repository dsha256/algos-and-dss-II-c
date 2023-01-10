#include <stdio.h>
#include "my_library.h"

int main() {
    int c;

    while ((c = my_getchar()) != EOF) {
        if (is_tab(c)) {
            if ((printf("\\t")) < 0) perror("printf error");
        } else if (is_blank(c)) {
            if ((printf("\\b")) < 0) perror("printf error");
        } else if (c == '\\') {
            if ((printf("\\\\")) < 0) perror("printf error");
        } else {
            my_putchar(c);
        }
    }

    return 0;
}