#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - this function prints strings
 * @separator: this separates two strings
 * @n: this is the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *strgs;

	va_list(strings);
	va_start(strings, n);
	for (i  = 0; i < n; i++)
	{
		strgs = va_arg(strings, char *);
		if (strgs == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", strgs);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
