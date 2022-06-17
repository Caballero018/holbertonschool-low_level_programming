#include "main.h"

/**
 * print_alphabet - alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char x = 'a';

	while( x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
