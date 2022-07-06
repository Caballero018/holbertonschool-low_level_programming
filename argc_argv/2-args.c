#include "main.h"

/**
 * main - Prints all arguments it receives.
 *
 * @argc: Not used.
 * @argv: stands for argument values.
 * Return: 0 always
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

	return (0);
}
