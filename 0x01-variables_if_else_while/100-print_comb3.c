#include <stdio.h>

/**
 * main - a program that print a combination of a digits
 *
 * Return: 0 returned
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a < b && b != a)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
