#include "main.h"
/**
 * _isupper - This function checks fore uppercase letters
 * @c: this is a character
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
