#include "main.h"

/**
 * factorial - Factorial of n.
 *
 * @n: Variable factorial.
 * Return: -1 if is less than n, 1 if is equal to n
 * and n * factorial (n-1) else.
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
