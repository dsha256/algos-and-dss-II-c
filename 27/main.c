#include <stdio.h>
#include "my_library.h"

#define MAXLINE 1000

int main() {
    char s[] = "";

    get_line(&s[0], MAXLINE);
    if ((printf("%s\n", s)) < 0) {
        perror("printf error!");
    }
}
