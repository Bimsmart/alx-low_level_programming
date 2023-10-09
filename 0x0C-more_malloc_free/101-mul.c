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
        long int res;

        if (argc != 3)
        {
                printf("Error\n");
                exit(98);
        }
        else
	{
		num1 = argv[1];
		num2 = argv[2];
		res = atoi(num1) * atoi(num2);
		printf("%ld\n", res);
	}
	return (0);
}
