#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * using malloc.
 *
 * @b: Size of variable a return.
 * Return: i.
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(sizeof(int) * b);

	return (i);
	free(i);
}
