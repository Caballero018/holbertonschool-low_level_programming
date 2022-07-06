#include "main.h"

/**
 * main - Print the result of the multiplication.
 *
 * @argc: Stands for argument count.
 * @argv: stands for argument values.
 * Return: 0 if has more of one argument.
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
