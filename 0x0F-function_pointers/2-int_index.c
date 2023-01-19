#include "function_pointers.h"

/**
* int_index - this function searches for an integer
* @array: this is the array ro be checked
* @size: this is the size of the array
* @cmp: pointer to function that will be used to compare values
* Return: -1, if no element matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
