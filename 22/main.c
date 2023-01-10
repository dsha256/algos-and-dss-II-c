#include <stdio.h>
#include "my_library.h"

int main() {
    unsigned int num;
    num = setbits(5, 6, 7, 8);

    if ((printf("%d\n", num)) < 0) {
        perror("printf error");
    }

    return 0;
}
