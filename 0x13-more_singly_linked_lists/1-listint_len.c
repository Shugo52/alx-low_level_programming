#include "lists.h"

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
