#include "main.h"
/**
 * _isalpha - this Checks for a letter
 * @c: is c a letter
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
