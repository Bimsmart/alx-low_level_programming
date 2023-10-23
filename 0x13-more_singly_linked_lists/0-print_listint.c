#include <stdio.h>
#include "lists.h"
/**
 * print_listint - this function prints all elements in a linked list
 * @h: the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counts = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counts++;
		h = h->next;
	}
	return (counts);
}
