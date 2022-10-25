#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a linked list.
 *
 * @head: Pointer to list beginning.
 * @n: Value to insert in new node's data field.
 *
 * Return: Pointer to new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
