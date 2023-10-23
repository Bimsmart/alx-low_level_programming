#include "lists.h"
/**
 * listint_len - this function returns the number of elements in a linked list
 * @h: the head
 * Returns: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counts = 0;

	while (h)
	{
		counts++;
		h = h->next;
	}
	return (counts);
}
