#include "main.h"

/**
 * print_alphabet_x10 - the alphabet multiplicate * 10
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int x=0;
	char y , j;

	while (x < 10)
	{
		y = 'a';
		j = 'z';

		while (y <= j)
		{
			_putchar(y);
			y++;
		}

		_putchar('\n');
		x++;
	}
}
