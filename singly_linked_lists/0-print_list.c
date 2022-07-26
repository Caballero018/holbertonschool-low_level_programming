#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 *
 * @h:
 * Return:
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d]%s", h->len, h->str);
		h = h->next;		
		n++;
	}
	return (n);
}
