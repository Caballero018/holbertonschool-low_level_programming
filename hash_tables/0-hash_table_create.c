#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table.
*
* @size: Size of hash table.
* Return: table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}

