#include "main.h"

/**
 * leet - Replace the addresses of 'x' by those of 'y'
 * in case 'n' finds them when traversing them.
 *
 * @n: Point to char.
 * Return: n.
 */
char *leet(char *n)
{
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == x[j])
				n[i] = y[j];
		}
	}
	return (n);
}
