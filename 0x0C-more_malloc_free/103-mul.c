#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main entry
 * @argv: argument to a pointer to a string @argc: argument to counter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int c;
	long int res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (c = 0; num1[c] != '\0'; c++)
	{
		if (!isdigit(num1[c]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (c = 0; num2[c] != '\0'; c++)
	{
		if (!isdigit(num2[c]))
		{
			printf("Error\n");
			return (98);
		}
	}
	res = atoi(num1) * atoi(num2);
	printf("%ld\n", res);
	return (0);
}
