#include "lists.h"

/**
 * print_list - prints data in singly linked list
 * @h: pointer to a node
 * Return: length of list
*/

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
			continue;
		}
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
