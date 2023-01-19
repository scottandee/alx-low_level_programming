#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function on each element of an array
* @size: the size of the array
* @action: the function to run
* @array: this is the size of the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
