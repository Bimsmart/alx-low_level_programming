#include <stdio.h>
/**
 * main - this is the entry point
 * return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %ld: byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
