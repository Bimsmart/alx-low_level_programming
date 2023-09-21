#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that changes letters from lowercase to uppercase
 * @str: a string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

		while (str[i] != '\0')
		{
			str[i] = toupper(str[i]);
			i++;
		}
			return (str);
}

