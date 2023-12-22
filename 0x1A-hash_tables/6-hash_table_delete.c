#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node = NULL;
	unsigned long int n = 0;

	if (ht != NULL)
	{
		while (n < ht->size)
		{
			while (ht->array[n] != NULL)
			{
				current_node = ht->array[n];
				ht->array[n] = ht->array[n]->next;

				if (current_node->value)
					free(current_node->value);
				if (current_node->key)
					free(current_node->key);
				free(current_node);
			}
			free(ht->array[n]);
			n++;
		}
		free(ht->array);
		free((void *)ht);
	}
}
