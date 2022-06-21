#include "main.h"
/**
 * print_diagonal - Print spaces and diagonal
 *
 * @x: Variable of the function
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

