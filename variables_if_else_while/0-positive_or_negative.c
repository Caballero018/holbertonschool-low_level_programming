#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int x;
	
	if(n < 0)
	{
		printf("%d is negative\n", x );

	}
	else if(n == 0)
	{
		printf("%d is zero\n", x);
	}
	printf("%d is positive\n", x);

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
