#include "main.h"

/**
 * more_numbers - function that prints 10 times numbers from 1 to 14
 */
void more_numbers(void)
{
	int c, x;

	for (c = 0; c < 11; c++)
	{
		for (x = 0; x < 15 ; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
