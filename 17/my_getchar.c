#include <stdio.h>

int my_getchar() { /* O(1) */

	int c; /* O(1) */
	c = getchar(); /* O(1) */

	if (c == EOF) { /* O(1) */
		perror("\nReturned EOF "); /* O(1) */

		if (feof(stdin)) perror("END-OF-FILE "); /* O(1) */
		else if (ferror(stdin)) perror("A read error occurs, the error indicator for the stream is set."); /* O(1) */
		else perror("Only god knows what happened."); /* O(1) */
	}

	return c; /* O(1) */
}