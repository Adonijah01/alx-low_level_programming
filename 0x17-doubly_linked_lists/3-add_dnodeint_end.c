#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to the end of a linked list
 * @head: double pointer to the start of the list
 * @n: value to be added to node
 *
 * Return: pointer to new node, or NULL in fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
