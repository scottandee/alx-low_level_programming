#include "main.h"

/**
  * clear_bit - this sets the value of bit to zero at index
  * @n: this is the number in base 10
  * @index: this is the index of the bit to be set
  * Return: 1 if it worked and -1 if it failed
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
