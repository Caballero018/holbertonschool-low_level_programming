#include "main.h"
/**
 * print_diagonal - Print spaces and diagonal
 *
 * @x: Variable of the function
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
