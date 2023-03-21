#include "main.h"

/**
 * _islower - a function that return 1 if alphabet is lower and 0 if not
 *
 * Return: when is lower case return 1 otherwise o
 *
 * @c: parameter to be printed
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
