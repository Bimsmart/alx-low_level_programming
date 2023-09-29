#include "main.h"
#include <stdio.h>
int _sqrt(int n, int c);
/**
 * _sqrt_recursion - this function returns the natural square root of a number
 * @n: a number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - computes the natural square-root of a number
 * @n: an integer
 * @c: counter
 * Return: -1 , c
 */
int _sqrt(int n, int c)
{
	int sqrt = c * c;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (c);
	}
	return (_sqrt(n, c + 1));
}
