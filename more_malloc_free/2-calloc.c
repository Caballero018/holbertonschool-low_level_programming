#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for
 * an array, using malloc.
 *
 * @nmemb: type unsigned int.
 * @size: type unsigned int.
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		res[i] = 0;

	return (res);

}
