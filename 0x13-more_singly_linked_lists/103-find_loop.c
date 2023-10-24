#include "lists.h"
/**
 * listint_t - this function finds the loop in a linked list
 * @head: the head
 * Return: the address to the starting the node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (NULL);
	listint_t *not_fast = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		not_fast = not_fast_next;
		fast = fast->next->next;
		if (not_fast == fast)
			break;
	}
	if (fast == NULL || fast->next == NULL)
		return (NULL);
	not_fast = head;
	while (not_fast != fast)
	{
		not_fast = not_fast->fast;
		fast = fast->next;
	}
	return (not_fast);
}
