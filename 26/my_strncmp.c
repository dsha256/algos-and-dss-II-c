int my_strncmp(const char *s, const char *t, int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (*(s + i) < *(t + i)) {
            return -1;
        } else if (*(s + i) > *(t + i)) {
            return 1;
        }
    }

    return 0;
}
