#include <stdio.h>
#include <stdlib.h>

/**
 * main - Name
 *
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
