#include "main.h"

/**
 * int _islower - Identify if they are lowercase with the islower function
 * _islower: Identify of lowercase
 *
 * Return: 1  if are lowercase and 0 if are cápital letters.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
