#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to list_t
 *
 */
void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
