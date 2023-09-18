#include "main.h"
#include <stdio.h>
/**
 * print_array - this function prints n elements of an array of integers
 * @n: no of arrays to be printed
 * @a: a pointer
 * Return: void
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
	printf("%d", a[l]);
		if (l < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
