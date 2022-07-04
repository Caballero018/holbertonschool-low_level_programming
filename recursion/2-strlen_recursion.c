#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a
 * string using recursion.
 *
 * @s: Point to char.
 * Return: 0 if it is equal to null.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + (_strlen_recursion(s + 1)));

}
