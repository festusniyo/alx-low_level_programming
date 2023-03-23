#include <stdio.h>

/**
 * main - a function that printing the first fibonacci numbers
 *
 * Return: 0 returned
 */

int main(void)
{
	int x = 0;
	long y = 1;
	long z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%ld", y);
		else if (x == 1)
		{
			printf(", %ld", z);
		}
		else
		{
			z += y;
			y = z - y;
			printf(", %ld", z);
		}
		++x;
	}
	printf("\n");
	return (0);
}
