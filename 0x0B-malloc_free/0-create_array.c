#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - this function creates an array of chars
 * @size: this is the size of the array
 * @c: a character
 * Return: apointer or NULl
 */
char *create_array(unsigned int size, char c)
{
	char *ptrC;
	unsigned int ct;

	ptrC = &c;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		ptrC = malloc(size * sizeof(char));
		for (ct = 0; ct < size; ct++)
		{
			ptrC[ct] = c;
		}
		return (ptrC);
	}
}
