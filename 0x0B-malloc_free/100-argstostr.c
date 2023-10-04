#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - this function concatenates the arguments of this program
 * @ac: first argument
 * @av: second argument
 * Return: a pointer to a char
 */
char *argstostr(int ac, char **av)
{
	int n, m;
	int a = 0, b = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			b++;
		}
	}
	b += ac;
	ptr = malloc(sizeof(char) * (b + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m]; m++)
		{
			ptr[a] = av[n][m];
			a++;
		}
		if (ptr[a] == '\0')
		{
			ptr[a++] = '\n';
		}
	}
	return (ptr);
}
