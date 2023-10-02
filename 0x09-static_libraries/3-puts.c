#include "main.h"
/**
 * _puts - a funtion to print a string.
 * @s: the word or sentence to be printed
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
