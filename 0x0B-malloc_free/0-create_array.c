#include <stdio.h>
#include <stdlib.h>
/**
* *create_array - this creates an array and initializes it with a specific char
* @size: size of array
* @c: this is the chaaracter each array will be initialiuzed with
* Return: pointer to array if successful and null if not
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0 || size == '\0')
	{
		return ('\0');
	}
	else
	{
		array = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
