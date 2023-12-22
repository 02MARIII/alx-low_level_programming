#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 * @ht: const param for hash_table_t
 * @key: const param for string
 *
 * Return: Value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
