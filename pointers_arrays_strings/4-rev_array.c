#include "main.h"

/**
 * reverse_array - Revers a array.
 *
 * @a: Array identifier.
 * @n: Number of array elements.
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	for (; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
