#include "main.h"
#include <stdlib.h>
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
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		ps = malloc(sizeof(char) * (l1 + n + 1));
	else
		ps = malloc(sizeof(char) * (l2 + n + 1));
	if (ps == NULL)
		return (NULL);
	while (a < l1)
	{
		ps[a] = s1[a];
		a++;
	}
	while (n < l2 && a < (l1 + n))
		ps[a++] = s2[b++];
	while (n >= l2 &&  a < (l1 + l2))
		ps[a++] = s2[b++];
	ps[a] = '\0';
	return (ps);
}
