#include "main.h"

/**
 * _strncpy - Copies the second string according to its number of bytes.
 *
 * @dest: Copy to src.
 * @src: String.
 * @n: Number of bytes.
 *
 * Return: dest.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
