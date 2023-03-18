#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: 0 returned after main excution
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
