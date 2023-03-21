#include "main.h"

/**
 * _isalpha - a function that return 1 if c is lower or upper case otherwise 0
 *
 * Return: when c is lower or upper return 1 otherwise 0
 *
 * @c: parameter to be displayed
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
