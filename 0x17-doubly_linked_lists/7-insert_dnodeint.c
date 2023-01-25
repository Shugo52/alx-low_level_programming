#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a position
 * in a doubly linked list
 * @h: pointer to the first node of linked list
 * @idx: position to insert node starting from 0
 * @n: data to add to node
 * Return: pointer to new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
		return (add_dnodeint(&(*h), n));

	tmp = *h;
	while (tmp && count != idx)
	{
		tmp = tmp->next;
		count++;
	}
	if (!tmp && count == idx)
		return (add_dnodeint_end(&(*h), n));

	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	new_node->next = tmp;
	tmp->prev = new_node;

	return (new_node);
}
