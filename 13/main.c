#include <stdio.h>
#include "my_library.h"

#define MAXLINE 1000 /* maximum input line size */
#define LEGITIMATE 81


int main() {
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > LEGITIMATE) {
            if ((printf("%s\n", line)) < 0) perror("printf error");
        }
    }

    return 0;
}
