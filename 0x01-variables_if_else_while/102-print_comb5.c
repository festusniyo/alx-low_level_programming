#include <stdio.h>

/**
 * main - a hold a program of two two digits numbers
 *
 * Return: 0 returned
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (((a / 10) + (a % 10)) != 17 && ((b / 10) + (b % 10)) != 18)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
