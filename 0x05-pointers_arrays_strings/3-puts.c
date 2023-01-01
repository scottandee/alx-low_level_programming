#include "main.h"

/**
* _puts - prints the content of a string
* @str: this is the string that will be printed
*/

void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
