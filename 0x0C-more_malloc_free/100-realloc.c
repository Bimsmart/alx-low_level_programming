#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - this realloctes a memory using malloc and free
 * @new_size: new allocated mwmory
 * @old_size: old memory
 * @ptr: pointer to prevoously allocated memory
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1, *pt2;
	unsigned int c;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pt1 = malloc(new_size);
	if (!pt1)
	{
		return (NULL);
	}
	pt2 = ptr;
	if (new_size < old_size)
	{
		for (c = 0; c < new_size; c++)
			pt1[c] = pt2[c];
	}
	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
			pt1[c] = pt2[c];
	}
	free(ptr);
	return (pt1);
}
