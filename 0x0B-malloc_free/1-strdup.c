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
	char *ptr;
	int n, i = 0;;

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	/**n = strlen(str);*/
	ptr = (char *)malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	free(ptr);
}
