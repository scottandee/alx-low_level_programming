#include "main.h"

/**
* print_rev - this prints the reverse to std output
* @s: this is the string to be reversed
*/

void print_rev(char *s)
{
	int i, length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = length; i >= 0; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
