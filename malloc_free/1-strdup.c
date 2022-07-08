#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new
 * string which is a duplicate of the string str.
 *
 * @str: String to duplicate.
 * Return: Point to char.
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *sr;

	while (str[i])
		i++;

	sr = malloc(sizeof(str) * i);

	for (j = 0; str[j]; j++)
	{
		sr[j] = str[j];
	}

	if (str == NULL)
		return (NULL);

	if (sr == NULL)
		return (NULL);

	return (sr);

	free(sr);
}
