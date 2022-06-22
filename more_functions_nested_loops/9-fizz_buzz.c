#include <stdio.h>
/**
* main - entry block
* Return: 0 Success
*/
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x%3==0 && x%5==0)
		{
			printf("FizzBuzz");
		}
		else if (x%3==0)
		{
			printf("fizz");
		}
		else if (x%5==0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d ",x);
		}
	}
	return (0);
}
