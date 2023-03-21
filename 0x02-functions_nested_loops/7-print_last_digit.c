#include "main.h"

/**
 * print_last_digit - function that print last digit of number
 *
 * Return: b returned
 *
 * @a: parameter to be printed
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
	{
		b = -(b);
	}
	_putchar(b + '0');
	return (b);
}
