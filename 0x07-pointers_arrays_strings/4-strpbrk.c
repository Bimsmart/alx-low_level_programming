#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - this function searches a string for any form of bytr
 * @s: the string
 * @accept: the byte to be matched
 * Return: apointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;

	}
	return (NULL);
}
