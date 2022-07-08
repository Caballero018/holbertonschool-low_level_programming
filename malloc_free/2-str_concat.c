#include "main.h"
#include <stdlib.h>

/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	x = malloc(sizeof(char) * (i + j + 1));

	if (x == NULL)
		return (NULL);

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		x[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		x[i] = s2[j];
		i++;
		j++;
	}

	return (x);
	free(x);
}
