#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - entry point function
  * void: the function takes no arguments
  *
  * Description: This is the entry point function
  * Return: The function returns zero
  **/
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("%d is positive\n", n);
		} else if (n < 0)
		{
			printf("%d is negative\n", n);
		} else
		{
			printf("%d is zero\n", n);
		}
		return (0);
}
