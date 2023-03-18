#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the last digit of a number and if is greater than 5 less than 6
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	}
	printf("\n");
	return (0);
}
