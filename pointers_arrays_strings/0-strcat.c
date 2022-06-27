#include "main.h"

/**
 * _strcat - Function that adds a string to another string.
 *
 * @dest: Variable to which the string is added.
 * @src: String to add.
 *
 * Return: (dest).
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	dest[i] = ' ';
	i = (i - 1);
	

	while (src[x] != '\0')
	{
		x++;
	}

	dest[i] = x;

	return (dest);
}

