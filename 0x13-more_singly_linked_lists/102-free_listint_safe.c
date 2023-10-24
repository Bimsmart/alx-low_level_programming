#include "lists.h"
/** free_listint_safe - this function frees a linked list
 * @h: the head
 * Return:the number pof elements inthe freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
