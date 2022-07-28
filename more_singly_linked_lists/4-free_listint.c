#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list.
 *
 * @head: Head of list.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		head = head->n; 
		head = head->next;
		free(head);

	}
}
