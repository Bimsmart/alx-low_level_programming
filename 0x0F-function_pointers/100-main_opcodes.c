#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function prints its own opcodes
 * @argc: argument to count
 * @argv: argument to pointer to a string
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	unsigned char opcode;
	int num_bytes, c;
	int (*add)(int, char **) = main;

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
	for (c = 0; c < num_bytes; c++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);
		if (c == num_bytes - 1)
			continue;
		printf(" ");
		add++;
	}
	printf("\n");
	return (0);
}
