#include <stdio.h>

/**
* print_array - prints a particular size of array
* @a: this is the pointer to the array
* @n: number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
