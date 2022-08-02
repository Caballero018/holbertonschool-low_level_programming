#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 *
 * @action: Pointer to the function.
 * @array: The array.
 * @size: Is the size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;

	if (!action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
