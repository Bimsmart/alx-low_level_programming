#include "main.h"
#include <stdio.h>
/**
 * factorial - this function returns the factorial of a number
 * @n: a number
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}}
