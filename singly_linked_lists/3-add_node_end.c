#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at
 * the end of a list_t list.
 *
 * @head: List
 * @str: String to print.
 * Return: rev.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup = strdup(str);
	list_t *rev, *li;
	int i = 0;

	li = (list_t *)malloc(sizeof(list_t));
	if (li == NULL)
		return (NULL);

	while (str[i])
		i++;

	li->str = dup;
	li->len = i;
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

	return (rev);
}
