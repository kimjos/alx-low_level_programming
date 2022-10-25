#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the list_t list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int numnodes = 0;

	while (h != NULL)
	{
		numnodes++;
		h = h->next;
	}
	return (numnodes);
}
