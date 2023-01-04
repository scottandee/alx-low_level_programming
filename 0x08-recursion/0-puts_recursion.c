#include "main.h"

/**
* _puts_recursion - this prints the content of a string using recursion
* @s: this is the string to be printed
*/

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
