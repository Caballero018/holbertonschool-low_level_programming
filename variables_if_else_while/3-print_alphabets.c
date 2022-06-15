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
	putchar('\n');
	
	for (; n <= l; n++)
	{
		putchar(n);
	}
}
