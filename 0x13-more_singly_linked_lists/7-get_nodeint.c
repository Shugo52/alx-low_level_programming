#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list.
 *
 * @head: Beginning of the linked list.
 * @index: index of the node to get starting at zero.
 *
 * Return: Node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len = listint_len(head);

	if (!head || index >= len)
		return (NULL);

	return (get_intnode_at_index(head, index));
}

/**
 * get_intnode_at_index - Does the recursive part of this task.
 *
 * @head: As defined above.
 * @index: As defined above also.
 *
 * Return: node.
 */
listint_t *get_intnode_at_index(listint_t *head, size_t index)
{
	if (!index)
		return (head);

	return (get_intnode_at_index(head->next, --index));
}

/**
 * listint_len - Calculates the number of nodes in a linked list.
 * @h: Linked list's head.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (1 + listint_len(h->next));
}
