#include "main.h"

/**
* _puts_recursion - this prints the content of a string using recursion
* @s: this is the string to be printed
*/

void _puts_recursion(char *s)
{
	int count = 0;

	if (*(s + count) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + count));
	count++;

	_puts_recursion(s + count);
}
