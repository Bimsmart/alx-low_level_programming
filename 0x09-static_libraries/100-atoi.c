#include "main.h"
/**
 * _atoi - this is a function that converts string to integers
 * @s: the string to be converted
 * Return: int from string
 */
int _atoi(char *s)
{
	int l, e, m, f, len, digit;

	l = 0;
	e = 0;
	m = 0;
	f = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (l < len && f == 0)
	{
		if (s[l] == '-')
			++e;
		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			f = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			f = 0;
		}
		l++;
	}
	if (f == 0)
		return (0);
	return (m);
}
