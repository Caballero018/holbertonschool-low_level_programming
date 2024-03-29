#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Function that frees a listint_t list.
 *
 * @head: Linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *li;

	if (head == NULL)
		return;
	li = *head;
	while (li->next)
	{
		free(li);
		li = li->next;
	}
	free(li);
	*head = NULL;
}
