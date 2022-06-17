#include "main.h"

/**
 * int _islower -
 *
 * Return: 1
 * Return: 0
 */

int _islower(int c)
{
	char c;

	if(islower(c))
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
