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
	listint_t *tmp, *prev, *new_node = malloc(sizeof(listint_t));
	size_t i = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	tmp = *head;
	prev = *head;
	if (*head)
	{
		for (i = 0; i < idx; i++)
		{
			tmp = tmp->next;
			if (!tmp)
			{
				free(new_node);
				return (NULL);
			}
		}
		for (i = 0; i < idx - 1; i++)
		{
			prev = prev->next;
		}
		prev->next = new_node;
		new_node->next = tmp;
		return (new_node);
	}
	return (NULL);
}
