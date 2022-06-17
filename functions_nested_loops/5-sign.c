#include "main.h"

/**
 * print_sign - Prints the sign depending
 * on whether it is greater or less.
 *
 * @n: Reflects the value according to its type with a sign
 *
 * Return: Returns 1 if the number is positive, returns 0 if
 * the number is equal to 0, and returns -1 if the number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
