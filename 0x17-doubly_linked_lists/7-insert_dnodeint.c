#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the list
 * @index: the index to get
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;
	return (head);
}

/**
 * new_dnodeint - creates a new dlistint_t with it's next and prev being null
 * @n: the number
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *new_dnodeint(const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a double pointer to the head
 * @idx: the index of the list where the new node should be added
 * @n: the n for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_before;
	dlistint_t *new_node;
	dlistint_t *node_after;

	if (!h)
		return (NULL);
	if (!*h || idx == 0)
		return (add_dnodeint(h, n));

	node_before = get_dnodeint_at_index(*h, idx - 1);
	if (!node_before)
		return (NULL);
	node_after = get_dnodeint_at_index(*h, idx);
	new_node = new_dnodeint(n);
	if (new_node == NULL)
		return (NULL);


	node_before->next = new_node;
	new_node->next = node_after;
	new_node->prev = node_before;
	if (node_after)
		node_after->prev = new_node;

	return (new_node);
}
