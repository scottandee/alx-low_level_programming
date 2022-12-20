#include "main.h"

/**
* puts_half - prints half of any array
* @str: this is the string thatll be split
*/

void puts_half(char *str)
{
	int half, length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	half = length / 2;

	if (index % 2 == 1)
	{
		half++;
	}
	while (half < index)
	{
		_putchar(*(s + half));
		half++;
	}
	_putchar('\n');

}
