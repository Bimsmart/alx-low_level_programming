#include "lists.h"
/**
 * get_nodeint_at_index - this returns the nth node of a listint
 * @head: the head
 * @index: the index to be returned
 * Return: the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int j = 0;

	while (tmp && j < index)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp ? tmp : NULL);
}
