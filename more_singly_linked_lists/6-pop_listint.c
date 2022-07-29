#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * of a listint_t linked list.
 *
 * @head: Linked list.
 *
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *li = *head;
	int i = li->n;
	
	if (head == NULL)
		return (0);

	while (li->next)
	{
		if (li == *head && i != 0)
			free(*head);
		li = li->next;
	}

	return (i);
	

}
