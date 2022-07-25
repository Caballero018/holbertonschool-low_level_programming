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

	if (size == 0)
		return (NULL);

	ar = (char *)malloc(size * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (; i < size; i++)
		ar[i] = c;
	return (ar);
}
