#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list.
 *
 * @head: Pointer to List beginning.
 * @n: Value to insert in new node's data field.
 *
 * Return: Address to new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	if (*head)
		return (add_nodeint_end(&((*head)->next), n));

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	*head = node;

	return (node);
}
