#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Contains s1, followed by the first n bytes of
 * s2, and null terminated.
 *
 * @s1: Point a char.
 * @s2: Point a char.
 * @n: Number of bytes of s2.
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (j <= n)
		j++;

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (j <= n && s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';

	return (s);
	free(s);
}
