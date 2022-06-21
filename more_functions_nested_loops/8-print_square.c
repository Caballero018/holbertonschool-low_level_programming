#include "main.h"
/**
 * print_diagonal - Print spaces and diagonal
 *
 * @n: Variable of the function
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
		_putchar('#');
                for (i = 0; i <= size; i++)
                {
			_putchar('#');

			if (i == size)
				_putchar('\n');

                }
        }
}
