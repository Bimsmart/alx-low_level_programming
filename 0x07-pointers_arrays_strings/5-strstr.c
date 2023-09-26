#include <stdio.h>
#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haysack: a string in which needle is located in
 * @needle: another string to be found in hasack
 * Return: a pointer or NULL
 */
 char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
