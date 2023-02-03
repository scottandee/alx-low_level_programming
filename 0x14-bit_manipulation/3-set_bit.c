#include "main.h"

/**
  * set_bit - this sets the bit at a particular point
  * @n: this the number in base 10
  * @index: this is the index that will be edited
  * Return: 1 if it worked and -1 if it failed
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
