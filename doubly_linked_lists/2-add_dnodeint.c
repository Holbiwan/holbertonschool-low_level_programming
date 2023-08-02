#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of dlistint_t list
 * @n: new element
 * Return: NULL if it failed or the adress of new node 
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
