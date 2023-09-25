#include "main.h"
#include <stdio.h>
/**
 * _strchr - this function locates a character in a string
 * @s: the string
 * @c: the character
 * Return: c or Null
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}
			return ("NULL");
}
