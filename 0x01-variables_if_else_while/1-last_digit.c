#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - This is a Main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of n is %d\n", n);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of n is %d\n", n);
	}
	return (0);
}
