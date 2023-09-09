#include <stdio.h>
/**
 * main - This is a Main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 99)
	{
		if (i / 10 < i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		if (i != 89)
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
