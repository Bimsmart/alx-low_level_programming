#include <stdio.h>
/**
 *  main - This is a Main function
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
