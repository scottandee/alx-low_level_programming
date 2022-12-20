#include "main.h"

/**
* puts_half - prints half of any array
* @str: this is the string thatll be split
*/

void puts_half(char *str)
{
	int i, length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	if (length % 3 == 0)
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
	else
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
