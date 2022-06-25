#include "main.h"

/**
 * puts_half - print the contents of the arrays
 * from position 5 onwards.
 *
 * @str: Variable of the function.
 */
void puts_half(char *str)
{
	int longi = 0, n;

	while (str[longi] != '\0')
	{
		longi++;
	}
	n = (longi - 1) / 2;

	if (i % 2 == 0)
	{
		_putchar(str[longi]);
	}
	else
	{
		 _putchar(str[n]);
	}
	_putchar('\n');
}
