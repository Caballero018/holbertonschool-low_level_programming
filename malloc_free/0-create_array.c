#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: Size of the array.
 * @c: Character of the array.
 * Return: A NULL or a Array, depend of the situation.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}

	return (ar);
	free(ar);
}
