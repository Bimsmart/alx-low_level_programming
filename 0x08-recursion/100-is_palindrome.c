#include "main.h"
/**
 * _strlen_recursion - this returns the length of a string
 * @s: a string
 * Return: 0 or strlen
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ( 1 + _strlen_recursion(s + 1));
	}
}

/**
 * compare : this compares the characters of a string
 * @a: smallesst iteration
 * @b: largest iteration
 * Return: 0 or 1
 */

int compare(char *s, int a,int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}
	return (0 + compare(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome -  this checks if a string is a palindrome
 * @s: a string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
