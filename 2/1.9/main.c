#include <stdio.h>
#include "my_library.h"

#define NONBLANK 'a'

int main(int argc, char const *argv[])
{
	int c, lastc;

	lastc = NONBLANK;
	while ((c = my_getchar()) != EOF) {
		if (!is_blank(c)) 
			my_putchar(c);
		if (is_blank(c))
			if (!is_blank(lastc))
				my_putchar(c);

		lastc = c;
	}

	return 0;
}