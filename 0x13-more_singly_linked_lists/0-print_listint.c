#include "lists.h"

/**
 * print_listint - Prints all elements of an int list.
 * @h: List head.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
