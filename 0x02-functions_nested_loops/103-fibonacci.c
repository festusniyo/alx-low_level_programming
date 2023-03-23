#include <stdio.h>

/**
 * main - a function that print the sum of the even-valued terms
 *
 * Return: 0 returned
 */

int main(void)
{
	int x = 0;
	long y = 1;
	long z = 2;

	sum = z;
	while (z + y < 4000000)
	{
		z += y;
		if (z % 2 == 0)
		{
			sum += z;
			y = z - y;
			++x;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
