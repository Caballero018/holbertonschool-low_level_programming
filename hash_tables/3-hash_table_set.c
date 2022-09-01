#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 *
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *ax = NULL;
	unsigned long int i = 0;

	if (!ht || !key || !value || *key)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	ax = ht->array[i];

	while (ax != NULL)
	{
		if (strcmp(ax->key, key) == 0)
		{
			free(ax->value);
			ax->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
