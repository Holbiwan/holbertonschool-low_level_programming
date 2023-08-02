#include "lists.h"

/**
 * sum_dlistint - returns sum of the data of a dlistint_t list.
 * @head: head of the dlistint_t list.
 *
 * Return: sum of data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
