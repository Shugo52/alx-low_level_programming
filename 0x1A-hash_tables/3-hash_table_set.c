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
	int index;
	hash_node_t *node = malloc(sizeof(hash_node_t)), *current_node;

	if (!key || !ht || !node)
		return (0);

	/*initializing node*/
	node->value = strdup(value);
	node->key = strdup(key);

	/*computing the index*/
	index = key_index((unsigned char *)key, ht->size);

	/*retrieving current index node*/
	current_node = ht->array[index];

	/*insert node directly into hash table if current index is empty*/
	if (current_node == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	/*update node if key exists*/
	while (current_node)
	{
		if (strcmp(current_node->key, key))
		{
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/*insert node in case of collision*/
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
