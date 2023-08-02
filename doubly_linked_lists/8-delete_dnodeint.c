#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: double linked list
 * @index: position to delete node
 *
 * Return: 1 if success or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && cursor)
		{
			cursor = cursor->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && cursor)
		{
			if (cursor->next)
				cursor->next->prev = cursor->prev;
			if (cursor->prev)
				cursor->prev->next = cursor->next;
			else
				*head = cursor->next;
			free(cursor);
			return (1);
		}
	}
	return (-1);
}
