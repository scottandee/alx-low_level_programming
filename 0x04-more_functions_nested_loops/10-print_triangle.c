#include "main.h"

/**
* print_triangle - this prints out a triangle of specified size
* @size: this is the size of the triangle to be printed
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((size - 2) - j >= i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
