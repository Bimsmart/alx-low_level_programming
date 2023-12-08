#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - this function prints all the elements of a dlistint_t
 *@h: a doubly linked list
 *Return: number of nodes
 * /
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes;

	no_of_nodes = 0;
	if (h == NULL)
		return (no_of_nodes);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
