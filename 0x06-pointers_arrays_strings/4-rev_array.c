#include "main.h"
/**
 * reverse_array - this function reverses the order of an array
 * @a: this is the arrray to be reversed
 * @n: the number of bytes
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
