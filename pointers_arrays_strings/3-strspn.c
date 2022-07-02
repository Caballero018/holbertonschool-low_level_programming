#include "main.h"

/**
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] == accept[i])
			return (i);
		i++;
	}
	return (i);
}
