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

	new_node->str = str == NULL ? NULL : strdup(str);
	new_node->len = str == NULL ? 0 : strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
