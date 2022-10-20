#include "lists.h"
/**
 * print_list - prints a list
 *
 * @h: list to be printed
 * Return: Always
 */
size_t print_list(const list_t *h)
{
	int counter;

	counter = 0;
	if (!h)
		return (0);

	for (; h; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		counter++;
	}
	return (counter);
}
