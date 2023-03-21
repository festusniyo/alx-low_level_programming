#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * Return: 0 returned
 *
 * @x: parameter to be checked
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = -(x);
	}
	else if (x >= 0)
	{
		x = x;
	}
	return (x);
}
