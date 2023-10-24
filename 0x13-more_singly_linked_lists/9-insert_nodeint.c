#include "lists.h"
/**
 *
 * @head: The head
 * @idx: the node to be inserted
 * @n: value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;
	unsigned int j;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	j = 0;
	while (tmp && j < idx)
	{
		if (j == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
		j++;
	}
	return (NULL);
}
