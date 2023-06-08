#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: size of hash table
 * Return: Pointer to hash table created
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!size || size <= 0 || !table)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	
	if (!table->array)
		return (NULL);

	return (table);
}

