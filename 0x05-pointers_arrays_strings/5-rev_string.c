#include "main.h"
/**
 * rev_string - this reverses a string
 * @s: this is a string
 * Return: void;
 */
void rev_string(char *s)
{
	int l;
	int count = 0;

	for (l = 0; s[l] != 0; l++)
		count++;
	for (l = 0; l < count / 2; l++)
	{
	char m = s[l];

	s[l] = s[count - 1 - l];
	s[count - 1 - l] = m;
	}
}
