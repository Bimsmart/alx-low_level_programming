#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - this function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ps;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (n >= b)
		d = a + c;
	else
		d = a + n;
	ps = malloc(sizeof(char) * (d + 1));
	if (ps == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (c <= d)
	{
		if (c <= a)
			ps[c] = s1[c];
		if (c >= a)
		{
			ps[c] = s2[b];
			b++;
		}
		c++;
	}
	return (ps);
}
