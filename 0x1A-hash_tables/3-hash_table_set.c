#include "hash_tables.h"

/**
 * hash_table_set - sets up a hash table
 *
 * @ht: pointer to hash table to set up
 * @key: key to add to hash table
 * @value: value attached to key
 * Return: 1 if success 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*variable declaration*/
	size_t index;
	hash_node_t *node, *current_node;

	node = malloc(sizeof(hash_node_t));
	if (!key || !ht || !value || !node)
		return (0);

	/*compute the index*/
	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	/*update node if key exists*/
	while (current_node)
	{
		if (!(strcmp(current_node->key, key)))
		{
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/*initializing node*/
	node->value = strdup(value);
	node->key = strdup(key);

	/*insert node in case of collision*/
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
