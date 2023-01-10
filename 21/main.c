#include <stdio.h>
#include "my_library.h"

#define MAX         999    /* maximum size of the strings */

int main() {
    char s1[MAX + 1], s2[MAX + 1];

    my_printf("Enter s1: ");
    get_line(s1, MAX);

    my_printf("Enter s2: ");
    get_line(s2, MAX);

    squeeze(s1, s2);

    if ((printf("Resulting string: \"%s\"\n", s1)) < 0) {
        perror("printf error!");
    }

    return 0;
}
