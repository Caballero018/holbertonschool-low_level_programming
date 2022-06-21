#include "main.h"

/**
 * _issuper - This function checks if the
 * letter is uppercase or not
 *
 * @c: This variable helps us determine if the letters are uppercase
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
