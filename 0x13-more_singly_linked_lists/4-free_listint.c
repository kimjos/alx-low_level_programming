#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (!head)
		return;

	next = head;
	while (next)
	{
		head = next;
		next = head->next;
		free(head);
	}
}
