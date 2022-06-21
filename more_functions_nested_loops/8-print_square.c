#include "main.h"
/**
 * print_square - Print spaces and square
 *
 * @size: Variable of the function
 */
void print_square(int size)
{
	int x, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
