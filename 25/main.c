#include <stdio.h>
#include "my_library.h"

int main() {
    int result;
    char s[] = "hello world";
    char t[] = "world";

    result = my_strend(&s[0], &t[0]);

    if ((printf("result: %d\n", result)) < 0) {
        perror("printf error!");
    }

    return 0;
}