#include "main.h"

/**
 * _memset - Function that prints what you specify
 * as many times as you want.
 *
 * @s: Point to char
 * @b: what you want to print.
 * @n: Number of times.
 * Return: n
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
