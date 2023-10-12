#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that sums up all its parameters
 * @n : number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int  sum = 0, c;

	va_list(sum_total);
	va_start(sum_total, n);
	if (n == 0)
	{
		return (0);
	}
	for (c = 0; c < n; c++)
	{
		sum = sum + va_arg(sum_total, int);
	}
	va_end(sum_total);
	return (sum);
}
