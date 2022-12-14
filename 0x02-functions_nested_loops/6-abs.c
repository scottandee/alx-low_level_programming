#include "main.h"
/**
 * _abs - shows absolute value
 * Description: returns the absolute value of the argument
 * @x: this is the argument thatll be checked
 * Return: this'll return a value of 0
 **/
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		_putchar(x);
		return (0);
	}
	_putchar(x);
	return (0);
}
