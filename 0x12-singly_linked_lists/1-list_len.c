#include "lists.h"
#include <stdio.h>
/**
 * list_len  - this function prints the number of elements in a linked list
 * @h: a linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_nodes++;
	}
	return (no_of_nodes);
}
