#include  <stdio.h>

/**
 * main - contain a program that is going to print various computer size types
 *
 * Return: 0 returned
 */

int main(void)
{
	long long int l;

	printf("size of a char:%d byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int:%d byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int:%d byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int:%d byte(s)\n", (unsigned long) sizeof(l));
	printf("size of a float:%d byte(s)\n", (unsigned long)sizeof(float));
	return (0);

}
