#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * Return: 0 returned
 *
 * @n: parameter to be printed
 */

void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
	}

}
