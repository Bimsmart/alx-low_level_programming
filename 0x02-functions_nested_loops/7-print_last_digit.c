#include "main.h"
/**
 * print_last_digit - this function Prints the last digit of a number
 *@n: The number whose last digit is to be calculated
 * Return: 0
 *
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');

	return (l);
}
