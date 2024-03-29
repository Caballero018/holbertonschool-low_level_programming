#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 *
 * @head: List to free.
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
