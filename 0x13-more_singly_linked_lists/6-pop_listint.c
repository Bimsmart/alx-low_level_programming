#include "lists.h"
/**
 * pop_listint - this function deletes the head node of a linked int list
 * @head: the head
 * Return: deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int c;

	if (!head || !*head)
		return (0);
	c = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (c);
}
