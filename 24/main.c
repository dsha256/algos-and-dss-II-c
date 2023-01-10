#include <stdio.h>
#include "my_library.h"

int main() {
    char s[] = "hello";
    char t[] = "world";

    my_strcat(&s[0], &t[0]);

    if ((printf("%s\n", s)) <= 0) {
        perror("printf error!");
    }

    return 0;
}
