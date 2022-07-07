#include "main.h"

/**
 * main - Program that adds positive numbers.
 *
 * @argc: Stands for argument count.
 * @argv: stands for argument values.
 * Return: 0 if it doesn't output something other than a number.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, j = 0;

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
