#include  <stdio.h>

/**
 * main - contain a program that is going to print various computer size types
 *
 * Return: 0 returned
 */

int main(void)
{
	long long int l;

	printf("size of a char:%ld byte(s)\n", sizeof(char));
	printf("size of an int:%ld byte(s)\n", sizeof(int));
	printf("size of a long int:%ld byte(s)\n", sizeof(long int));
	printf("size of a long long int:%ld byte(s)\n", sizeof(l));
	printf("size of a float:%ld byte(s)\n", sizeof(float));
	return (0);

}
