#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *  leet - this encodes a string
 *  @s: a string
 *  Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int i, j;
	char *en = (char *)malloc(strlen(s) + 1);

		strcpy(en, s);

	for (i = 0; en[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (en[i] == 'a' || en[i] == 'A')
			{
				en[i] = '4';
			}
			if (en[i] == 'e' || en[i] == 'E')
			{
				en[i] = '3';
			}
			else if (en[i] == 'o' || en[i] == 'O')
			{
				en[i] = '0';
			}
			else if (en[i] == 't' || en[i]  == 'T')
			{
				en[i] = '7';
			}
			else if (en[i] == 'l' || en[i] == 'L')
			{
				en[i] = '1';
			}
		}
	}
	return (en);
}
