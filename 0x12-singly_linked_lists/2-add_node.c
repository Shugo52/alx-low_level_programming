#include "lists.h"
/**
 * add_node - adds node to list
 *
 * @head: head of list
 * @str: string to be added
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	node->str = str == NULL ? NULL : strdup(str);
	node->len = str == NULL ? 0 : strlen(str);

	node->next = *head;
	*head = node;

	return (new_node);
}
