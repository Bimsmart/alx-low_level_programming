#include "lists.h"
#include <stdio.h>
/**
 * add_node - this function adds a new node at the beginning of a linked list
 * @head: the starting of the linked 
 * @str: string to be stored
 * Returns:  a pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;
	unsigned int k, count = 0;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	nw_node->len = count;
	nw_node->next = *head;
	*head = nw_node;
	return (*head);
}
