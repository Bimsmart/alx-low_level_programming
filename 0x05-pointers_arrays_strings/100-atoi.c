#include "main.h"
/**
 * _atoi - this is a function that converts string to integers
 * @s: the string to be converted
 * Return: int from string
 */
int _atoi(char *s)
{
	int l, d, f, length, n, digit;

	l = 0;
	d = 0;
	f = 0;
	length = 0;
	n = 0;
	digit = 0
	while (s[length] != '\0'){
		len++;
	while (l < length && f == 0)
	{	
		if (s[l] == '-')
			++d;
		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (d % 2)
				digit = - digit;
			n = n * 10 + digit;
			f = 1;
			}
		if (s[l + 1] < '0' || s[l + 1] > '9')
			break;
			f = 0;
		}
			l++;
		if (f == 0)
			return (0);
	}
		return (n);
}
