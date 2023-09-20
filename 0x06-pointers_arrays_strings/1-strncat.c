#include "main.h"
#include <string.h>
/**
 * _strncat - this function concatenates two string
 * and the length must not exceed the length of the second
 * @desc: the destination
 * @src: the source string
 * @n: number of bytes
 * return: *desc
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
