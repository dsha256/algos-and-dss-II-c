int my_strend(const char *s, const char *t) {
    int i, j;
    i = j = 0;

    while (*(s + i) != '\0') {
        i++;
    }
    while (*(t + j) != '\0') {
        j++;
    }

    if (j > i) {
        return 0;
    }

    while (j >= 0) {
        if (*(s + i) != *(t + j)) {
            return 0;
        }
        j--;
        i--;
    }

    return 1;
}