#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the Main funtion
 * password Generator
 * Return: 0 Always
 */
int main(void)
{
	int passwd[100];
	int l, sum, m;

	sum = 0;
	srand(time(NULL));
	for (l = 0; l < 100; l++)
	{
		passwd[l] = rand() % 78;
		sum += (passwd[l] + '0');
		putchar(passwd[l] + '0');
		if ((2772 - sum) - '0' < 78)
		{
		m = 2772 - sum - '0';
		sum += m;
		putchar(m + '0');
		break;
		}
	}
	return (0);
}
