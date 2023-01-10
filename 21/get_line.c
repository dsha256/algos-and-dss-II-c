#include <stdio.h>
#include "my_library.h"

int get_line(char s[], int lim) {

    int c, i;

    for (i = 0; i < lim - 1 && (c = my_getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}