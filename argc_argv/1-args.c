#include "main.h"

/**
 * main - Prints the number of arguments passed into it.
 *
 * @argc: Stands for argument count.
 * @argv: stands for argument values.
 * Return: 0 always.
 *
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
