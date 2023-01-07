#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: Hashtable.
 *
 * Return: None.
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t size = 0, count = 0;

	if (!ht)
		return;

	printf("{");
	while (size < ht->size)
	{
		if (ht->array[size])
		{
			if (count)
				printf(", ");	/* After first print */
			print_list(ht->array[size]);
			count++;
		}
		size++;
	}
	printf("}\n");
}

/**
 * print_list - Prints the contents of a hash table.
 * @node: Index head.
 *
 * Return: None.
 */
void print_list(hash_node_t *node)
{
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->next)
			printf(", ");	/* If there's another node */

		node = node->next;
	}
}
