#include <stdio.h>
/**
 * print_before_main - this function applies the constructor attribute
 * to the print_before main function before executing main
 */
void print_before_main(void)
__attribute__((constructor));
/**
 * print_before_main - whatvis to be printed
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
