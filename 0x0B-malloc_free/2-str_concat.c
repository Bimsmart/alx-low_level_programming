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
	int n, m;
	char *ptrS;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n = m = 0;
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	ptrS = (char *)malloc((n + m + 1) * sizeof(char));
	if (ptrS == NULL)
	{
		return (NULL);
	}
	n = m = 0;
	while (s1[n] != '\0')
	{
		ptrS[n] = s1[n];
		n++;
	}
	while (s2[m] != '\0')
	{
		ptrS[n] = s2[m];
		n++, m++;
	}
	ptrS[n] = '\0';
	return (ptrS);
}
