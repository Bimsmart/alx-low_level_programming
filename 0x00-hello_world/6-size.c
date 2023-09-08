#include <stdio.h>
/**
 * main - a main function
 * return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int m;
	float f;

	printf("Size of a char: %ld bytes\n", (unsigned long)sizeof(c));
	printf("Size of a int: %ld bytes\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %ld bytes\n", (unsigned long)sizeof(l));
	printf("Size of a long long: %ld bytes\n", (unsigned long)sizeof(m));
	printf("Size of a float: %ld bytes\n", (unsigned long)sizeof(f);
}
