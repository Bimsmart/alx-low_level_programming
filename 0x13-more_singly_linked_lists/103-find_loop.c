#include "lists.h"
/**
 * find_listint_loop - this function finds the loop in a linked list
 * @head: the head
 * Return: the address to the starting the node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *not_fast = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (not_fast && fast && fast->next)
	{
		fast = fast->next->next;
		not_fast = not_fast->next;
		if (fast == not_fast)
		{
			not_fast = head;
			while (not_fast != fast)
			{
				not_fast = not_fast->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
