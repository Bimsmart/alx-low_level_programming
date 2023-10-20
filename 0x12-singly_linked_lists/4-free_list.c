#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - this function frees a list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *current_list = head;
	list_t *next;

	while (current_list != NULL)
	{
		next = current_list->next;
		free(current_list);
		current_list = next;
	}
}
