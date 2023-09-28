#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - this function returns the value of x raised to y
 * @x : base number
 * @y : the power
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * (_pow_recursion(x, y)));
	}
}
