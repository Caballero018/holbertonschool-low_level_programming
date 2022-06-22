#include "main.h"

/**
 * swap_int - Change the value of a and b.
 *
 * @a: Variable to change.
 * @b: Second variable to change.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
