#include <stdio.h>

/**
 * main - reverse alphabet program
 *
 * Return: 0 returned
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
