#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a listint_t node in a listint_t list.
 *
 * @head: Double pointer to the list's beginning.
 * @idx: Index at where the new node should be inserted.
 * @n: Value for data field of new node.
 *
 * Return: Address of newly inserted node or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;

	if (idx >= listint_len(*head) || (int) idx < 0)
		return (NULL);

	if (idx != 0)
		return (insert_intnode_at_index((*head)->next, *head, --idx, n));

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
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
 * insert_intnode_at_index - Inserts a listint_t node in a listint_t list.
 *
 * @head: Double Pointer to the list's beginning.
 * @prev: Previous node preceding current indexed node.
 * @idx: Index at where the new node should be inserted.
 * @n: Value for data field of new node.
 *
 * Return: Node's address or NULL on failure.
 */
listint_t *insert_intnode_at_index(listint_t *head, listint_t *prev,
size_t idx, int n)
{
	listint_t *node;

	if (idx != 0)
		return (insert_intnode_at_index(head->next, head, --idx, n));

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = head;
	prev->next = node;

	return (node);
}
