#include <stdio.h>

/**
 * main - a program that print 10 digits with comas and space between
 *
 * Return: 0 returned
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
