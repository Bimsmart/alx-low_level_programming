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
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
		sum1 = sum1 + a[x * size + 1];
	for (x = size - 1; x >= 0; x--)
		sum2 += a[x * size + (size - x - 1)];
	printf("%d, %d \n", sum1, sum2);
}
