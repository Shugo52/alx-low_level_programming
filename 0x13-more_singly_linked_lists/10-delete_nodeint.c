#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index from a listint_t list.
 *
 * @head: List beginning.
 * @index: Position of node in the list.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	size_t len = listint_len(*head);

	if (index >= len || !head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = locate_and_delete((*head)->next, *head, --index);
	free(node);

	return (1);
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

/**
 * locate_and_delete - Deletes node at index.
 *
 * @head: List beginning.
 * @prev: Previous node preceding current indexed node.
 * @index: Index of node to delete.
 *
 * Return: Pointer to deleted node.
 */
listint_t *locate_and_delete(listint_t *head, listint_t *prev, size_t index)
{
	listint_t *node;

	if (index)
		return (locate_and_delete(head->next, head, --index));

	node = head;
	prev->next = head->next;

	return (node);
}
