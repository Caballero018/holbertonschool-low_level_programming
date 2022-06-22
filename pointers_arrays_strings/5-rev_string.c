#include "main.h"

/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
		d++;
	}

	while (d)
	{
		_putchar(s[d]);
		d--;
	}
}
