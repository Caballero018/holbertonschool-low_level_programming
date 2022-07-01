#include "main.h"

/**
 * _strchr - Function that locates a character
 * in a string.
 *
 * @s: point to char.
 * @c: Variable.
 * Return: &s[i].
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
