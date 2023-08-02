#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list.
 * @head:head of the dlistint_t list
 * @index: locate of the node to return.
 *
 * Return: NULL if the node does not exist 
 *          Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
