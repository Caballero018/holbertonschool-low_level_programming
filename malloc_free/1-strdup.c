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

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	sr = malloc(sizeof(char) * i + 1);

	if (sr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		sr[j] = str[j];

	return (sr);

	free(str);
}
