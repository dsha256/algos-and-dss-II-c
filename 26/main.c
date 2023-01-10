#include <stdio.h>
#include "my_library.h"

int main() {

    char s[] = "hello";
    char t[] = "world";
    int n = my_strncmp(&s[0], &t[0], 3);

    if ((printf("%d\n", n)) < 0) {
        perror("printf error!");
    }

    return 0;
}



