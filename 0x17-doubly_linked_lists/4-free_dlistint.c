#include "lists.h"
/**
 * free_dlistint - this frees a double linked list
 * @head: a pointer to the head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
