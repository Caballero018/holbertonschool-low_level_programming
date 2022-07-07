#include "main.h"

/**
 * main - Program that adds positive numbers.
 *
 * @argc: 
 * @argv:
 * Return:
 */
int main(int argc, char *argv[])
{
	int i = 0, sum = 0, j = 0;
	
	for (; i < argc; i++)
	{
		for (j = 0; argv[j]; j++)
		{
			if (!(argv[j] >= '0' && argv[j] <= '9'))
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
