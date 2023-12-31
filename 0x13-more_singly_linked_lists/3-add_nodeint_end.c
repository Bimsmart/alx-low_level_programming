#include "lists.h"
/**
 * add_nodeint_end - function adds a new node at the beginning of a linked list
 * @head: the head
 * @n: the number of elements in the list
 * Return: address of the new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
		tmp->next = new_node;
	return (new_node);
}
