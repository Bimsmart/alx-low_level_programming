#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - this function prints a chessboard
 * @a: this is an array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int w;
	int b;

	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
			putchar(a[w][b]);
		_putchar('\n');
	}
}
