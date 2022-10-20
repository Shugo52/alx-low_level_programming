#include "list.h"
/**
 * free_list - frees list
 *
 * @head: head of list
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head)
}
