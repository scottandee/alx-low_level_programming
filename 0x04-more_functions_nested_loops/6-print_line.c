#include "main.h"

/**
* print_line - this prints a line of described length
* Description: this prints a line of specified length
* @n: this is the length of the line
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
