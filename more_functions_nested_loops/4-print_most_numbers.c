#include "main.h"

/**
 * print_numbers - Print integers from 0 to 9.
 *
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10 ; c++)
	{
		if (c != '2' && c != '6')
		{
			_putchar(c);
		}
	}
	_putchar('\n');

}
