#include <stdio.h>

/**
 * main - Print numbers of 0 to 89 with putchar.
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;

	for (; x < 90; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x == 89)
		{
			putchar('\n');
		
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

	}
	return (0);
}
