#include <stdio.h>

/**
* main - entry point
* Return: 0
*/

int main(void)
{
	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("Fizz Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		printf("%d ", i);
	}
}
