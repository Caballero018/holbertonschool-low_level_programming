#include "main.h"

/**
 * puts_half - print the contents of the arrays
 * from position 5 onwards.
 *
 * @str: Variable of the function.
 */
void puts_half(char *str)
{
	int longi = 0, n, x;

	while (str[longi] != '\0')
	{	
			longi++;
	}
	n = longi / 2;

	if (longi % 2 == 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		for (x = (n + 1) ; x < longi ; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
