#include "main.h"
#include <stdlib.h>

/**
 * array_range - The array contains all the value from min (inclusive)
 * to max (inclusive), sorted from min to max.
 *
 * @min: int min number.
 * @max: int min.
 * Return: ar.
 */
int *array_range(int min, int max)
{
	int *ar, i = 0;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);
	while (min <= max)
		ar[i++] = min++;

	return (ar);
}
