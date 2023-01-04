#include "main.h"

/**
* _pow_recursion - his raises the power of x to y
* @x: this is numer that'll be raised to a power
* @y: this is the power
* Return: return 1 if y is zero, -1 if y is greater than 0
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
