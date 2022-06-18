#include "main.h"

/**
 * print_last_digit - Last digit of value of X
 *
 * @x: Number
 *
 * Return: 0
 */
int print_last_digit(int x)
{
	int y = x % 10, r = x / 10;

	if (y < 0)
	{
		return (-y);
	}

	_putchar('0' + r);
	_putchar('0' + y);

	return (y);
}
