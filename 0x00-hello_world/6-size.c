#include <stdio.h>
/*find the size of various types*/
int main(void)
{
	int i;
	double d;
	char c;
	float f;
	short s;
	printf("The size of an integer is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(i));
        printf("The size of a short is: %lu.\n", (unsigned long)sizeof(s));
        printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c)
	return (0);
}

