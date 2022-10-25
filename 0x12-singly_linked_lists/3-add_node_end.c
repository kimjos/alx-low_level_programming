#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * str needs to be duplicated
 * @head: a double pointer to the old head
 * @str: the string to be copied in
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (head != NULL)
	{
		list_t *copy;

		if (!*head)
			copy = NULL;
		else
		{
			copy = malloc(sizeof(*copy));
			if (!copy)
				return (NULL);
			copy->str = (*head)->str;
			copy->len = (*head)->len;
			copy->next = (*head)->next;
		}

		*head = malloc(sizeof(**head));
		if (!*head)
			return (NULL);

		(*head)->str = strdup(str);
		if (!(*head)->str)
			return (NULL);
		(*head)->len = _strlen((*head)->str);
		(*head)->next = copy;

		return (*head);

	}
	return (NULL);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * str needs to be duplicated
 * @head: a double pointer to the head
 * @str: the string to be copied in
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	if (!head)
		return (NULL);
	else if (!*head)
		newnode = add_node(head, str);
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		newnode = malloc(sizeof(*newnode));
		if (!newnode)
			return (NULL);

		(newnode)->str = strdup(str);
		if (!newnode->str)
			return (NULL);

		newnode->len = _strlen(str);
		newnode->next = NULL;
		temp->next = newnode;

	}
	return (newnode);
}
