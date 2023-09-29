#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion: this function returns the natural square root of a number
 * @n: a number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	int ans = sqrt(n);

	if ((ans * 10) % 10 != 0)
	{
		return (-1);
	}
	else 
	{
		return (sqrt(n));
	}
	return (0);
}
