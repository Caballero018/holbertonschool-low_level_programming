#include "main.h"

/**
 * _isupper - Function that prints if it is uppercase
 *
 * @c: variable that determines whether it is uppercase
 * Return: 1 is returned if it is uppercase and 0 if it is not.
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
