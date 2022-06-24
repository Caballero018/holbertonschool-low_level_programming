#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse strings.
 *
 * @s: Variable in which the result of the string reversal is stored.
 */
void rev_string(char *s)
{
	int x = 0, l = _strlen(s);
	char rev[1024];
	
	rev[l] = '\0';
	l = l - 1;

	while (l >= 0)
	{
		rev[x] = s[l];
		x++;
		l--;
	}
	s = rev;
	printf("%s", s);
}
