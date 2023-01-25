#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a position
 * in a doubly linked list
 * @head: pointer to the first node of linked list
 * @index: position of node to delete
 * Return: 1 if success else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp && count != index)
	{
		tmp = tmp->next;
		count++;
	}
	if (!tmp && count != index)
		return (-1);
	else if (!tmp && count == index)
		tmp->prev->next = NULL;

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
