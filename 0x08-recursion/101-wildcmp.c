#include "main.h"

/**
 * wildcmp - this function compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 1 (if identical) 0 (not idetical)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1,  s2));
	}
	return (0);
}
