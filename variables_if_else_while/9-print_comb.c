#include<stdio.h>

/**
 * main - of 0 and 9 with , and $
 *
 * Return: 0
 *
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);

		if (i == '9')
		{
			putchar(' ');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}

	return (0);
}
