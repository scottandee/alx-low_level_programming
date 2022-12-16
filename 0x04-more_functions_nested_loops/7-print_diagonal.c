#include "main.h"

/**
* print_diagonal - prints numbers 0 - 14 ten times
* @n: number of diagonals
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
