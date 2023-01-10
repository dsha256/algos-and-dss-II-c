#include <stdio.h>

int s_ints();

int u_ints();

int main() { /* LINES - [6; 13] */

    s_ints();
    u_ints();

    return 0;
}

int s_ints() { /* LINES - [15; 46] */

    /* SIGNED INT */
    signed int s_int_a, s_int_b;

    s_int_a = s_int_b = 1;
    while (s_int_a > 0) {
        s_int_a *= 2;
        if (s_int_a > 0) {
            s_int_b = s_int_a;
        }
    }
    s_int_b += s_int_b - 1;

    if ((printf("\nSIGNED INT MAX\nCOMPUTED RESULT = %d\n", s_int_b)) < 0) {
        perror("\n printf error \n");
    }

    s_int_a = s_int_b = -1;
    while (s_int_a < 0) {
        s_int_a *= 2;
        if (s_int_a < 0) {
            s_int_b = s_int_a;
        }
    }

    if ((printf("\nSIGNED INT MIN\nCOMPUTED RESULT = %d\n", s_int_b)) < 0) {
        perror("\n printf error \n");
    }
    
    return 0;
}

int u_ints() { /* LINES - [48; 67] */

    /* UNSIGNED INT */
    unsigned int u_int_a, u_int_b;

    u_int_a = u_int_b = 1;
    while (u_int_a > 0) {
        u_int_a *= 2;
        if (u_int_a > 0) {
            u_int_b = u_int_a;
        }
    }
    u_int_b += u_int_b - 1;

    if ((printf("\nUNSIGNED INT MAX\nCOMPUTED RESULT = %u\n", u_int_b)) < 0) {
        perror("\n printf error \n");
    }

    return 0;
}