#include <stdio.h>
#include "my_library.h"

#define MAXLINE 1000

int main() {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (line[0] == '\n') {
            // თუ "სტრინგის" პირველივე სიმბოლო ნიულაინია მაშინ არარარფერს ვაკეთებთ და ამასაც ვაიგნორებთ თან
        } else {
            chop(line, MAXLINE);
            if ((printf("%s<END OF STRING\n", line)) < 0) {
                perror("printf error");
            }
        }
    }

    return 0;
}