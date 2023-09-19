#include "main.h"
/**
 * _atoi - this is a function that converts string to integers
 * @s: the string to be converted
 * Return: int from string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int m = 0;

	if (s[0] == '-')
	{	sign = -1;
		m++;
	}
	while (s[m] != '\0')
	{
		if (s[m] >= '0' && s[m] <= '9')
		{
			result = result * 10 + (s[m] - '0');
		}
		m++;
	}
	return (sign * result);
}
