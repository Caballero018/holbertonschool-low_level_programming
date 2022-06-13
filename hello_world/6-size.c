#include <stdio.h>

/**
 * main - size of memory
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	sizeof float a;
	sizeof char b;
	sizeof int c;
	sizeof long int d;
	sizeof long long int e;

	printf("Size of a char: %lu byte(s)\n", b);
	printf("Size of an int: %lu byte(s)\n"), c;
	printf("Size of a long int: %lu byte(s)\n", d);
	printf("Size of a long long int: %lu byte(s)\n", e);
	printf("Size of a float: %lu byte(s)\n"), a;

	return (0);
}
