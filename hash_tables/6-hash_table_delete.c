#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 *
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp = NULL;

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
