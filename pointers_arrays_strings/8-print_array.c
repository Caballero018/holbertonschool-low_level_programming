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
	n = 0;

	while (a[n] != '\0')
	{
		if (n == ('\0' - 1))
			printf("%d\n", a[n]);
		else
			printf("%d, ", a[n]);
		n++;
	}

}
