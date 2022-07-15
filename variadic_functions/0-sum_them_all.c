#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n:Variable
 * Return: i + n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	if (n == 0)
		return (0);
	return (i + n);
}
