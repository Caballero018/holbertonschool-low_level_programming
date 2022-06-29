#include "main.h"

/**
 *
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (' ' == n[i++])
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
