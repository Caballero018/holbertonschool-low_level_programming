#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 *
 * @key: is the key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be
 *	stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0, j;

	j = hash_djb2(key);
	i = j % size;

	return (i);
}
