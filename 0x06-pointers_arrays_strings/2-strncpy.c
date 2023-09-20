#include "main.h"
#include <string.h>
/**
 * _strncpy - this function copies a string
 * @dest:the destination string
 * @src: the sorce string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l > n && src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	for (; l < n; l++)
	{
		dest[l] = '\0';
	}
	return (dest);
}
