#include "main.h"

/**
* _isdigit - checks if argument is a digit or not
* @c: this is the character that will be checked
* Return: 1 if digit, 0 if not
*/

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
	{
		return (1);
	}
	return (0);
}
