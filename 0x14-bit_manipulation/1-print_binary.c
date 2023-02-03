#include "main.h"

/**
  * print_binary - this prints the binary of a given number
  * @n: this is the value of the number in base 10
  * Return: binary representation of number
  */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}