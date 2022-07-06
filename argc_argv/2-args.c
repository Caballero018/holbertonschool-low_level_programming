#include "main.h"

/**
 *
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;
	
	for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

	return (0);
}
