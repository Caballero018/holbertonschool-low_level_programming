#include <stdio.h>
#include <stdlib.h>

/**
 * main - Name
 *
 * @argc: Stands for argument count.
 * @argv: stands for argument values.
 * Return: 0 always.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
