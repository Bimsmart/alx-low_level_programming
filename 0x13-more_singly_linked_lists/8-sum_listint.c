#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: the head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
