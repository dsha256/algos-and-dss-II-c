#include <stdio.h>
#include "my_library.h"

int my_getchar();

int main()
{
	int c;

	while ((c = my_getchar()) != EOF)
		printf("%d - at EOF\n", c);

	if ((printf("%d - at EOF\n", c)) < 0) {
		perror("printf error");
	}
}
