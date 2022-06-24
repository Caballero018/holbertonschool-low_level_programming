#include "main.h"

/**
 * puts2 - function that prints arrays of
 * pointers str, except if is pair.
 *
 * @str: variable that is a pointer to integer.
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;

	}
	_putchar('\n');
}

