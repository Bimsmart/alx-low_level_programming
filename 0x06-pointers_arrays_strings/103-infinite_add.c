#include "main.h"
/**
 * rev_str(char *n)
 * @n: integer
 * Return 0
 */
void rev_str(char*n)
{
	int i = 0;
	int j = 0;
	char temp;
	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (i = 0;  j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - this adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r : size of the buffer
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int excess = 0; 
	int i = 0, j= 0, d = 0;
	int v1 = 0, v2 = 0, temp_sum = 0;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
		i--;
		j--;
	}
	if (j >= size_r || i >= size_r)
	       return (0);
	while (j >= 0 || i >= 0 || excess == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp_sum = v1 + v2 + excess;
		if (temp_sum >= 10)
			excess = 1;
		else
			excess = 0;
		if(d >= (size_r -1))
			return (0);
		*(r + d) = (temp_sum % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
	return (0);
	*(r + d) = '\0';
	rev_str(r);
	return (r);
}
