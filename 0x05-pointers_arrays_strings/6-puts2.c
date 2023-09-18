#include "main.h"
/**
 * puts2 - this prints every other character
 * @str: the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	if (l % 2 == 0)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
