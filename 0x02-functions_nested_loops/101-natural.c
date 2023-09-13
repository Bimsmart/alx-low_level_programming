#include <stdio.h>
/**
 * main - This is the Main function
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int n;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

