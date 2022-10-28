#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_s list.
 * @h: the listint_s list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int numnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
