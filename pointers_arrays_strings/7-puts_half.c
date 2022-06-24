#include "main.h"

/**
 *
 *
 */
void puts_half(char *str)
{
	int longi = 0;

	while (str[longi] != '\0') 
	{
		if (longi > 4)
		{
			_putchar(str[longi]);
		}
		longi++;
	}
}
