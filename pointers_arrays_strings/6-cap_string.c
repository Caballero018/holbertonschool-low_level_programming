#include "main.h"

/**
 * cap_string - This function defines delimiters and after them
 * the first letter of each word becomes uppercase.
 *
 * @n: points to the variable that is specified in main.
 * Return: n.
 *
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] == ' ' || n[i] == ',' || n[i] == '\n' || n[i] == ';' ||
		    n[i] == '"' || n[i] == '\t' || n[i] == '.' || n[i] == '!' ||
		    n[i] == '?' || n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
		{
			if (n[1 + i] >= 'a' && n[1 + i] <= 'z')
				n[1 + i] = n[1 + i] - 32;
		}
		i++;
	}
	if (n[0] >= 97 && n[0] <= 122)
		n[0] = n[0] - 32;

	return (n);
}
