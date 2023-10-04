#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - this function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int c, b, n, m;
	char *ptrS;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	c = n + m;
	ptrS = (char *)malloc((c + 1) * sizeof(char));
	if (ptrS == NULL)
	{
		return (NULL);
	}
	m = 0;
	while (b < c)
	{
		if (b <= c)
			ptrS[n] = s1[n];
		if (b >= c)
		{
			ptrS[n] = s2[m];
			m++;
		}
		b++;
	}
	ptrS[b] = '\0';
	return (ptrS);
}
