#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - this function frees a list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
