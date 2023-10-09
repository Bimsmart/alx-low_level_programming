#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _is_digit - this fuctoion checks for digits
 * str: the string
 * Return 1 , 0
 */
int _isdigit(char *str)
{
	int c = 0;

	while (str[c])
	{
		if (str[c] < '0' || str[c] > '9')
		{
			return (0);
			c++;
		}
	}
	return (1);
}
/**
 * _error -  function prints an error
 */
void _error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * stringLength - this returns the length of a string
 * @str: the string whose length is to be evaluated
 * Return: length of string
 */
int _stringlength(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}
/**
 * main - this function multiplies two integers
 * @argc: this is the counter
 * @argv: this is th argument to a pointer to a string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, c, p, l1, l2, *res, size, e = 0;
	char *str1, *str2;
	str1 = argv[1], str2 = argv[2];
        if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
                _error();
        l1 = _stringlength(str1);
        l2 = _stringlength(str2);
        size = l1 + l2 + 1;
        res = malloc(sizeof(int) * size);
        if (!res)
                return (1);
        for (c = 0; c <= l1 + l2; c++)
                res[c] = 0;
        for (l1 = l1 - 1; l1 >= 0; l1--)
        {
                num1 = str1[l1] - '0';
	       	p = 0;
		for (l2 = _stringlength(str2) - 1; l2 >= 0; l2--)
		{
			num2 = str2[l2] - '0';
			p += res[l1 + l2 + 1] + (num1 * num2);
                        res[l1 + l2 + 1] = p % 10;
			p  /= 10;
                }
                if (p > 0)
                        res[l1+ l2 + 1] += p;
        }
        for (c = 0; c < size - 1; c++)
        {
                if (res[c])
                        e = 1;
                if (e)
                        _putchar(res[c] + '0');
        }
        if (!e)
                _putchar('0');
        _putchar('\n');
        free(res);
        return (0);
}
