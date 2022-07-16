#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 *
 * @separator: Separator
 * @n: Number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ar;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		ar = va_arg(ptr, char *);
		if (ar != NULL)
			if (separator != NULL && i != (n - 1))
				printf("%s%s", ar, separator);
			else
				printf("%s", ar);
		else
				printf("(nil)");
	}
	printf("\n");


}
