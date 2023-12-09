#include "lists.h"
/**
 * @get_dnodeint_at_index: returns the nth node of a double linked list
 * @head: a pointer to the head
 * @index: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int sz;
	dlistint_t tmp;

	sz = 0;
	if (head == NUll)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp)
		sz++;
		rmp = tmp->next;
	}
	return (NULL);
}
