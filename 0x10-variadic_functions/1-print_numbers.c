#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - this function prints numbers
 * @separator: the separares tthe numbers (e.g. comma)
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;	

	va_list(numb);
	va_start(numb, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numb, int));
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	printf("\n");
	va_end(numb);
}
