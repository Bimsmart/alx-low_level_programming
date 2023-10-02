#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: argument to count
 * @argv: argument to a pointer to a string
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int c, product;

	if (argc == 3)
	{
		int a, b;

		for (c = 1; c < argc; c++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			product = a * b;
		}
		printf("%d\n", product);
	}
	else
	{
		for (c = 0; c < argc; c++)
		{
			printf("Error\n");
		}
		return (1);
	}
	return (0);
}
