#include "main.h"

/**
 * print_line - This function prints a '_' if the number is greater than 0,
 * otherwise it prints line breaks.
 *
 * @n: Variable of the function
 *
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
