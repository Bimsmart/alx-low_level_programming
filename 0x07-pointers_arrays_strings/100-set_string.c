#include "main.h"
#include <stdio.h>
/**
 * set_string - this sets the value of a pointer to char
 * @s: a pointer to a pointer
 * @to: a pointer
 * Return: 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
