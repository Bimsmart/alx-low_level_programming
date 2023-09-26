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
	int i, x, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];
	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
		sum2 = sum2 + a[x];
	printf("%d, %d \n", sum1, sum2);
}
