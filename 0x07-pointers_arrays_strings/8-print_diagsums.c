#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the array matrix
 * @size: the size of the matrix
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, x, asum = 0, bsum = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		asum = asum + a[i];
	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
		bsum = bsum + a[x];
	printf("%d, %d \n", asum, bsum);
}
