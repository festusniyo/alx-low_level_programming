#include <stdio.h>

/**
 * main - a program that print digit in base 10
 *
 * Return: 0 returned
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
