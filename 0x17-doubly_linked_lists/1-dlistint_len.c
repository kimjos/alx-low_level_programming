#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
