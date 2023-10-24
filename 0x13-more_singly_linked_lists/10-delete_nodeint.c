#include "lists.h"
/**
 * delete_nodeint_at_index - this  deletes the node at index of linked list.
 * @head: the head
 * @index: the index to be deleted
 * Return: 1(success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *del_me = NULL;
	unsigned int j;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}
	del_me = tmp->next;
	tmp->next = del_me->next;
	free(del_me);
	return (1);
}
