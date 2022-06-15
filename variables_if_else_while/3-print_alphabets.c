#include<stdio.h>

/**
 * main - Alphabet minus and mayus
 *
 * Return: 0
 *
 */

int main(void)
{
	char x = 'a', r = 'z', n = 'A', l = 'Z';

	for (; x <= r; x++)
	{
		putchar(x);
	}

	for (; n <= l; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}


