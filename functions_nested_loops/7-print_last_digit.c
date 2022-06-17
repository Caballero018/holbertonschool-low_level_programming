#include "main.h"

/**
 * print_last_digit - Last digit of value of X
 *
 * @x: Number
 * @y: Last digit of number
 *
 * Return: 0
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
	{
		_putchar('4');
		return (-y);
	}

	_putchar('0' + y);

	return (y);
}
