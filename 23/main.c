#include <stdio.h>
#include "my_library.h"

int main() {
    int index;
    char s1[] = "hello world and hello again hello";
    char s2[] = "hello";

    index = str_r_index(s1, s2);

    if (index >= 0) {
        if ((printf("right index = %d\n", index)) < 0) {
            perror("printf error!");
        }
    } else {
        if ((printf("Not found!")) < 0) {
            perror("printf error!");
        }
    }

    return 0;
}
