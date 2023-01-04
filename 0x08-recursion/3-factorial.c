#include "main.h"

/**
* factorial - this prints the factorial of an input number
* @n: this is the input number
* Return: the factorial of number snd -1 if n < 0
*/

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
