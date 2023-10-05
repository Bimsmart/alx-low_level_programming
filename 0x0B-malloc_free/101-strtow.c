#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * c_word - this function counts words
 * @sr: a string
 * Return: no of words
 */
char c_word(char *sr)
{
	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; sr[b] != '\0'; b++)
	{
		if (sr[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * strtow - this function splits a string into words
 * @str: a string to split
 * Return: pointer or null
 */
char **strtow(char *str)
{
	char **m, *n;
	int d, e = 0, f = 0, len = 0, words, beg, end;

	while (*(str + len))
		len++;
	words = c_word(str);
	if (words == 0)
		return (NULL);
	m = (char **)malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	for (d = 0; d <= len; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (f)
			{
				end = d;
				n = (char *)malloc(sizeof(char) * (f + 1));
				if (n == NULL)
					return (NULL);
				while (beg < end)
					*n++ = str[beg++];
				*n = '\0';
				m[e] = n - f;
				e++;
				f = 0;
			}
		}
		else if (f++ == 0)
			beg = d;
	}
		m[e] = NULL;
	return (m);
}

