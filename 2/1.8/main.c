#include <stdio.h>
#include "my_library.h"

int main(int argc, char const *argv[])
{
	int c, nb, nt, nl;

	nb = 0;
	nt = 0;
	nl = 0;
	
	while ((c = my_getchar()) != EOF) {
		if (is_blank(c)) ++nb;
		if (is_tab(c)) ++nt;
		if (is_newline(c)) ++nl;
	}

	if ((printf("blanks=%d tabs=%d new lines=%d\n", nb, nt, nl)) < 0) {
		perror("printf error");
	}

	return 0;
}
