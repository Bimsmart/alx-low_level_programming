#include "main.h"
/**
 * _strcpy - this function copies a string
 * @dest: the destination of the copied str
 * @src: the source of the str
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0' ; l++)
	{
	dest[l] = src[l];
	}
	dest[l] = '\0';
	return (dest);
}
