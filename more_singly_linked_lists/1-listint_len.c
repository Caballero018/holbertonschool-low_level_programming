#include "lists.h"

/**
 * listint_len - Function that returns the number
 * of elements in a linked listint_t list.
 *
 * @h: Header of the linked list.
 * Return: Number of elments.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->n)
			i++;
		h = h->next;
	}
	return (i);

}
