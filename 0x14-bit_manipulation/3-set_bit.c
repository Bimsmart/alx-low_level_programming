#include "main.h"
/**
 * set_bit - sets the value of a bit of given index to 1
 * @n: number to be iterated
 * @index: index
 * Return: bit value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
