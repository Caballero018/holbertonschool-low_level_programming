#include <stdlib.h>
#include "lists.h"

/**
 *
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
