#include "hash_tables.h"
/**
 * shash_table_get - Retrieves a value associated with a key.
 *
 * @ht: Pointer to the hash table.
 * @key: Pointer to a the key string.
 *
 * Return: Value associated with the key, or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *cur;
	char *v_copy = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
			ht->array == NULL || ht->size == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	cur = (ht->array)[index];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			v_copy = strdup(cur->value);
			break;
		}
		cur = cur->next;
	}
	return (v_copy);
}

/**
 * shash_table_print - Prints a sorted hash table.
 *
 * @ht: Pointer to a hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur;
	char comma = 0;

	if (ht != NULL)
	{
		printf("{");
		for (cur = ht->shead; cur != NULL; cur = cur->snext)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			comma = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 *
 * @ht: Pointer to a hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cur;
	char comma = 0;

	if (ht != NULL)
	{
		printf("{");
		for (cur = ht->stail; cur != NULL; cur = cur->sprev)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			comma = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - Deletes a sorted hash table by freeing up memory and
 * setting the `ht` to NULL.
 *
 * @ht: Pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cur, *nxt;
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		cur = (ht->array)[index];
		while (cur != NULL)
		{
			nxt = cur->next;
			cur->next = NULL;
			cur->snext = NULL;
			cur->sprev = NULL;
			free(cur->key);
			cur->key = NULL;
			free(cur->value);
			free(cur);
			cur = nxt;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	free(ht);
}
