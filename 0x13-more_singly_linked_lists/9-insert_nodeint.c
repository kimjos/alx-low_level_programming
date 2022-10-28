#include "lists.h"

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
 * new_nodeint - creates a new listint_t with it's next being null
 * @n: the number
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *new_nodeint(const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a double pointer to the head
 * @idx: the index of the list where the new node should be added
 * @n: the n for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_before;
	listint_t *new_node;
	listint_t *node_after;

	if (!head)
		return (NULL);
	if (!*head || idx == 0)
		return (add_nodeint(head, n));

	node_before = get_nodeint_at_index(*head, idx - 1);
	if (!node_before)
		return (NULL);
	node_after = get_nodeint_at_index(*head, idx);
	new_node = new_nodeint(n);
	if (new_node == NULL)
		return (NULL);

	node_before->next = new_node;
	new_node->next = node_after;

	return (new_node);
}
