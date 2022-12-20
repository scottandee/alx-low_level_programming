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
	for (length = length - 1; s[length] != '\0'; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
