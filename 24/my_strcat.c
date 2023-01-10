void my_strcat(char *s, const char *t) {
    int i, j;
    i = j = 0;
    while (*(s + i) != '\0') {
        i++;
    }

    while ((*(s + (i++)) = *(t + (j++))) != '\0');
}
