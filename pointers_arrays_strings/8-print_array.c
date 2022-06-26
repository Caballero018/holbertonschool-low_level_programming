#include "main.h"
#include <stdio.h>

/**
 * print_array - print array.
 *
 * @a: The identifier that represents the array.
 * @n: represents the length of the array.
 */
void print_array(int *a, int n)
{
	int x, i;

	n = 0;

	while (a[n] != '\0')
	{
		n++;
	}
	x = n / 2;

	for (i = 0; i <= x; i++)
	{
		if (i == x)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}

}
