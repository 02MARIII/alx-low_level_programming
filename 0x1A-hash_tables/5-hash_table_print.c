#include "hash_tables.h"

/**
 * hash_table_print - Entry point
 * @ht: const param for hash_table_t
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, printed_count = 0;
	hash_node_t *current_node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

		while (current_node != NULL)
		{
			printf("%s'%s': '%s'", printed_count == 0 ? "" : ", ",
				current_node->key, current_node->value);
			printed_count++;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
