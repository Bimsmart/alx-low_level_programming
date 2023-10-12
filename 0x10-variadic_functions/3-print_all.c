#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - this function prrints all
 * @format: different argument datatypes
 */
void print_all(const char * const format, ...)
{
	int c = 0;
	char *string, *separator = "";

	va_list(all);
	va_start(all, format);
	if (format)
	{
		while (format[c])
		{
			switch (format[c])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					string = va_arg(all, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					c++;
					continue;
			}
			separator = ", ";
			c++;
		}
	}
	printf("\n");
	va_end(all);
}
