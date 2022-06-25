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

	if (longi % 2 == 0 && longi > 10)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(str[x]);
		}
	}
	else
	{
		if (longi <= 10)
			x = n;
		else
		{
			x = n + 1;
		}

		while (x < longi)
		{
			_putchar(str[x]);
			x++;
		}
	}
	_putchar('\n');
}
