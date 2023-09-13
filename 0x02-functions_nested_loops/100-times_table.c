#include "main.h"
#include <stdio.h>
/**
 * print_times_table - this function prints time tables of numbers between 0-15
 * @n:the number to be printed
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;


	if (n >= 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; i++)
		{
			printf("%-4d", i * j);
		}
		printf("\n");
	}
}
