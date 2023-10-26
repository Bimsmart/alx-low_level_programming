#include "main.h"
/**
 * flip_bits - this function returns the no of times bits are flipped
 * @n: number
 * @m: number
 * Return: no of times flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int myxor = n ^ m;
	unsigned long int i = 0;

	while (myxor != 0)
	{
		i += myxor & 1;
		myxor >>= 1;
	}
	return (i);
}
