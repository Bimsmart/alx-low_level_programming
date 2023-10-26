#include "main.h"
/**
 * binary_to_uint - this function converts binary numbers to unsigned int
 * @b: number to be converted
 * Return: rhe converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int j = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		conv = (conv << 1) + (b[j] - '0');
	}
	return (conv);
}
