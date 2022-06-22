#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: Variable that point char.
 * Return: point
 *
 *
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
