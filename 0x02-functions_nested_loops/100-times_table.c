#include "main.h"

/**
 * print_times_table - print times n table
 *
 * return: 0 after successful
 *
 * @n: parameter to be printed
 */

void print_times_table(int n)
{
	int num;
	int mult;
	int pro;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				pro = num * mult;
				if (pro <= 99)
					_putchar(' ');
				if (pro <= 9)
					_putchar(' ');
				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar((pro / 10) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
				_putchar((pro % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
