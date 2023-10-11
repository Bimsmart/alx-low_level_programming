#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - this function searches for an integer
 * @array: an array of elements
 * @size: size of the array
 * @cmp: a function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i <= size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
