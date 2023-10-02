#include "main.h"
/**
 * _islower - This is an _islower function
 * @c: parameter in lowercase
 * Return:  0 (Success) or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
