#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * using malloc.
 *
 * @s1: String to which s2 is concatenated.
 * @s2: S1 is contacted.
 * Return: A point to char.
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	x = malloc(sizeof(char) * (i + j + 1));

	if (x == NULL)
		return (NULL);

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		x[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		x[i] = s2[j];
		i++;
		j++;
	}

	return (x);
	free(x);
}
