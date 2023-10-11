#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - a pointer5 to get an operator input to a function
 * @s: a pointer to the available possible elements
 * Return: a pointer to the called function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =
	{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}	
	return (ops[i].f);

}
