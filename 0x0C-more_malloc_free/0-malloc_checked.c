#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b no of spaces to be allocated in memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);
	if (c == NULL)
	{	
		exit(98);
	}	
	return (c);
}
