#include <stdio.h>
/**
 * main - This is a Main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 010;

	while (i < 999)
	{
		if (i / 100 < 1 % 100)
		{
			putchar(i / 100 + '0');
			putchar(i % 100 + '0');

			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}

