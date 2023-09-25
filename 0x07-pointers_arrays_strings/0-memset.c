#include "main.h"
#include <stdio.h>
/**
 * _memset - this function fills the first nbytes of a mem space s
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
