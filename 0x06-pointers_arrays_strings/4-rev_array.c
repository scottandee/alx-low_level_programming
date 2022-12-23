#include "main.h"

/**
* reverse_array - this reverses the content of an array
* @a: this is the string to be reversed
* @n: this is the number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i, temp, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
