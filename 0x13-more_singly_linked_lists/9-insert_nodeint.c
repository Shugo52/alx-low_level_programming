#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a position in a linked list
 * @head: pointer to the first node of the linked list
 * @idx: position to insert node at
 * @n: data to add in the node
 * Return: address of new node else NULL if fail
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *tmp, *new_node = malloc(sizeof(listint_t));

	if (!new_node || !*head)
		return (NULL);

	tmp = *head;
	while (tmp && count != idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (count != idx - 1 && idx != 0)
		return (NULL);

	new_node->n = n;
	if (idx != 0)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	} else if (tmp == NULL && count == idx - 1)
	{
		new_node->next = NULL;
		tmp->next = new_node;
	} else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
