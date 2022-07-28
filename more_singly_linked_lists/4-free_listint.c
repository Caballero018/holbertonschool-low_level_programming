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
		return (NULL);
	while (head->next)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
