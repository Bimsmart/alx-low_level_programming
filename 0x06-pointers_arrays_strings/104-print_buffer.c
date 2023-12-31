#include "main.h"
#include <stdio.h>
/**
 * print_buffer - this function prints a buffer
 * @b: a pointer to a buffer
 * @size: size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int p;
	int q;
	int r;

	p = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		q = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (r = 0; r < 10; r++)
		{
			if (r < q)
				printf("%02x", *(b + p + r));
			else
				printf("  ");
			if (r % 2)
			{
				printf(" ");
			}
		}
		for (r = 0; r < q; r++)
		{
			int c = *(b + p + r);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		p += 10;
	}
}
