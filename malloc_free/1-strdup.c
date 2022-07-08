#include "main.h"

/**
 * _strdup - function returns a pointer to a new
 * string which is a duplicate of the string str.
 *
 * @str: String to duplicate.
 * Return: Point to char.
 */
char *_strdup(char *str)
{
	int i;
	char *sr;

	i = 0;

	while (str[i])
		i++;

	sr = malloc(sizeof(str) * i);

	if (str == NULL)
	{
		return (NULL);
	}
	if (sr == NULL)
	{
		return (NULL);
	}
	return (sr);

	free(sr);
}
