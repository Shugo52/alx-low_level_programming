#include "lists.h"

/**
 * free_listint - Frees all the nodes of an int list.
 * @head: List beginning.
 *
 * Return: None.
 */
void free_listint(listint_t *head)
{
	if (head)
		free_listint(head->next);

	free(head);
}
