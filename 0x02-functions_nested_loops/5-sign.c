#include "main.h"

/**
 * print_sign - a program that print number and sign
 *
 * Return: 1,0,-1 according to the condition
 *
 * @n: parameter to be printed
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
