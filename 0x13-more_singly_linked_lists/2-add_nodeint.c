#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a double pointer to the old head
 * @n: the string to be copied in
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head != NULL)
	{
		listint_t *copy;

		if (!*head)
			copy = NULL;
		else
		{
			copy = malloc(sizeof(*copy));
			if (!copy)
				return (NULL);
			copy->n = (*head)->n;
			copy->next = (*head)->next;
		}
		free(*head);
		*head = malloc(sizeof(**head));
		if (!*head)
		{
			free(copy);
			return (NULL);
		}

		(*head)->n = n;
		(*head)->next = copy;

		return (*head);

	}
	return (NULL);
}
