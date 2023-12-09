#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - this function prints all the elements of a dlistint_t
 *@h: a doubly linked list
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_elements;

	no_of_elements = 0;
	if (h == NULL)
		return (no_of_elements);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		no_of_elements++;
		h = h->next;
	}
	return (no_of_elements);
}
