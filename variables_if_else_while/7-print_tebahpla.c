#include<stdio.h>

/**
 * main - Command putchar in while
 *
 * Return: 0 always
 */
int main(void)
{
	char i = 'a';
	char x = 'z';

	while (x >= i)
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
