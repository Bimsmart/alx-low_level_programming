#include "main.h"
/**
 * get_endianness - this function checks for endianess
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int p = 1;
	char *a = (char *)&p;

	if (*a == 1)
		return (1);
	else
		return (0);
}
