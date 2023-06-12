#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 *
 * @ht: Hash Table
 * @key: Key whose value is to be retrieved
 * Return: value if success, NULL otherwise
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*variable declaration*/
	size_t index;
	hash_node_t *node;

	/*check for null input*/
	if (!ht || !key)
		return (NULL);

	/*compute the index and locate the node*/
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	/*check for null node*/
	if (!node)
		return (NULL);

	/*retrieve node if available*/
	while (node)
	{
		if (!(strcmp(node->key, key)))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
