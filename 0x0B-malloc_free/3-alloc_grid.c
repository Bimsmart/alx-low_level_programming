#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - this function returns a pointer to a two dimensional array
 * @width: the widthof the array
 * @height: the heightof the array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int n, m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		a[n] = malloc(width * sizeof(int));
		if (a[n] == NULL)
		{
			for (; n >= 0; n--)
				free(a[n]);
			free(a);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			a[n][m] = 0;
		}
	}
	return (a);
}
