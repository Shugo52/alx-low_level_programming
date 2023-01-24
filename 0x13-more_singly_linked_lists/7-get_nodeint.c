#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a position of a linked list
 * @head: head pointer to linked list
 * @index: position of node to get starting at 0
 * Return: pointer to node else NULL if not found
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	size_t i;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			tmp = tmp->next;
			if (!tmp)
				return (NULL);
		}
		return (tmp);
	}
	return (NULL);
}
