#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Print name.
 *
 * @name: Variable to print.
 * @f: Fuction pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
