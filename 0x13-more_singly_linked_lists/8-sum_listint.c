#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list.
 * @head: List beginning.
 *
 * Return: Sum of data in a listint_t list.
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	return (head->n + sum_listint(head->next));
}
