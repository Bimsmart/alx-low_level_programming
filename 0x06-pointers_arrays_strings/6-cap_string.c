#include "main.h"
#include <ctype.h>
/**
 * cap_string - this function capitalises all words of a string
 * @str: a string
 * Return: 0
 */
char *cap_string(char *str)
{
	int next_cap = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' ||  str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			next_cap = 1;
		}
		else if (next_cap)
		{
			str[i] = toupper(str[i]);
			next_cap = 0;
		}
	}
	return (str);
}
