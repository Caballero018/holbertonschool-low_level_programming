#include "main.h"

/**
 * _strncat - concatenates two strings according to their number of bytes.
 *
 * @dest: First string.
 * @src: Second string, this shows the number of bytes according
 * to the indicative of n.
 * @n: Number of bytes.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;

	}

	return (dest);
}
