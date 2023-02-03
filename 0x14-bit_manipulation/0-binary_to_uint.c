#include "main.h"

/**
  * binary_to_uint - this converts a binary number to an unsigned int
  * @b: this is a string of the binary number to be converted
  * Return: the converted number or zero if b is null
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 0, length = 0;
	unsigned int value = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	while (b[length] != '\0')
	{
		length++;
	}
	pow = length - 1;
	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			pow--;
			continue;
		}
		else if (b[i] == '1')
		{
			value = value + (1 << pow);
			pow--;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
