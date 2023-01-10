#include <stdio.h>

void my_printf(char s[]) {
    if ((printf("%s", s)) < 0) {
        perror("printf error");
    }
}