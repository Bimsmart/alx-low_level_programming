#include "main.h"
#include <string.h>
/**
 *  leet - this encodes a string
 *  @str: a string
 *  Return: Always 0 (Success)
 */
char *leet(char *str)
{
	int i, j;
	char *l_chars = "43071";
	char *n_chars = "aeotl";

	for (i = 0; str[i] != '\0'; i++)
	{
		int k = strlen(n_chars);

		for (j = 0; j < k ; j++)
		{
			if (str[i] == n_chars[j] || str[i] == n_chars[j] - 32)
			{	str[i] = l_chars[j];
				break;
			}
		}
	}
		return (str);
}
