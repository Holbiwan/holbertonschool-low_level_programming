#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
