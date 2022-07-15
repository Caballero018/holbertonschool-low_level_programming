#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 *
 * @array: Array
 * @size: Number of elements for search.
 * @cmp: Fuction pointer.
 * Return: If no element matches, return -1 and if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i++ < size)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
