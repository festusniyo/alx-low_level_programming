#include "main.h"

/**
 * positive_or_negative - function to test if number is - or +
 *
 * @i: parameter to be printed
 *
 * return: 0 returned
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
