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
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

		while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
