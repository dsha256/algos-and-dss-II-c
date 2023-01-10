#include "my_library.h"

void my_strncat(char *s, char *t, int n) {
    int i = 0;
    int len = my_strlen(s);
    for (i = 0; n > 0; i++, n--) {
        *(s + len + i) = *t++;
    }
    *(s + len + i) = '\0';
}