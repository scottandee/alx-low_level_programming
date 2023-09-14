#include "search_algos.h"

/**
  * jump_search - This uses the jump search algorithm to find
  * the target element in a sorted array
  *
  * @array: This is the pointer to the first element of the array
  * @size: This is the number of elements in the array
  * @value: This is the target value
  * Return: IF found, return index of value; ELSE return -1
  */

int jump_search(int *array, size_t size, int value)
{
	size_t curr = 0, prev = 0, m = sqrt(size), i;

	if (array == NULL)
	{
		return (-1);
	}
	while (array[curr] < value && curr <= (size - 1))
	{
		printf("Value checked array[%ld]\n", curr);
		if (array[curr] == value)
		{
			return (curr);
		}
		prev = curr;
		curr = prev + m;
	}
	if (array[curr] == value)
	{
		printf("Value checked array[%ld]\n", curr);
		return (curr);
	}
	if (curr != 0)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	}
	curr = curr - 1;

	for (i = prev; i <= size - 1 && i <= curr; i++)
	{
		printf("Value checked array[%ld]\n", i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
