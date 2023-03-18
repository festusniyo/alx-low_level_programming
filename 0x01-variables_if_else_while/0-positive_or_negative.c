#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - a program that print if number is positive,zero or negative
 *
 * Return:returning 0 after successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
