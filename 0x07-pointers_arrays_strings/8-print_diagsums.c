#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of all numbers in principal diagonal
* @a: this is the multidimensional array
* @size: this is the size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[j];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
