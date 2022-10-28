#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the listint_t list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int numnodes = 0;

	while (h != NULL)
	{
		numnodes++;
		h = h->next;
	}
	return (numnodes);
}
