#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - this function adds a new node to the end of a list
 * @head: the head of a list
 * @str: the string to be added
 * Return: a pointer to the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node, *rep;
	unsigned int j, count = 0;

	nw_node = malloc(sizeof(list_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->str = strdup(str);
	j = 0;
	while (str[j] != '\0')
	{
		count++;
		j++;
	}
	nw_node->len = count;
	nw_node->next = NULL;
	rep = *head;
	if (rep == NULL)
		*head = nw_node;
	else
	{
		while (rep->next != NULL)
			rep = rep->next;
		rep->next = nw_node;
	}
	return (*head);

}
