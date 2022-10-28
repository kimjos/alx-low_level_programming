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
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a double pointer to the head
 * @n: the int
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	if (!head)
		return (NULL);
	else if (!*head)
		newnode = add_nodeint(head, n);
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		newnode = malloc(sizeof(*newnode));
		if (!newnode)
			return (NULL);

		(newnode)->n = n;
		newnode->next = NULL;
		temp->next = newnode;

	}
	return (newnode);
}
