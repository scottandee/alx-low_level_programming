#include "main.h"

/**
* puts2 - prints even numbers
* @str: this is the sting that will be printed
*/

void puts2(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	for (i = 0; i < length, i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
