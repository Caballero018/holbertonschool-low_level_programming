#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse strings.
 *
 * @s: Variable in which the result of the string reversal is stored.
 */
void rev_string(char *s)
{
	int x = 0, n = 0;
	char rev[1026];

	while (s[x])
	{
		rev[x] = s[x];
		x++;
	}
	x = x - 1;

	while (x >= 0)
	{
		s[x] = rev[n];
		n++;
		x--;

	}
}
