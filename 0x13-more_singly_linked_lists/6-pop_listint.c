#include "lists.h"

/**
 * pop_listint - Return and deletes head node's data.
 * @head: Double pointer to the list's first element.
 *
 * Return: Data in the first element.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!(*head))
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
