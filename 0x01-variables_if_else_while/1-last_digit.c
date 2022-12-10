#include <stdlib.h>
#include <time.h>
#include <stdio.h
/**
  * main - entry point function
  * Description: This is the entry point function
  * Return: The function returns zero
  **/

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		int m;

		m = n % 10
		if (m > 5)
		{
			printf("Last digit of %d is %d and is greater than 5", n, m);
		} else if (m < 6 && m != 0)
		{
			printf("Last digit of %d is %d and is less than and not equal to zero\n", n, m);
		} else
		{
			printf("Last digit of %d is %d and is 0", n, m);
		}
		return (0);
}
