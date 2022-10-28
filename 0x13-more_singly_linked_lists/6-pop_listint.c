#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: a double pointer to the head
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *copy;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	copy = (*head)->next;
	free(*head);
	*head = copy;
	return (n);
}
