#include "main.h"

/**
 * _isalpha - Identifies the type of result that is in the variable c
 * according to its type through the return
 *
 * @c: identify if it is a letter or something else.
 *
 * Return: 1 if is lowercase or capital letter
 * and 0 if is if none of the above.
 *
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);

}
