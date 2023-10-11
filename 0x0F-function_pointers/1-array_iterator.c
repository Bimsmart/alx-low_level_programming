#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - this function exeecutes the action parameter
 * @size: a struct
 * @array: an array of elements
 * @action: a function pointer to print integers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
;
	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
	return (i);
}
