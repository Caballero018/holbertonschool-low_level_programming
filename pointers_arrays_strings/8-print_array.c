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
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x < (n - 1))
			printf(", ");
		x++;
	}
	putchar('\n');

}
