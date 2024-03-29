#include "search_algos.h"

/**
  * linear_search - This checks each element of an array for
  * the target element
  *
  * @array: This is the pointer to the first element of the array
  * @size: This is the number of elements in the array
  * @value: This is the target value
  * Return: IF found, return index of value; ELSE return -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
