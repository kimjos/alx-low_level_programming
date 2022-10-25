#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	if (!head)
		return;

	next = head;
	while (next)
	{
		head = next;
		next = head->next;
		free(head->str);
		free(head);
	}
}
