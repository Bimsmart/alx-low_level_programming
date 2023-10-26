#include "main.h"
/**
 * get_bit - this returns the value of a bit of given index
 * @n: number to be iterated
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
