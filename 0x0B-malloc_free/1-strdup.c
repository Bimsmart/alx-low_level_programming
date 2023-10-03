#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - this function return a pointer to a newly allocated space
 * @str: the string to be duplicated
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *ptr, p;
	unsigned int n;

	ptr = &p;
	n = strlen(str);
	ptr = (char *)malloc(n * sizeof(char));
	ptr = strdup(str);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (ptr);
		}
	}
	free(ptr);
}
