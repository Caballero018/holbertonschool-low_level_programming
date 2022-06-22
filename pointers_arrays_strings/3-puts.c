#include "main.h"

/**
 * _puts - point a char with array llamed 'n'.
 *
 * @str: Variable that is a pointer that contains an array named 'n'.
 */
void _puts(char *str)
{
	int n = 0;

	for(; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
