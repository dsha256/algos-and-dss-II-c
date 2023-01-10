#include <stdio.h>

#include "my_library.h"

/* count digits, white space, others */

int main() {
 
	int c, i, nwhite, nother; /* O(1) */
	int ndigit[10]; /* O(1) */

	nwhite = nother = 0; /* O(1) */
	for (i = 0; i < 10; i++)
		ndigit[i] = 0; /* O(n) : n=10 */

	while ((c = my_getchar()) != EOF /* O(n) */)
		if (c >= '0' && c <= '9') /* O(2n) */
			++ndigit[c - '0']; /* საუკეთესო: O(1); უარესი: O(n); საშუალო: O(log(n)) */
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite; /* საუკეთესო: O(1); უარესი: O(n); საშუალო: O(log(n)) */
		else
			++nother; /* საუკეთესო: O(1); უარესი: O(n); საშუალო: O(log(n)) */

	if ((printf("digits = ")) < 0) perror("\n printf error \n"); /* O(n) */
	for (i = 0; i < 10; ++i)
		if ((printf("%d ", ndigit[i])) < 0) { /* O(n) : n=10 */
			perror("\n printf error \n"); /* O(1)*/
			return 1;
		}

	if ((printf(", white space = %d, other = %d\n", nwhite, nother)) < 0)
		perror("\n printf error \n");


	return 0;
}