#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Function that adds a new node at the
 * beginning of a list_t list.
 *
 * @head: List.
 * @str: String.
 *
 * Return: The address of the new element, or NULL
 * if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ls = NULL;
	int i = 0;
	char *dup = strdup(str);

	ls = (list_t *)malloc(sizeof(list_t));

	if (ls == NULL)
		return (NULL);

	while (str[++i])
		;

	ls->str = dup;
	ls->len = i;
	ls->next = *head;

	*head = ls;

	return (*head);
}
