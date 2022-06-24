#include "main.h"
#include <stdio.h>

int _slen(char *s);

/**
 * rev_string - reverse strings.
 *
 * @s: Variable in which the result of the string reversal is stored.
 */
void rev_string(char *s)
{
	int x = 0, l = _slen(s);
	char rev[1000];

	rev[l] = '\0';
	l = l - 1;

	while (l >= 0)
	{
		rev[x] = s[l];
		x++;
		l--;
	}
	while (l <= x)
	{
		s[l] = rev[l];
		l++;


	}
}

/**
 * _slen - returns the length of a string.
 *
 * @s: Variable that point char.
 * Return: point
 *
 *
 */
int _slen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
