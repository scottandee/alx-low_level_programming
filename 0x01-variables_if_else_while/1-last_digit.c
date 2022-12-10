#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - entry point function
  * Description: This is the entry point function
  * Return: The function returns zero
  **/

int main(void)
{
		int n, m;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		m = n % 10;
		if (m > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		else if (m == 0)
			printf("Last digit of %d is 0 and is 0\n", n);
		else
			printf("Last digit of %d is %d and is less than and not 0\n", n, m);
		return (0);
}
