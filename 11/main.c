#include <stdio.h>
#include "my_library.h"

#define MAXLINE 1000 /* maximum input line size */
#define COND_FOR_TASK_1_17 81


int main() {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)  /* there was a line */
        printf("\nLONGEST LINE : %s\n", longest);
    return 0;
}