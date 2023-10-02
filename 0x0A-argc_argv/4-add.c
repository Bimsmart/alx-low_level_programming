#include <stdlib.h>
#include <stdio.h>
/**
 * main - This is a main function
 * @argc: an argument to count
 * @argv: an argument to a pointer to a string
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int c, u, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (u = 0; argv[c][u] != '\0'; u++)
		{
			if (argv[c][u] < '\0' || argv[c][u] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
