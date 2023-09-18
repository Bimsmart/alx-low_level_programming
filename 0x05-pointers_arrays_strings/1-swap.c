#include "main.h"
/**
 * swap_int - this function exchaves the value of two integers
 * @a : first integer
 * @b : second integer
 * return: void
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
