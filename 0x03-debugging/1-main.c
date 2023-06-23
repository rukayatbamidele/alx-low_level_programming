#include <stdio.h>

/**
 * main - cause an infinite loop
 * return: 0
 */

int main(void)
{
	int i;
	printf("Infinite loop incoming :(\n");
	i = 0;
	// Commented out the following section to avoid the infinite loop
	// while (i < 10)
	// {
	// putchar(i);
	// }
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
