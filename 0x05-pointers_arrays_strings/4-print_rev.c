#include "main.h"
/**
 *  print_rev - this function prints a string in a reverse manner
 *  @s: the string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int l;
	int count = 0;

	for (l = 0; s[l] != '\0'; l++)
		count++;
	for (l = count - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
