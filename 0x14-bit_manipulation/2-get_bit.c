#include "main.h"

/**
  * get_bit - this returns the value of bit at given index
  * @n: this is the number in base 10
  * @index: this is the index of the bit to be printed
  * Return: value of bit at that index or -1 if error occurs
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= (sizeof(unsigned long int) * 8))
		return(-1);

	value = n >> index;
	if (value & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}
