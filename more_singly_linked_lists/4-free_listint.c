#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list.
 *
 * @head: Head of list.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head->next->next)
	{
		free(head);
	}
	free(head);
}
