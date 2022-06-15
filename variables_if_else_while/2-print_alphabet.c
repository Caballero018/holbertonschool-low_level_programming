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

	while (i <= x)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);

}


