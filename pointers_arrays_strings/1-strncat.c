#include "main.h"

/**
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[n])
	{
		n++;
	}
	dest[i] = src[n];

	return (dest);
}
