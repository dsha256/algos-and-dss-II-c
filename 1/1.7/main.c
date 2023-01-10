#include <stdio.h>

int any(char s1[], char s2[]);

int main() {
    char s1[] = "hello";
    char s2[] = "world";
    int res;
    res = any(s1, s2);

    if ((printf("%d\n", res)) > 0) {
        perror("printf error");
    }

    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;

    for (i=0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }

    return 0;
}