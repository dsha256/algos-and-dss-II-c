int reverse(char s[]) {
    int i, j;
    char temp;

    i = 0;
    while (s[i] != '\0') {
        /* ვპოულობ სტრინგის დასასრულს */
        ++i;
    }
    --i; /* '\0'-დან დაბრუნება */
    if (s[i] == '\n') {
        --i; /* ნიულაინს ადგილზე ვტოვებ */
    }
    j = 0; /* ახალი სტრინგის, s-ის დასაწყისი */
    while (j < i) {
        temp = s[j];
        s[j] = s[i]; /* ჩარების სვაპი */
        s[i] = temp;
        --i;
        ++j;
    }

    return 0;
}