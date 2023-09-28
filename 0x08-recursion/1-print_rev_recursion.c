#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - this function prints a string in reverse
 * @s: this is an array of string
 * Return: 0 (Always)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
