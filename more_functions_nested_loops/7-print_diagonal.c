#include "main.h"
/**
 * print_diagonal - Print spaces and diagonal
 *
 * @n: Variable of the function
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		for (i = 0; i <= x; i++)
		{
			if (i == x)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

