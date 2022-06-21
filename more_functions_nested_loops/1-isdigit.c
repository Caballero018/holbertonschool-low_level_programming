#include "main.h"

/**
 * _isdigit - function that differentiates between
 * numbers 0 - 9 from other characters.
 *
 * @c: is a variable that helps us differentiate between
 * numbers 0 - 9 and from other characters.
 *
 * Return: returns 1 if it is a number between (0 and 9),
 * if it is something else it returns 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
