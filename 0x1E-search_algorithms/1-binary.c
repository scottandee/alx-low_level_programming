#include "search_algos.h"

/**
  * binary_search - This uses the binary search algorithm to find
  * the target element in a sorted array
  *
  * @array: This is the pointer to the first element of the array
  * @size: This is the number of elements in the array
  * @value: This is the target value
  * Return: IF found, return index of value; ELSE return -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = (l + r) / 2;
		if (value > array[m])
		{
			l = m + 1;
		}
		else if (value < array[m])
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
