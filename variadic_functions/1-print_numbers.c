#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 *
 * @separator: Separator to print.
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int ar;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		ar = va_arg(ptr, int);
		if (i != (n - 1) && separator != NULL)
			printf("%d%s", ar, separator);
		else
			printf("%d", ar);
	}
	printf("\n");
	va_end(ptr);
}
