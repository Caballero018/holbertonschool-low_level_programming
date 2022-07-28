#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the
 * beginning of a listint_t list.
 *
 * @head: Linked list.
 * @n: Number of elements.
 * Return: A linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *li;

	li = (listint_t *)malloc(sizeof(listint_t));
	if (li == NULL)
		return (NULL);
	li->n = n;
	li->next = *head;

	*head = li;
	return (*head);



}
