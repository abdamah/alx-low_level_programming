#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
