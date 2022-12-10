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
			printf("is positive");
		} else if (n < 0)
		{
			printf("is negative");
		} else
		{
			printf("is equal");
		}
		return (0);
}
