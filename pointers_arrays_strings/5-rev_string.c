#include "main.h"

/**
 *
 *
 *
 */
void rev_string(char *s)
{
	char rev;
        int i = 0, x;

	while (s[i] != '\0')
	{
		i++;		
	}
	
	for (x = 0; x < i; x++)
	{
		i--;
		rev = s[x];
		s[x] = s[i];
		s[i] = rev;

	}

}
