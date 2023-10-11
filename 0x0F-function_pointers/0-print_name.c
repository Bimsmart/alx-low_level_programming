#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @name: pointer to name
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f  == NULL || name == NULL)
		return;
	f(name);
}
