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
		dest[i] = src[n];
		i++;
		n++;
	}

	return (dest);
}
