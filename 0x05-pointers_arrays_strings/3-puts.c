#include "main.h"
/**
 * _puts - a funtion to print a string.
 * @str: the wordvor sentence to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
