#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of times 1 appears (count).
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int  count = 0, k;
	unsigned long int  j = n ^ m;

	while (j != 0)
	{
		k = j & 1;

		if (k == 1)
			count++;
		j = j  >> 1;
	}
	return (count);
}
