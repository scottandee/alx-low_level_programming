#include "main.h"

/**
* print_square - prints ssquare of specified size
* @size: size of square
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(95);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}