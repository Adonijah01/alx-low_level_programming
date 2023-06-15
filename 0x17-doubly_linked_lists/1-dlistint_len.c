#include "lists.h"

/**
 * dlistint_len - count the number of node in  list
 * @h: pointer to the beginning of lists
 *
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
