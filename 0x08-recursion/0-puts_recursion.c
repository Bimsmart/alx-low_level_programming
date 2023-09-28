#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - this function prints a string
 * @s:  this is an array of string
 * Return: 0 Always;
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
