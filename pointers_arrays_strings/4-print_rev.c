#include "main.h"

/**
 * print_rev - Print arrays n reverse
 *
 * @s: VAriable that reverse
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	while (n)
	{
		n--;
		_putchar(s[n]);
	}
	_putchar('\n');
}
