#include "main.h"
#include <stdlib.h>
/**
 * _memset - this function fills the memory with a constant byte
 * @str: the memory to be filled
 * @d: the character to be copied
 * @n: the number of lines to copy the character
 * Return: pointer to char
 */
char *_memset(char *str, char d, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		str[c] = d;
	}
	return (str);
}
/**
 * _calloc - this function memory for an array
 * @nmemb: no of elements in an array
 * @size: the size of elements
 * Return: pointer to alocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}
