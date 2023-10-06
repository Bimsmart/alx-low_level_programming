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
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	n = a + b;
	if (n >= b)
		n = 	b;
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	ps = malloc(sizeof(char) * (n + 1));
	if (ps == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	while( s1[a] != '\0')
	{
		ps[a] = s1[a];
		a++;
	}
	while (s2[a] !=  '\0')
	{
		ps[a] = s2[b];
		a++, b++;
	}
	ps[a] != '\0';
	return(ps);
}
