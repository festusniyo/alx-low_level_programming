#include <stdio.h>

/**
 * main - a function that going to print multiple of natural
 *
 * Return: 0 after successfull
 */

int main(void)
{
	int a;
	int b;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
