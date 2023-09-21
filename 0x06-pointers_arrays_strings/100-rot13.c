#include "main.h"
/**
 * rot13 - This function ecodes using rot 13
 * @str: the string
 * Return: *str
 */
char *rot13(char *str)
{
	int i;
	int j;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0' ; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == norm[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
