#include "lists.h"
/**
 * list_len - returns number of elements
 * in a list
 *
 * @h: list to be printed
 * Return: Always
 */
size_t list_len(const list_t *h)
{
	int counter;

	counter = 0;
	if (!h)
		return (0);

	for (; h; h = h->next)
	{
		if (h->str == NULL)
			continue;
		counter++;
	}
	return (counter);
}
