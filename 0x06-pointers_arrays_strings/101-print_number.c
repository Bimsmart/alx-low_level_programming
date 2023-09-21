#include "main.h"
/**
 * print_number - this functio  prints an integer
 * @n: the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int ui = n;

	if (n < 0)
	{
		_putchar('-');
		ui = -n;
	}
	if (ui / 10 != 0)
	{
		print_number(ui / 10);
	}
	_putchar((ui % 10) + '0');
}
