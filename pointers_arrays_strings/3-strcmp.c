#include "main.h"

/**
 * _strcmp - Compare two strings.
 *
 * @s1: Firs string to comparate.
 * @s2: Second string to comparate.
 *
 * Return: A negative value if s1 is less than s2; a positive value if
 * s1 is greater than s2 y 0, if the s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1 - s2);
		i++;
	}
	return (0);
}
