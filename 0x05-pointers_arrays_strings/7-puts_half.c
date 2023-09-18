#include "main.h"
/**
 * puts_half - this function prints half of a string
 * @str: the character to be printed
 * vReturn: void
 */
void puts_half(char *str)
{
	int l;
	int n;
	int count = 0;

	for (l = 0; str[l] != '\0';  l++)
		count++;
	n = (count - 1) / 2;

	for (l = n + 1; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
