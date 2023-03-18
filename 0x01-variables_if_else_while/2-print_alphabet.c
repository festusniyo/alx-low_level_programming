#include <stdio.h>

/**
 * main - a program that print alphabets in lowercase
 *
 * Return: 0 returned
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
