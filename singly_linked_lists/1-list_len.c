#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number
 * of elements in a linked list_t list.
 *
 * @h: Linked list.
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			n++;
		h = h->next;
	}
	return (n);


}
