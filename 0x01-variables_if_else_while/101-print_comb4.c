#include <stdio.h>
/**
 * main - This is a Main function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		if (i / 100 < (i / 10) % 10 && (i / 10) % 10 < i % 10)
		{
			putchar(i / 100 + '0');
			putchar((i / 10) % 10 + '0');
			putchar(i % 10 + '0');

			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar(789 / 100 + '0');
	putchar((789 / 10) % 10 + '0');
	putchar(789 % 10 + '0');

	putchar('\n');
	return (0);
}

