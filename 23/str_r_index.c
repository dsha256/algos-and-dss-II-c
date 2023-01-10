int str_r_index(const char source[], const char search_for[]) {
    int i, len, len2, index, temp, cleared;

    for (len = 0; source[len] != '\0'; len++);
    for (len2 = 0; search_for[len2] != '\0'; len2++);

    index = len2 - 1;

    cleared = temp = 0;

    for (i = len - 1; i >= 0; i--) {
        if (source[i] == search_for[index]) {
            temp++;
            index--;
            if (cleared == 1) { cleared--; }
            if (temp == len2) {
                return i;
            }
        } else {
            if (cleared != 1) {
                temp = 0;
                index = len2 - 1;
                cleared++;
            }
        }
    }

    return -1;
}
