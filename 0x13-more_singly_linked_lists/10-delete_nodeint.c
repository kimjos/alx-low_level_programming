#include "lists.h"
#define SUCCESS 1
#define ERROR -1

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the list
 * @index: the index to get
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;
	return (head);
}

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: a double pointer to the head
 * @index: index is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_before;
	listint_t *node_tbd;
	listint_t *node_after;

	if (!head || !*head)
		return (ERROR);
	if (index == 0)
	{
		node_tbd = *head;
		*head = (*head)->next;
		free(node_tbd);
		return (SUCCESS);
	}

	/* get the node to be deleted, the node b4, and the node after */
	node_before = get_nodeint_at_index(*head, index - 1);
	if (!node_before)
		return (ERROR);
	node_tbd = get_nodeint_at_index(*head, index);
	if (!node_tbd)
		return (ERROR);
	node_after = get_nodeint_at_index(*head, index + 1);

	free(node_tbd);
	node_before->next = node_after;
	return (SUCCESS);
}
