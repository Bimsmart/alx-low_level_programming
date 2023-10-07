#include "main.h"
#include <stdlib.h>
/**
 * array_range - This creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to an int or NULL
 */
int *array_range(int min, int max)
{
	int *p_int;
	int n, c;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min;
	p_int = malloc(sizeof(int) * (n + 1));
	if (p_int == NULL)
	{
		return (NULL);
	}
	for (c = 0; min <= max; c++)
	{
		p_int[c] = min++;
	}
	return (p_int);

}
