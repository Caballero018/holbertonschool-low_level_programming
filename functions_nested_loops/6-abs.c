#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer
 *
 * @x: Representation type int
 *
 * Return: 0
 *
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else if (x > 0)
	{
		return (x);
	}
	return (0);
}
