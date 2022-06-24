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
		if (longi % 2  == 0)
		{
			n = (longi - 1) / 2;
			_putchar(str[n]);

		}
		longi++;
	}
	_putchar('\n');
}
