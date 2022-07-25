#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: Variable to copy.
 * Return: Char a point.
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *copy;

	while (str[i])
		i++;

	copy = (char *)malloc(i * sizeof(char));

	if (copy == NULL || str == NULL)
		return (NULL);

	while (j <= i)
	{
		copy[j] = str[j];
		j++;
	}

	return (copy);
}
