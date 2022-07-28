#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: Linked list.
 * @n: Number of elements.
 * Return: li
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *li, *rev;

	li = (listint_t *)malloc(sizeof(listint_t));
	if (li == NULL)
		return (NULL);
	li->n = n;
	li->next = NULL;
	rev = *head;

	if (rev == NULL)
	{
		*head = li;
		return (*head);
	}

	while (rev->next)
		rev = rev->next;

	rev->next = li;

	return (li);
}
