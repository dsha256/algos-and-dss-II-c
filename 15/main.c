#include <stdio.h>
#include "my_library.h"

#define MAXLINE 1000

int main() {
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0) {
        reverse(line);

        if ((printf("%s", line)) < 0) {
            perror("printf error");
        }
    }
}