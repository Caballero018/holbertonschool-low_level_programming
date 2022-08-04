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
	unsigned int  count = 0, identifier = 0;
	unsigned long int  different = n ^ m;

	while (different)
	{
		identifier = different & 1;

		if (identifier == 1)
			count++;
		different = different  >> 1;
	}
	return (count);
}
