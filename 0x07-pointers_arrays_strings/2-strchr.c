#include "main.h"
#include <stdio.h>
/**
 * _strchr - this function locates a character in a string
 * @s: the string
 * @c: the character
 * Return: s[count] or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);

}
