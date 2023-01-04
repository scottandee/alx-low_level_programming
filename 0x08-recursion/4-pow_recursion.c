#include "main.h"

/**
* _pow_recursion - this raises the power of x to y
* @x: this is numer that'll be raised to a power
* @y: this is the power
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
