#include "main.h"
/**
 * _memcpy - this function copies a memory area
 * @dest: the destination of the copied area
 * @src: the source of the area to be copied
 * Return: desc
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
