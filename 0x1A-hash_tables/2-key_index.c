#include "hash_tables.h"

/**
 * key_index - Get the index at which a k/v pair should
 *             be stored in array of a hash table.
 * @key: The key to get the index of ht.
 * @size: The size of the array of the ht.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algo.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
