#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a double linked list
 * @head: the head
 * @n: element value
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_end;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_end;
	}
	else
		*head = new_end;
	new_end->prev = h;
	return (new_end);
}
