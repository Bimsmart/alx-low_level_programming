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
		c = a + b;
	else
		c = a + n;
	ps = malloc(sizeof(char) * (c + 1));
	if (ps == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (d <= c)
	{
		if (d <= a)
			ps[d] = s1[d];
		if (d >= a)
		{
			ps[d] = s2[b];
			b++;
		}
		d++;
	}
	return (ps);
}
