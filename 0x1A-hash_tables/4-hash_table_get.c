#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value from a hashtable.
 *
 * @ht: Hashtable.
 * @key: Hash key.
 *
 * Return: Value found or NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *location;

	/* Validates parameters */
	if (!ht || !key)
		return (NULL);

	/* Find key index */
	index = key_index((unsigned char *) key, ht->size);

	location = ht->array[index];

	/* Return NULL on empty index */
	if (!location)
		return (NULL);

	/* Return node value if key in index else return NULL */
	while (location)
	{
		if (!(strcmp(location->key, key)))
			return (location->value);

		location = location->next;
	}

	return (NULL);
}
