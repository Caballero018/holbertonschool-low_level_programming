#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * using malloc.
 *
 * @b: Size of variable a return.
 * Return: i.
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	return (i);
	free(i);
}
