#include "main.h"

/**
* _puts - prints the content of a string
* @str: this is the string that will be printed
*/

void _puts(char *str)
{
	int i, length = _strlen(*str);

	for (i = 0; i < length; i++)
	{
		_putchar(*(str + i));
	}
}
