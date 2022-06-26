#include "main.h"

/**
 * _strcpy - Funtion that copy a string.
 *
 * @dest: Array that copy the string.
 * @src: String to copy to.
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
