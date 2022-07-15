#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: Array.
 * @size: Number of elements of the array.
 * @action: Print elements of a array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
		action(array[i++]);

}
