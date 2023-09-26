#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this prints the sum of the diagonal
 * @a: an array
 * @size: the size
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, n;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum = sum + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum1 = sum1 + a[n];
	printf("%d, %d\n", sum, sum1);
}
