#include "main.h"
#include <stdio.h>

int prime_no(int n, int d);
/**
 * is_prime_number - this is a function that checks for prime numbers
 * @n: a number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_no(n, 1));
}

int prime_no(int n, int d);
/**
 * prime_no - this is a function that checks for prime numbers
 * @n: a number
 * @d: divisor
 * Return: 0 or 1
 */
int prime_no(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	else if ((n / d) < d)
	{
		return (1);
	}
	else if ((n % d == 0) && d > 1)
	{
		return (0);
	}
	return (prime_no(n, d + 1));
}
