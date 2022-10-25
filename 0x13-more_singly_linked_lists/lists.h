#ifndef _LISTS_H_
#define _LISTS_H_
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <strings.h>

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void pre_main(void) __attribute__((constructor));
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *get_intnode_at_index(listint_t *head, size_t index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *insert_intnode_at_index(listint_t *head, listint_t *prev,
size_t idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *locate_and_delete(listint_t *head, listint_t *prev, size_t index);
#endif
