#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Function that produces output according to a format.
 *
 * @size: Tamaño del array.
 * @c: Caracter a imprimir.
 * Return: A char to point.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	ar = (char *)malloc(size * sizeof(int));

	if (size == 0 && ar == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
		ar[i] = c;
	return (ar);
}
