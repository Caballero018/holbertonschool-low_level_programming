#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @n: Pointer type char.
 * Return: n
 *
 */
char *leet(char *n)
{
	char doble[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
		{'t', 'T'}, {'l', 'L'}};
	char x[] = {'4', '3', '0', '7', '1'};
	int i = 0, j;

	while (n[i] != '\0')
	{
		j = 0;

		while (j < 100)
		{
			if (n[i] == doble[i][j] && doble[i][j] != ' ')
				n[i] = x[i];
			else
				break;
			j++;
		}
		i++;
	}

	return (n);
}
