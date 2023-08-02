#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: head of the dlistint_t list
 * @idx: position to insert node
 * @n: value of new node
 *
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *cursor;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	
	cursor = *h;
	while (idx > 1 && cursor && cursor->next)
	{
		cursor = cursor->next;
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx > 1 || cursor == NULL)
		return (NULL);

	
	new->n = n;

	
	if (cursor->next != NULL)
		cursor->next->prev = new;
	new->prev = cursor;
	new->next = cursor->next;
	cursor->next = new;

	return (new);
}
