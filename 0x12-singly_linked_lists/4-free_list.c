#include "lists.h"
/**
 * free_list - frees list
 *
 * @head: head of list
 */
void free_list(list_t *head)
{
	if (!head)
		exit(0);

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
