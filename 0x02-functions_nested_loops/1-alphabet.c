#include "main.h"

/**
 * print_alphabet - a function that print alphabet in lowercase
 *
 * Return: 0 returned
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
