#define YES         1
#define NO          0

void squeeze(char s1[], const char s2[]) {

    int i, j, n, found;

    for (i = j = 0; s1[i] != '\0'; ++i) {
        found = NO;
        for (n = 0; s2[n] != '\0'; ++n) {
            if (s1[i] == s2[n]) {
                found = YES;
            }
        }
        if (!found) {
            s1[j++] = s1[i];
        }
    }

    s1[j] = '\0';
}