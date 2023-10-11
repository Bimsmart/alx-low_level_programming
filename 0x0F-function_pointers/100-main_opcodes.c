#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main entry
 * @argc: argument to count
 * @argv: argument to pointer to a string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *add;
	int num_bytes, c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)main;
	c = 0;
	while (c < num_bytes)
	{
		if (c == num_bytes - 1)
		{
			printf("%02hhx\n", add[c]);
			break;
		}
		printf("%02hhx\n", add[c]);
		c++;
	}
	return (0);
}
