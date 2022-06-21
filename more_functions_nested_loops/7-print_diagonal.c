#include "main.h"
/**
 * print_diagonal - Print spaces and diagonal
 *
 * @x: Variable of the function
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(' ');
			
			for (i = 0; i < n; i++)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
		_putchar('\n');

	}
}

