#include "main.h"

/**
 * puts_half - print the contents of the arrays
 * from position 5 onwards.
 *
 * @str: Variable of the function.
 */
void puts_half(char *str)
{
	int longi = 0, x = 5;

	while (str[longi] != '\0')
	{
		if (longi %20 == 1)
		{
			_putchar(str[longi])
		}
		longi++;

	}

	_putchar('\n');
}
