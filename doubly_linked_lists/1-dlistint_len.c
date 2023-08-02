#include "lists.h"

/**
 * dlistint_len - Counts elements in a linked dlistint_t list
 * @h: Is the head of the dlistint_t list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
