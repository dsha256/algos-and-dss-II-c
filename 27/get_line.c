#include "stdio.h"
#include "my_library.h"

int get_line(char *s, int lim) {
    int c;
    char *t = s;
    while (lim-- > 0 && (c = my_getchar()) != EOF && c != '\n') {
        *s++ = c;
    }
    if (c == '\n') {
        *s++ = c;
    }

    return s - t;
}
