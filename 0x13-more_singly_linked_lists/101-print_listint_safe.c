#include "lists.h"
/**
 * loops_listint_len - this function prints a listint_t list
 * @head: the head
 * Return: the number of nodes in the list
 */
size_t loops_listint_len(const listint_t *head)
{
        const listint_t *not_fast, *fast;
        size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	not_fast = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (not_fast == fast)
		{
			not_fast = head;
			while  (not_fast != fast)
			{
				nodes++;
				not_fast = not_fast->next;
				fast  = fast->next;
			}
			not_fast = not_fast->next;
			while (not_fast != fast)
			{
				nodes++;
				not_fast = not_fast->next;
			}
			return (nodes);
		}
		not_fast = not_fast->next;
		fast =(fast->next)->next;
	}
	return (0);		
}
/**
 * printe_listint_safe - this function prints a listint_t list
 * @head: the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, in = 0;

	nodes = loops_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (in = 0; in < nodes; in++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
                        head = head->next;
		}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);	
}
