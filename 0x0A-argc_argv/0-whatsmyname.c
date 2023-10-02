#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: argument to count
 * @argv: a pointer to a string
 * Return: 0 (Always)
 */

int main(int argc, char *argv[])
{
	int c = 0;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
